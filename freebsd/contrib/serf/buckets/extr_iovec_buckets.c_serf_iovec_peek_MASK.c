
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* data; } ;
typedef TYPE_2__ serf_bucket_t ;
struct TYPE_7__ {size_t current_vec; size_t vecs_len; TYPE_1__* vecs; } ;
typedef TYPE_3__ iovec_context_t ;
typedef int apr_status_t ;
typedef int apr_size_t ;
struct TYPE_5__ {char* iov_base; int iov_len; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static apr_status_t FUNC_0(serf_bucket_t *VAR_2,
                                    const char **VAR_3,
                                    apr_size_t *VAR_4)
{
    iovec_context_t *VAR_5 = VAR_2->data;

    if (VAR_5->current_vec >= VAR_5->vecs_len) {
        *VAR_4 = 0;
        return VAR_0;
    }



    *VAR_3 = VAR_5->vecs[VAR_5->current_vec].iov_base;
    *VAR_4 = VAR_5->vecs[VAR_5->current_vec].iov_len;

    if (VAR_5->current_vec + 1 == VAR_5->vecs_len)
        return VAR_0;

    return VAR_1;
}
