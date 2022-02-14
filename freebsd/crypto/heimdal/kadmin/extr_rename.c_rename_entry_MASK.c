
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,char*,int *) ;
 int FUNC_3 (int ,scalar_t__,char*,...) ;

int
FUNC_4(void *VAR_2, int VAR_3, char **VAR_4)
{
    krb5_error_code VAR_5;
    krb5_principal VAR_6, VAR_7;

    VAR_5 = FUNC_2(VAR_0, VAR_4[0], &VAR_6);
    if(VAR_5){
 FUNC_3(VAR_0, VAR_5, "krb5_parse_name(%s)", VAR_4[0]);
 return VAR_5 != 0;
    }
    VAR_5 = FUNC_2(VAR_0, VAR_4[1], &VAR_7);
    if(VAR_5){
 FUNC_1(VAR_0, VAR_6);
 FUNC_3(VAR_0, VAR_5, "krb5_parse_name(%s)", VAR_4[1]);
 return VAR_5 != 0;
    }
    VAR_5 = FUNC_0(VAR_1, VAR_6, VAR_7);
    if(VAR_5)
 FUNC_3(VAR_0, VAR_5, "rename");
    FUNC_1(VAR_0, VAR_6);
    FUNC_1(VAR_0, VAR_7);
    return VAR_5 != 0;
}
