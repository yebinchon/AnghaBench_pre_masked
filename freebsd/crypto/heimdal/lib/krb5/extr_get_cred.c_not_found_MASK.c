
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_error_code ;
typedef int krb5_context ;
typedef int krb5_const_principal ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int ,char*) ;
 int FUNC_4 (int ,int ,char**) ;

__attribute__((used)) static int
FUNC_5(krb5_context VAR_0, krb5_const_principal VAR_1, krb5_error_code VAR_2)
{
    krb5_error_code VAR_3;
    char *VAR_4;

    VAR_3 = FUNC_4(VAR_0, VAR_1, &VAR_4);
    if(VAR_3) {
 FUNC_2(VAR_0);
 return VAR_2;
    }
    FUNC_3(VAR_0, VAR_2,
      FUNC_0("Matching credential (%s) not found", ""), VAR_4);
    FUNC_1(VAR_4);
    return VAR_2;
}
