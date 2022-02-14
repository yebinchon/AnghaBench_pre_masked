
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
typedef scalar_t__ krb5_boolean ;
typedef TYPE_1__* kcm_ccache ;
struct TYPE_3__ {struct kcm_creds* creds; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int const*,int *) ;
 int FUNC_1 (int **,int ,int) ;

krb5_error_code
FUNC_2(krb5_context VAR_2,
       kcm_ccache VAR_3,
       krb5_flags VAR_4,
       const krb5_creds *VAR_5,
       krb5_creds **VAR_6)
{
    krb5_boolean VAR_7;
    struct kcm_creds *VAR_8;
    krb5_error_code VAR_9;

    FUNC_1(VAR_6, 0, sizeof(*VAR_6));

    VAR_9 = VAR_1;

    VAR_7 = VAR_0;
    for (VAR_8 = VAR_3->creds; VAR_8 != ((void*)0); VAR_8 = VAR_8->next) {
 VAR_7 = FUNC_0(VAR_2, VAR_4, VAR_5, &VAR_8->cred);
 if (VAR_7)
     break;
    }

    if (VAR_7) {
 VAR_9 = 0;
 *VAR_6 = &VAR_8->cred;
    }

    return VAR_9;
}
