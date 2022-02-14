
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kcm_creds {scalar_t__ next; int cred; } ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_creds ;
typedef int krb5_context ;
typedef int krb5_ccache ;
typedef scalar_t__ krb5_cc_cursor ;
typedef int kcm_ccache ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int ,int *,int *) ;

__attribute__((used)) static krb5_error_code
FUNC_3 (krb5_context VAR_1,
  krb5_ccache VAR_2,
  krb5_cc_cursor *VAR_3,
  krb5_creds *VAR_4)
{
    krb5_error_code VAR_5;
    kcm_ccache VAR_6 = FUNC_0(VAR_2);

    FUNC_1(VAR_6);

    VAR_5 = FUNC_2(VAR_1,
       &((struct kcm_creds *)VAR_3)->cred,
       VAR_4);
    if (VAR_5)
 return VAR_5;

    *VAR_3 = ((struct kcm_creds *)VAR_3)->next;
    if (*VAR_3 == 0)
 VAR_5 = VAR_0;

    return VAR_5;
}
