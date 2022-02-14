
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
 int FUNC_8 (char*,int,char*,int) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int,char const*,char const*) ;
 int FUNC_11 (char*,char const*) ;
 int FUNC_12 (char*,char const*) ;

int
FUNC_13 (const char *VAR_3, int VAR_4, const char *VAR_5,
      int (*VAR_6)(int, const char *VAR_7, const char *VAR_8))
{
    struct addrinfo *VAR_9, *VAR_10;
    struct addrinfo VAR_11;
    int VAR_12;
    char VAR_13[VAR_1];

    FUNC_6 (&VAR_11, 0, sizeof(VAR_11));
    VAR_11.ai_socktype = VAR_2;
    VAR_11.ai_protocol = VAR_0;

    FUNC_8 (VAR_13, sizeof(VAR_13), "%u", FUNC_7(VAR_4));

    VAR_12 = FUNC_5 (VAR_3, VAR_13, &VAR_11, &VAR_9);
    if (VAR_12) {
 FUNC_2 (1, "%s: %s", VAR_3, FUNC_4(VAR_12));
 return -1;
    }

    for (VAR_10 = VAR_9; VAR_10 != ((void*)0); VAR_10 = VAR_10->ai_next) {
 int VAR_14;

 VAR_14 = FUNC_9 (VAR_10->ai_family, VAR_10->ai_socktype, VAR_10->ai_protocol);
 if (VAR_14 < 0)
     continue;
 if (FUNC_1 (VAR_14, VAR_10->ai_addr, VAR_10->ai_addrlen) < 0) {
     FUNC_11 ("connect(%s)", VAR_3);
     FUNC_0 (VAR_14);
     continue;
 }
 FUNC_3 (VAR_9);
 return (*VAR_6) (VAR_14, VAR_3, VAR_5);
    }
    FUNC_12 ("failed to contact %s", VAR_3);
    FUNC_3 (VAR_9);
    return 1;
}
