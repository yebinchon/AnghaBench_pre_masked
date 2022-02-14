
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct fd_lookup_st {struct fd_lookup_st* next; int fd; scalar_t__ del; scalar_t__ add; } ;
struct TYPE_3__ {size_t numadd; size_t numdel; struct fd_lookup_st* fds; } ;
typedef int OSSL_ASYNC_FD ;
typedef TYPE_1__ ASYNC_WAIT_CTX ;



int FUNC_0(ASYNC_WAIT_CTX *VAR_0, OSSL_ASYNC_FD *VAR_1,
                                   size_t *VAR_2, OSSL_ASYNC_FD *VAR_3,
                                   size_t *VAR_4)
{
    struct fd_lookup_st *VAR_5;

    *VAR_2 = VAR_0->numadd;
    *VAR_4 = VAR_0->numdel;
    if (VAR_1 == ((void*)0) && VAR_3 == ((void*)0))
        return 1;

    VAR_5 = VAR_0->fds;

    while (VAR_5 != ((void*)0)) {

        if (VAR_5->del && !VAR_5->add && (VAR_3 != ((void*)0))) {
            *VAR_3 = VAR_5->fd;
            VAR_3++;
        }
        if (VAR_5->add && !VAR_5->del && (VAR_1 != ((void*)0))) {
            *VAR_1 = VAR_5->fd;
            VAR_1++;
        }
        VAR_5 = VAR_5->next;
    }

    return 1;
}
