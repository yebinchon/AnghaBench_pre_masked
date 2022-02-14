
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int allocator; TYPE_3__* freelist; int num_alloc; } ;
typedef TYPE_2__ serf_bucket_alloc_t ;
struct TYPE_5__ {int memnode; TYPE_3__* next; } ;
struct TYPE_7__ {scalar_t__ size; TYPE_1__ u; } ;
typedef TYPE_3__ node_header_t ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(
    serf_bucket_alloc_t *VAR_2,
    void *VAR_3)
{
    node_header_t *VAR_4;

    --VAR_2->num_alloc;

    VAR_4 = (node_header_t *)((char *)VAR_3 - VAR_0);

    if (VAR_4->size == VAR_1) {

        VAR_4->u.next = VAR_2->freelist;
        VAR_2->freelist = VAR_4;
    }
    else {






        FUNC_1(VAR_2->allocator, VAR_4->u.memnode);
    }
}
