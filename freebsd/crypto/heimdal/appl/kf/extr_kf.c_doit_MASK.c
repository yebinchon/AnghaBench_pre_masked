
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; int ai_family; struct addrinfo* ai_next; } ;
typedef int portstr ;
typedef int hints ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int,char*,char const*,int ) ;
 int FUNC_3 (struct addrinfo*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char const*,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_6 (struct addrinfo*,int ,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,char const*,char const*,char*,size_t) ;
 int FUNC_9 (char*,int,char*,int) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (char*,char const*) ;
 int FUNC_12 (char*,char const*) ;

__attribute__((used)) static int
FUNC_13 (const char *VAR_3, int VAR_4, const char *VAR_5,
      char *VAR_6, size_t VAR_7)
{
    struct addrinfo *VAR_8, *VAR_9;
    struct addrinfo VAR_10;
    int VAR_11;
    char VAR_12[VAR_1];

    FUNC_6 (&VAR_10, 0, sizeof(VAR_10));
    VAR_10.ai_socktype = VAR_2;
    VAR_10.ai_protocol = VAR_0;

    FUNC_9 (VAR_12, sizeof(VAR_12), "%u", FUNC_7(VAR_4));

    VAR_11 = FUNC_5 (VAR_3, VAR_12, &VAR_10, &VAR_8);
    if (VAR_11) {
 FUNC_2 (1, "getaddrinfo(%s): %s", VAR_3, FUNC_4(VAR_11));
    }

    for (VAR_9 = VAR_8; VAR_9 != ((void*)0); VAR_9 = VAR_9->ai_next) {
 int VAR_13;

 VAR_13 = FUNC_10 (VAR_9->ai_family, VAR_9->ai_socktype, VAR_9->ai_protocol);
 if (VAR_13 < 0)
     continue;
 if (FUNC_1 (VAR_13, VAR_9->ai_addr, VAR_9->ai_addrlen) < 0) {
     FUNC_11 ("connect(%s)", VAR_3);
     FUNC_0 (VAR_13);
     continue;
 }
 FUNC_3 (VAR_8);
 return FUNC_8 (VAR_13, VAR_3, VAR_5, VAR_6, VAR_7);
    }
    FUNC_12 ("failed to contact %s", VAR_3);
    FUNC_3 (VAR_8);
    return 1;
}
