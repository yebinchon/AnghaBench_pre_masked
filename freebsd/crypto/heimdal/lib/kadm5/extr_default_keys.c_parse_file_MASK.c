
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int Key ;


 int FUNC_0 (int ,size_t,int *) ;
 scalar_t__ FUNC_1 (int ,int ,int **,size_t*,int) ;
 int FUNC_2 (int ,int,scalar_t__,char*) ;
 int FUNC_3 (int ,int *,size_t) ;

__attribute__((used)) static void
FUNC_4(krb5_context VAR_0, krb5_principal VAR_1, int VAR_2)
{
    krb5_error_code VAR_3;
    size_t VAR_4;
    Key *VAR_5;

    VAR_3 = FUNC_1(VAR_0, VAR_1, &VAR_5, &VAR_4, VAR_2);
    if (VAR_3)
 FUNC_2(VAR_0, 1, VAR_3, "hdb_generate_key_set");

    FUNC_3(VAR_0, VAR_5, VAR_4);

    FUNC_0(VAR_0, VAR_4, VAR_5);
}
