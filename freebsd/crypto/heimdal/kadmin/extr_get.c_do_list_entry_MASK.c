
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;
typedef int buf ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,char*,int) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static int
FUNC_2(krb5_principal VAR_1, void *VAR_2)
{
    char VAR_3[1024];
    krb5_error_code VAR_4;

    VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_3, sizeof(VAR_3));
    if (VAR_4 != 0)
        return VAR_4;
    FUNC_1("%s\n", VAR_3);
    return 0;
}
