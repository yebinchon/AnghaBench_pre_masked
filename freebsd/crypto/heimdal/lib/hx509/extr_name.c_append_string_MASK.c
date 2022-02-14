
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,size_t) ;
 char* FUNC_3 (char const*,size_t,int ,size_t*) ;
 char* FUNC_4 (char*,size_t) ;
 char* FUNC_5 (char const*) ;

__attribute__((used)) static int
FUNC_6(char **VAR_1, size_t *VAR_2, const char *VAR_3,
       size_t VAR_4, int VAR_5)
{
    char *VAR_6, *VAR_7;

    if (VAR_5)
 VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_0, &VAR_4);
    else
 VAR_7 = FUNC_5(VAR_3);

    VAR_6 = FUNC_4(*VAR_1, VAR_4 + *VAR_2 + 1);
    if (VAR_6 == ((void*)0))
 FUNC_0("allocation failure");
    FUNC_2(VAR_6 + *VAR_2, VAR_7, VAR_4);
    if (VAR_7 != VAR_3)
 FUNC_1(VAR_7);
    VAR_6[*VAR_2 + VAR_4] = '\0';
    *VAR_1 = VAR_6;
    *VAR_2 += VAR_4;
    return 0;
}
