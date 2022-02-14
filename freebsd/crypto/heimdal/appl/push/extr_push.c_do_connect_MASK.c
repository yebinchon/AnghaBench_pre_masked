
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; int ai_family; struct addrinfo* ai_next; } ;
typedef int portstr ;
typedef int nodelay ;
typedef int hints ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int,char*,char const*,int ) ;
 int FUNC_4 (struct addrinfo*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char const*,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_7 (struct addrinfo*,int ,int) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int,int ,int ,void*,int) ;
 int FUNC_10 (char*,int,char*,int) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (char*,char const*) ;
 int FUNC_13 (char*,char const*) ;

__attribute__((used)) static int
FUNC_14 (const char *VAR_4, int VAR_5, int VAR_6)
{
    struct addrinfo *VAR_7, *VAR_8;
    struct addrinfo VAR_9;
    int VAR_10;
    int VAR_11 = -1;
    char VAR_12[VAR_1];

    FUNC_7 (&VAR_9, 0, sizeof(VAR_9));
    VAR_9.ai_socktype = VAR_2;
    VAR_9.ai_protocol = VAR_0;

    FUNC_10 (VAR_12, sizeof(VAR_12), "%u", FUNC_8(VAR_5));

    VAR_10 = FUNC_6 (VAR_4, VAR_12, &VAR_9, &VAR_7);
    if (VAR_10)
 FUNC_3 (1, "getaddrinfo(%s): %s", VAR_4, FUNC_5(VAR_10));

    for (VAR_8 = VAR_7; VAR_8 != ((void*)0); VAR_8 = VAR_8->ai_next) {
 VAR_11 = FUNC_11 (VAR_8->ai_family, VAR_8->ai_socktype, VAR_8->ai_protocol);
 if (VAR_11 < 0)
     continue;
 if (FUNC_1 (VAR_11, VAR_8->ai_addr, VAR_8->ai_addrlen) < 0) {
     FUNC_12 ("connect(%s)", VAR_4);
      FUNC_0 (VAR_11);
      continue;
 }
 break;
    }
    FUNC_4 (VAR_7);
    if (VAR_8 == ((void*)0)) {
 FUNC_13 ("failed to contact %s", VAR_4);
 return -1;
    }

    if(FUNC_9(VAR_11, VAR_0, VAR_3,
    (void *)&VAR_6, sizeof(VAR_6)) < 0)
 FUNC_2 (1, "setsockopt TCP_NODELAY");
    return VAR_11;
}
