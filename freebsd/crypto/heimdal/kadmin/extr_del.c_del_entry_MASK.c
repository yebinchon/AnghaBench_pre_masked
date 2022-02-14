
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ krb5_error_code ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int ,char*,int *) ;

int
FUNC_1(void *VAR_1, int VAR_2, char **VAR_3)
{
    int VAR_4;
    krb5_error_code VAR_5 = 0;

    for(VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
 VAR_5 = FUNC_0(VAR_3[VAR_4], VAR_0, "del", ((void*)0));
 if (VAR_5)
     break;
    }
    return VAR_5 != 0;
}
