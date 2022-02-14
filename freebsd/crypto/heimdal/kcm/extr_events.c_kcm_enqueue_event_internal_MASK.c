
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int krb5_error_code ;
typedef int krb5_context ;
struct TYPE_5__ {scalar_t__ action; int valid; struct TYPE_5__* next; int ccache; int backoff_time; int expire_time; scalar_t__ fire_count; int fire_time; } ;
typedef TYPE_1__ kcm_event ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_2 (int) ;

krb5_error_code
FUNC_3(krb5_context VAR_3,
      kcm_event *VAR_4)
{
    kcm_event **VAR_5;

    if (VAR_4->action == VAR_0)
 return 0;

    for (VAR_5 = &VAR_2; *VAR_5 != ((void*)0); VAR_5 = &(*VAR_5)->next)
 ;

    *VAR_5 = (kcm_event *)FUNC_2(sizeof(kcm_event));
    if (*VAR_5 == ((void*)0)) {
 return VAR_1;
    }

    (*VAR_5)->valid = 1;
    (*VAR_5)->fire_time = VAR_4->fire_time;
    (*VAR_5)->fire_count = 0;
    (*VAR_5)->expire_time = VAR_4->expire_time;
    (*VAR_5)->backoff_time = VAR_4->backoff_time;

    (*VAR_5)->action = VAR_4->action;

    FUNC_0(VAR_3, VAR_4->ccache);
    (*VAR_5)->ccache = VAR_4->ccache;
    (*VAR_5)->next = ((void*)0);

    FUNC_1(*VAR_5, "enqueuing");

    return 0;
}
