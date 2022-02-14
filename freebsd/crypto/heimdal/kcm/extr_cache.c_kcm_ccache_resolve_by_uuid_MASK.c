
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int kcmuuid_t ;
typedef TYPE_1__* kcm_ccache ;
struct TYPE_5__ {int flags; int uuid; struct TYPE_5__* next; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,int ,int) ;

krb5_error_code
FUNC_4(krb5_context VAR_4,
      kcmuuid_t VAR_5,
      kcm_ccache *VAR_6)
{
    kcm_ccache VAR_7;
    krb5_error_code VAR_8;

    *VAR_6 = ((void*)0);

    VAR_8 = VAR_1;

    FUNC_0(&VAR_3);

    for (VAR_7 = VAR_2; VAR_7 != ((void*)0); VAR_7 = VAR_7->next) {
 if ((VAR_7->flags & VAR_0) == 0)
     continue;
 if (FUNC_3(VAR_7->uuid, VAR_5, sizeof(kcmuuid_t)) == 0) {
     VAR_8 = 0;
     break;
 }
    }

    if (VAR_8 == 0) {
 FUNC_2(VAR_4, VAR_7);
 *VAR_6 = VAR_7;
    }

    FUNC_1(&VAR_3);

    return VAR_8;
}
