
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct kcm_creds {struct kcm_creds* next; int cred; } ;
typedef int krb5_error_code ;
typedef int krb5_context ;
typedef TYPE_1__* kcm_ccache ;
struct TYPE_3__ {struct kcm_creds* creds; } ;


 int FUNC_0 (struct kcm_creds*) ;
 int FUNC_1 (int ,int *) ;

krb5_error_code
FUNC_2(krb5_context VAR_0,
     kcm_ccache VAR_1)
{
    struct kcm_creds *VAR_2;

    VAR_2 = VAR_1->creds;
    while (VAR_2 != ((void*)0)) {
 struct kcm_creds *VAR_3;

 FUNC_1(VAR_0, &VAR_2->cred);
 VAR_3 = VAR_2;
 VAR_2 = VAR_2->next;
 FUNC_0(VAR_3);
    }
    VAR_1->creds = ((void*)0);

    return 0;
}
