
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int krb5_error_code ;
typedef int krb5_context ;
struct TYPE_4__ {struct TYPE_4__* next; int ccache; scalar_t__ backoff_time; scalar_t__ expire_time; scalar_t__ fire_count; scalar_t__ fire_time; scalar_t__ valid; } ;
typedef TYPE_1__ kcm_event ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static krb5_error_code
FUNC_2(krb5_context VAR_0,
     kcm_event **VAR_1)
{
    kcm_event *VAR_2;

    VAR_2 = (*VAR_1)->next;

    (*VAR_1)->valid = 0;
    (*VAR_1)->fire_time = 0;
    (*VAR_1)->fire_count = 0;
    (*VAR_1)->expire_time = 0;
    (*VAR_1)->backoff_time = 0;
    FUNC_1(VAR_0, (*VAR_1)->ccache);
    (*VAR_1)->next = ((void*)0);
    FUNC_0(*VAR_1);

    *VAR_1 = VAR_2;

    return 0;
}
