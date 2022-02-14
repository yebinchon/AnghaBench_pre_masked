
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct kcm_creds {int cred; struct kcm_creds* next; } ;
typedef int krb5_flags ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_creds ;
typedef int krb5_context ;
typedef TYPE_1__* kcm_ccache ;
struct TYPE_3__ {struct kcm_creds* creds; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct kcm_creds*) ;
 scalar_t__ FUNC_1 (int ,int ,int const*,int *) ;
 int FUNC_2 (int ,int *) ;

krb5_error_code
FUNC_3(krb5_context VAR_1,
    kcm_ccache VAR_2,
    krb5_flags VAR_3,
    const krb5_creds *VAR_4)
{
    krb5_error_code VAR_5;
    struct kcm_creds **VAR_6;

    VAR_5 = VAR_0;

    for (VAR_6 = &VAR_2->creds; *VAR_6 != ((void*)0); VAR_6 = &(*VAR_6)->next) {
 if (FUNC_1(VAR_1, VAR_3, VAR_4, &(*VAR_6)->cred)) {
     struct kcm_creds *VAR_7 = *VAR_6;

     *VAR_6 = VAR_7->next;
     FUNC_2(VAR_1, &VAR_7->cred);
     FUNC_0(VAR_7);
     VAR_5 = 0;
     if (*VAR_6 == ((void*)0))
  break;
 }
    }

    return VAR_5;
}
