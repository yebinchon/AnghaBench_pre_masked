
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int krb5_salt ;
typedef int krb5_principal ;
typedef int krb5_keyblock ;
struct TYPE_3__ {int keyseed; int (* keyproc ) (int ,int ,int ,int ,int *,int **) ;} ;
typedef TYPE_1__ krb5_get_init_creds_ctx ;
typedef int krb5_error_code ;
typedef int krb5_enctype ;
typedef int krb5_data ;
typedef int krb5_context ;


 int FUNC_0 (int ,int ,int ,int ,int *,int **) ;

__attribute__((used)) static krb5_error_code
FUNC_1(krb5_context VAR_0,
       const krb5_principal VAR_1,
       krb5_get_init_creds_ctx *VAR_2,
       krb5_salt VAR_3,
       krb5_data *VAR_4,
       krb5_enctype VAR_5,
       krb5_keyblock **VAR_6)
{
    krb5_error_code VAR_7;

    VAR_7 = (*VAR_2->keyproc)(VAR_0, VAR_5, VAR_2->keyseed,
      VAR_3, VAR_4, VAR_6);
    return VAR_7;
}
