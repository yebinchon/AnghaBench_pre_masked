
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iovec {int iov_len; int iov_base; } ;
typedef int serf_bucket_t ;
typedef int serf_bucket_alloc_t ;
struct TYPE_5__ {int vecs_len; TYPE_1__* vecs; scalar_t__ offset; scalar_t__ current_vec; } ;
typedef TYPE_2__ iovec_context_t ;
struct TYPE_4__ {int iov_len; int iov_base; } ;


 int * FUNC_0 (int *,int *,TYPE_2__*) ;
 void* FUNC_1 (int *,int) ;
 int VAR_0 ;

serf_bucket_t *FUNC_2(
    struct iovec VAR_1[],
    int VAR_2,
    serf_bucket_alloc_t *VAR_3)
{
    iovec_context_t *VAR_4;
    int VAR_5;

    VAR_4 = FUNC_1(VAR_3, sizeof(*VAR_4));
    VAR_4->vecs = FUNC_1(VAR_3, VAR_2 * sizeof(struct iovec));
    VAR_4->vecs_len = VAR_2;
    VAR_4->current_vec = 0;
    VAR_4->offset = 0;


    for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
        VAR_4->vecs[VAR_5].iov_base = VAR_1[VAR_5].iov_base;
        VAR_4->vecs[VAR_5].iov_len = VAR_1[VAR_5].iov_len;
    }

    return FUNC_0(&VAR_0, VAR_3, VAR_4);
}
