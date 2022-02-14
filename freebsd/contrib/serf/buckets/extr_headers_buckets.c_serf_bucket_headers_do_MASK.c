
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* data; } ;
typedef TYPE_1__ serf_bucket_t ;
typedef scalar_t__ (* serf_bucket_headers_do_callback_fn_t ) (void*,int ,int ) ;
struct TYPE_6__ {TYPE_3__* list; } ;
typedef TYPE_2__ headers_context_t ;
struct TYPE_7__ {struct TYPE_7__* next; int value; int header; } ;
typedef TYPE_3__ header_list_t ;



void FUNC_0(
    serf_bucket_t *VAR_0,
    serf_bucket_headers_do_callback_fn_t VAR_1,
    void *VAR_2)
{
    headers_context_t *VAR_3 = VAR_0->data;
    header_list_t *VAR_4 = VAR_3->list;

    while (VAR_4) {
        if (VAR_1(VAR_2, VAR_4->header, VAR_4->value) != 0) {
            break;
        }
        VAR_4 = VAR_4->next;
    }
}
