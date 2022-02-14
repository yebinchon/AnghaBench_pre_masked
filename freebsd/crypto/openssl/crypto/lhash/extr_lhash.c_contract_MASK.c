
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int p; int pmax; int num_alloc_nodes; TYPE_1__** b; int num_contracts; int num_nodes; int num_contract_reallocs; int error; } ;
struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_1__ OPENSSL_LH_NODE ;
typedef TYPE_2__ OPENSSL_LHASH ;


 TYPE_1__** FUNC_0 (TYPE_1__**,unsigned int) ;

__attribute__((used)) static void FUNC_1(OPENSSL_LHASH *VAR_0)
{
    OPENSSL_LH_NODE **VAR_1, *VAR_2, *VAR_3;

    VAR_3 = VAR_0->b[VAR_0->p + VAR_0->pmax - 1];
    VAR_0->b[VAR_0->p + VAR_0->pmax - 1] = ((void*)0);
    if (VAR_0->p == 0) {
        VAR_1 = FUNC_0(VAR_0->b,
                            (unsigned int)(sizeof(OPENSSL_LH_NODE *) * VAR_0->pmax));
        if (VAR_1 == ((void*)0)) {

            VAR_0->error++;
            return;
        }
        VAR_0->num_contract_reallocs++;
        VAR_0->num_alloc_nodes /= 2;
        VAR_0->pmax /= 2;
        VAR_0->p = VAR_0->pmax - 1;
        VAR_0->b = VAR_1;
    } else
        VAR_0->p--;

    VAR_0->num_nodes--;
    VAR_0->num_contracts++;

    VAR_2 = VAR_0->b[(int)VAR_0->p];
    if (VAR_2 == ((void*)0))
        VAR_0->b[(int)VAR_0->p] = VAR_3;
    else {
        while (VAR_2->next != ((void*)0))
            VAR_2 = VAR_2->next;
        VAR_2->next = VAR_3;
    }
}
