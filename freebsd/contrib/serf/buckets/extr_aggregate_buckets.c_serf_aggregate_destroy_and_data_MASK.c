
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int allocator; TYPE_3__* data; } ;
typedef TYPE_1__ serf_bucket_t ;
struct TYPE_9__ {struct TYPE_9__* next; int bucket; } ;
typedef TYPE_2__ bucket_list_t ;
struct TYPE_10__ {TYPE_2__* list; scalar_t__ bucket_owner; } ;
typedef TYPE_3__ aggregate_context_t ;


 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(serf_bucket_t *VAR_0)
{
    aggregate_context_t *VAR_1 = VAR_0->data;
    bucket_list_t *VAR_2;

    while (VAR_1->list) {
        if (VAR_1->bucket_owner) {
            FUNC_1(VAR_1->list->bucket);
        }
        VAR_2 = VAR_1->list->next;
        FUNC_2(VAR_0->allocator, VAR_1->list);
        VAR_1->list = VAR_2;
    }
    FUNC_0(VAR_1, VAR_0->allocator);

    FUNC_3(VAR_0);
}
