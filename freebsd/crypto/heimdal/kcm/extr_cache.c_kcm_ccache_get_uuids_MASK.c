
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int krb5_storage ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int kcm_operation ;
typedef int kcm_client ;
typedef TYPE_1__* kcm_ccache ;
struct TYPE_4__ {int flags; int uuid; struct TYPE_4__* next; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,int *,int ,TYPE_1__*) ;
 int FUNC_3 (int *,int ,int) ;

krb5_error_code
FUNC_4(krb5_context VAR_4, kcm_client *VAR_5, kcm_operation VAR_6, krb5_storage *VAR_7)
{
    krb5_error_code VAR_8;
    kcm_ccache VAR_9;

    VAR_8 = VAR_1;

    FUNC_0(&VAR_3);

    for (VAR_9 = VAR_2; VAR_9 != ((void*)0); VAR_9 = VAR_9->next) {
 if ((VAR_9->flags & VAR_0) == 0)
     continue;
 VAR_8 = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_9);
 if (VAR_8) {
     VAR_8 = 0;
     continue;
 }
 FUNC_3(VAR_7, VAR_9->uuid, sizeof(VAR_9->uuid));
    }

    FUNC_1(&VAR_3);

    return VAR_8;
}
