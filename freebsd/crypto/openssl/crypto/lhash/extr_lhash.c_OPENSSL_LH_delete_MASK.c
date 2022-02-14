
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int num_items; int num_nodes; int down_load; int num_delete; int num_no_delete; scalar_t__ error; } ;
struct TYPE_8__ {void* data; struct TYPE_8__* next; } ;
typedef TYPE_1__ OPENSSL_LH_NODE ;
typedef TYPE_2__ OPENSSL_LHASH ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_1__** FUNC_2 (TYPE_2__*,void const*,unsigned long*) ;

void *FUNC_3(OPENSSL_LHASH *VAR_2, const void *VAR_3)
{
    unsigned long VAR_4;
    OPENSSL_LH_NODE *VAR_5, **VAR_6;
    void *VAR_7;

    VAR_2->error = 0;
    VAR_6 = FUNC_2(VAR_2, VAR_3, &VAR_4);

    if (*VAR_6 == ((void*)0)) {
        VAR_2->num_no_delete++;
        return ((void*)0);
    } else {
        VAR_5 = *VAR_6;
        *VAR_6 = VAR_5->next;
        VAR_7 = VAR_5->data;
        FUNC_0(VAR_5);
        VAR_2->num_delete++;
    }

    VAR_2->num_items--;
    if ((VAR_2->num_nodes > VAR_1) &&
        (VAR_2->down_load >= (VAR_2->num_items * VAR_0 / VAR_2->num_nodes)))
        FUNC_1(VAR_2);

    return VAR_7;
}
