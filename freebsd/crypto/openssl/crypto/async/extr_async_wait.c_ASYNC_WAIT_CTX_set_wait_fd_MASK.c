
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct fd_lookup_st {void (* cleanup ) (TYPE_1__*,void const*,int ,void*) ;int add; struct fd_lookup_st* next; void* custom_data; int fd; void const* key; } ;
struct TYPE_5__ {int numadd; struct fd_lookup_st* fds; } ;
typedef int OSSL_ASYNC_FD ;
typedef TYPE_1__ ASYNC_WAIT_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 struct fd_lookup_st* FUNC_1 (int) ;

int FUNC_2(ASYNC_WAIT_CTX *VAR_2, const void *VAR_3,
                               OSSL_ASYNC_FD VAR_4, void *VAR_5,
                               void (*VAR_6)(ASYNC_WAIT_CTX *, const void *,
                                               OSSL_ASYNC_FD, void *))
{
    struct fd_lookup_st *VAR_7;

    if ((VAR_7 = FUNC_1(sizeof(*VAR_7))) == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }

    VAR_7->key = VAR_3;
    VAR_7->fd = VAR_4;
    VAR_7->custom_data = VAR_5;
    VAR_7->cleanup = VAR_6;
    VAR_7->add = 1;
    VAR_7->next = VAR_2->fds;
    VAR_2->fds = VAR_7;
    VAR_2->numadd++;
    return 1;
}
