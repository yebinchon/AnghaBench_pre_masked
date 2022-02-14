
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int up_load; int num_items; int num_nodes; int num_replace; int num_insert; scalar_t__ error; } ;
struct TYPE_8__ {unsigned long hash; void* data; int * next; } ;
typedef TYPE_1__ OPENSSL_LH_NODE ;
typedef TYPE_2__ OPENSSL_LHASH ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_1__** FUNC_2 (TYPE_2__*,void*,unsigned long*) ;

void *FUNC_3(OPENSSL_LHASH *VAR_1, void *VAR_2)
{
    unsigned long VAR_3;
    OPENSSL_LH_NODE *VAR_4, **VAR_5;
    void *VAR_6;

    VAR_1->error = 0;
    if ((VAR_1->up_load <= (VAR_1->num_items * VAR_0 / VAR_1->num_nodes)) && !FUNC_1(VAR_1))
        return ((void*)0);

    VAR_5 = FUNC_2(VAR_1, VAR_2, &VAR_3);

    if (*VAR_5 == ((void*)0)) {
        if ((VAR_4 = FUNC_0(sizeof(*VAR_4))) == ((void*)0)) {
            VAR_1->error++;
            return ((void*)0);
        }
        VAR_4->data = VAR_2;
        VAR_4->next = ((void*)0);
        VAR_4->hash = VAR_3;
        *VAR_5 = VAR_4;
        VAR_6 = ((void*)0);
        VAR_1->num_insert++;
        VAR_1->num_items++;
    } else {
        VAR_6 = (*VAR_5)->data;
        (*VAR_5)->data = VAR_2;
        VAR_1->num_replace++;
    }
    return VAR_6;
}
