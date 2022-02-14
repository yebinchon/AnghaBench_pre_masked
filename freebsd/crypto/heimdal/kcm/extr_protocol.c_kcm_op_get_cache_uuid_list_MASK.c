
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_storage ;
typedef int krb5_error_code ;
typedef int krb5_context ;
typedef int kcm_operation ;
typedef int kcm_client ;


 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ,int *,int ,int *) ;

__attribute__((used)) static krb5_error_code
FUNC_2(krb5_context VAR_0,
      kcm_client *VAR_1,
      kcm_operation VAR_2,
      krb5_storage *VAR_3,
      krb5_storage *VAR_4)
{
    FUNC_0(VAR_0, VAR_1, VAR_2);

    return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_4);
}
