
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int krb5_error_code ;
typedef int krb5_context ;
struct TYPE_4__ {scalar_t__ ccache; scalar_t__ valid; struct TYPE_4__* next; } ;
typedef TYPE_1__ kcm_event ;
typedef scalar_t__ kcm_ccache ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,TYPE_1__**) ;

krb5_error_code
FUNC_4(krb5_context VAR_2,
     kcm_ccache VAR_3)
{
    kcm_event **VAR_4;

    FUNC_2(VAR_3);

    FUNC_0(&VAR_1);

    for (VAR_4 = &VAR_0; *VAR_4 != ((void*)0); VAR_4 = &(*VAR_4)->next) {
 if ((*VAR_4)->valid && (*VAR_4)->ccache == VAR_3) {
     FUNC_3(VAR_2, VAR_4);
 }
 if (*VAR_4 == ((void*)0))
     break;
    }

    FUNC_1(&VAR_1);

    return 0;
}
