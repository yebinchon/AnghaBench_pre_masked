
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int allocator; TYPE_2__* data; } ;
typedef TYPE_1__ serf_bucket_t ;
struct TYPE_7__ {TYPE_3__* last; TYPE_3__* list; scalar_t__ cur_read; } ;
typedef TYPE_2__ headers_context_t ;
struct TYPE_8__ {char const* header; char const* value; struct TYPE_8__* next; int alloc_flags; void* value_size; void* header_size; } ;
typedef TYPE_3__ header_list_t ;
typedef void* apr_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 void* FUNC_1 (int ,char const*,void*) ;
 TYPE_3__* FUNC_2 (int ,int) ;

void FUNC_3(
    serf_bucket_t *VAR_2,
    const char *VAR_3, apr_size_t VAR_4, int VAR_5,
    const char *VAR_6, apr_size_t VAR_7, int VAR_8)
{
    headers_context_t *VAR_9 = VAR_2->data;
    header_list_t *VAR_10;
    VAR_10 = FUNC_2(VAR_2->allocator, sizeof(*VAR_10));
    VAR_10->header_size = VAR_4;
    VAR_10->value_size = VAR_7;
    VAR_10->alloc_flags = 0;
    VAR_10->next = ((void*)0);

    if (VAR_5) {
        VAR_10->header = FUNC_1(VAR_2->allocator, VAR_3, VAR_4);
        VAR_10->alloc_flags |= VAR_0;
    }
    else {
        VAR_10->header = VAR_3;
    }

    if (VAR_8) {
        VAR_10->value = FUNC_1(VAR_2->allocator, VAR_6, VAR_7);
        VAR_10->alloc_flags |= VAR_1;
    }
    else {
        VAR_10->value = VAR_6;
    }


    if (VAR_9->last)
        VAR_9->last->next = VAR_10;
    else
        VAR_9->list = VAR_10;

    VAR_9->last = VAR_10;
}
