
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct fd_lookup_st {struct fd_lookup_st* next; scalar_t__ add; scalar_t__ del; } ;
struct TYPE_3__ {struct fd_lookup_st* fds; scalar_t__ numdel; scalar_t__ numadd; } ;
typedef TYPE_1__ ASYNC_WAIT_CTX ;


 int FUNC_0 (struct fd_lookup_st*) ;

void FUNC_1(ASYNC_WAIT_CTX *VAR_0)
{
    struct fd_lookup_st *VAR_1, *VAR_2 = ((void*)0);

    VAR_0->numadd = 0;
    VAR_0->numdel = 0;

    VAR_1 = VAR_0->fds;

    while (VAR_1 != ((void*)0)) {
        if (VAR_1->del) {
            if (VAR_2 == ((void*)0))
                VAR_0->fds = VAR_1->next;
            else
                VAR_2->next = VAR_1->next;
            FUNC_0(VAR_1);
            if (VAR_2 == ((void*)0))
                VAR_1 = VAR_0->fds;
            else
                VAR_1 = VAR_2->next;
            continue;
        }
        if (VAR_1->add) {
            VAR_1->add = 0;
        }
        VAR_2 = VAR_1;
        VAR_1 = VAR_1->next;
    }
}
