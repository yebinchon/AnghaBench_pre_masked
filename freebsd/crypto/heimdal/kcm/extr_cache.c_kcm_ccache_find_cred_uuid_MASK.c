
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct kcm_creds {int uuid; struct kcm_creds* next; } ;
typedef int krb5_context ;
typedef int kcmuuid_t ;
typedef TYPE_1__* kcm_ccache ;
struct TYPE_3__ {struct kcm_creds* creds; } ;


 scalar_t__ FUNC_0 (int ,int ,int) ;

struct kcm_creds *
FUNC_1(krb5_context VAR_0,
     kcm_ccache VAR_1,
     kcmuuid_t VAR_2)
{
    struct kcm_creds *VAR_3;

    for (VAR_3 = VAR_1->creds; VAR_3 != ((void*)0); VAR_3 = VAR_3->next)
 if (FUNC_0(VAR_3->uuid, VAR_2, sizeof(VAR_3->uuid)) == 0)
     return VAR_3;

    return ((void*)0);
}
