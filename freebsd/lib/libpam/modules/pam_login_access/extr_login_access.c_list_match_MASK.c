
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 char* FUNC_1 (char*,int ) ;
 int FUNC_2 (char const*,char const*) ;

__attribute__((used)) static int
FUNC_3(char *VAR_2, const char *VAR_3,
    int (*VAR_4)(const char *, const char *))
{
    char *VAR_5;
    int VAR_6 = VAR_0;
    for (VAR_5 = FUNC_1(VAR_2, VAR_1); VAR_5 != ((void*)0); VAR_5 = FUNC_1((char *) 0, VAR_1)) {
 if (FUNC_0(VAR_5, "EXCEPT") == 0)
     break;
 if ((VAR_6 = (*VAR_4)(VAR_5, VAR_3)) != 0)
     break;
    }


    if (VAR_6 != VAR_0) {
 while ((VAR_5 = FUNC_1((char *) 0, VAR_1)) && FUNC_0(VAR_5, "EXCEPT"))
                 ;
 if (VAR_5 == ((void*)0) || FUNC_3((char *) 0, VAR_3, VAR_4) == VAR_0)
     return (VAR_6);
    }
    return (VAR_0);
}
