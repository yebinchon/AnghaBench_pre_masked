
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_error_code ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char** FUNC_1 (char**,int) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static krb5_error_code
FUNC_3(char ***VAR_1, int *VAR_2, char *VAR_3)
{
    char **VAR_4 = *VAR_1;
    int VAR_5;

    for(VAR_5 = 0; VAR_5 < *VAR_2; VAR_5++) {
 if(FUNC_2(VAR_4[VAR_5], VAR_3) == 0) {
     FUNC_0(VAR_3);
     return 0;
 }
    }

    VAR_4 = FUNC_1(*VAR_1, (*VAR_2 + 2) * sizeof(*VAR_4));
    if (VAR_4 == ((void*)0)) {
 FUNC_0(VAR_3);
 return VAR_0;
    }

    VAR_4[*VAR_2] = VAR_3;
    VAR_4[*VAR_2 + 1] = ((void*)0);
    *VAR_1 = VAR_4;
    *VAR_2 += 1;
    return 0;
}
