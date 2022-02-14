
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {char* ai_canonname; struct addrinfo* ai_next; int ai_flags; } ;
typedef int hints ;


 int VAR_0 ;
 int FUNC_0 (struct addrinfo*) ;
 int FUNC_1 (char*,int *,struct addrinfo*,struct addrinfo**) ;
 scalar_t__ FUNC_2 (char*,size_t) ;
 int FUNC_3 (struct addrinfo*,int ,int) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (char*,char*,size_t) ;

__attribute__((used)) static char *
FUNC_6 (char *VAR_1, size_t VAR_2)
{
    struct addrinfo *VAR_3, *VAR_4;
    struct addrinfo VAR_5;
    int VAR_6;
    char *VAR_7;

    if (FUNC_2 (VAR_1, VAR_2) < 0) {
 FUNC_5 (VAR_1, "", VAR_2);
 return "";
    }
    VAR_7 = FUNC_4 (VAR_1, '.');
    if (VAR_7 != ((void*)0))
 return VAR_7 + 1;

    FUNC_3 (&VAR_5, 0, sizeof(VAR_5));
    VAR_5.ai_flags = VAR_0;

    VAR_6 = FUNC_1 (VAR_1, ((void*)0), &VAR_5, &VAR_3);
    if (VAR_6)
 return VAR_1;

    for (VAR_4 = VAR_3; VAR_4 != ((void*)0); VAR_4 = VAR_4->ai_next)
 if (VAR_4->ai_canonname != ((void*)0)) {
     FUNC_5 (VAR_1, VAR_3->ai_canonname, VAR_2);
     break;
 }
    FUNC_0 (VAR_3);
    VAR_7 = FUNC_4 (VAR_1, '.');
    if (VAR_7 != ((void*)0))
 return VAR_7 + 1;
    else
 return VAR_1;
}
