
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct modify_options {int dummy; } ;
typedef scalar_t__ krb5_error_code ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int ,char*,struct modify_options*) ;

int
FUNC_1(struct modify_options *VAR_1, int VAR_2, char **VAR_3)
{
    krb5_error_code VAR_4 = 0;
    int VAR_5;

    for(VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
 VAR_4 = FUNC_0(VAR_3[VAR_5], VAR_0, "mod", VAR_1);
 if (VAR_4)
     break;
    }
    return VAR_4 != 0;
}
