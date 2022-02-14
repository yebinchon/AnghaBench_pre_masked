
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct kcm_creds {int cred; int uuid; struct kcm_creds* next; } ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_creds ;
typedef int krb5_context ;
typedef TYPE_1__* kcm_ccache ;
struct TYPE_3__ {struct kcm_creds* creds; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (struct kcm_creds*) ;
 scalar_t__ FUNC_3 (int ,int *,int *) ;

krb5_error_code
FUNC_4(krb5_context VAR_1,
          kcm_ccache VAR_2,
          krb5_creds *VAR_3,
          int VAR_4,
          krb5_creds **VAR_5)
{
    struct kcm_creds **VAR_6;
    krb5_error_code VAR_7;

    for (VAR_6 = &VAR_2->creds; *VAR_6 != ((void*)0); VAR_6 = &(*VAR_6)->next)
 ;

    *VAR_6 = (struct kcm_creds *)FUNC_1(1, sizeof(**VAR_6));
    if (*VAR_6 == ((void*)0))
 return VAR_0;

    FUNC_0((*VAR_6)->uuid, sizeof((*VAR_6)->uuid));

    *VAR_5 = &(*VAR_6)->cred;

    if (VAR_4) {
 VAR_7 = FUNC_3(VAR_1, VAR_3, *VAR_5);
 if (VAR_7) {
     FUNC_2(*VAR_6);
     *VAR_6 = ((void*)0);
 }
    } else {
 **VAR_5 = *VAR_3;
 VAR_7 = 0;
    }

    return VAR_7;
}
