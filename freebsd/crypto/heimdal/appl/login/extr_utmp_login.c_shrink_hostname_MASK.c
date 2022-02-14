
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_addrlen; int ai_addr; } ;
typedef int local_hostname ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct addrinfo*) ;
 int FUNC_1 (char const*,int *,int *,struct addrinfo**) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ,int ,char*,size_t,int *,int ,int ) ;
 char* FUNC_4 (char const*,char) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char const*,size_t) ;
 size_t FUNC_7 (char const*) ;
 int FUNC_8 (char*,char const*,size_t) ;

void
FUNC_9 (const char *VAR_2,
   char *VAR_3, size_t VAR_4)
{
    char VAR_5[VAR_0];
    char *VAR_6, *VAR_7;
    int VAR_8;
    struct addrinfo *VAR_9;

    if (FUNC_7(VAR_2) < VAR_4) {
 FUNC_6 (VAR_3, VAR_2, VAR_4);
 return;
    }
    FUNC_2 (VAR_5, sizeof(VAR_5));
    VAR_7 = FUNC_4 (VAR_2, '.');
    VAR_6 = FUNC_4 (VAR_5, '.');
    if (VAR_7 != ((void*)0) && VAR_6 != ((void*)0) && FUNC_5(VAR_7, VAR_6) == 0
 && VAR_7 - VAR_2 < VAR_4) {
 FUNC_6 (VAR_3, VAR_2, VAR_4);
 VAR_3[VAR_7 - VAR_2] = '\0';
 return;
    }

    VAR_8 = FUNC_1 (VAR_2, ((void*)0), ((void*)0), &VAR_9);
    if (VAR_8) {
 FUNC_8 (VAR_3, VAR_2, VAR_4);
 return;
    }
    VAR_8 = FUNC_3 (VAR_9->ai_addr, VAR_9->ai_addrlen,
         VAR_3, VAR_4,
         ((void*)0), 0,
         VAR_1);
    FUNC_0 (VAR_9);
    if (VAR_8) {
 FUNC_8 (VAR_3, VAR_2, VAR_4);
 return;
    }
}
