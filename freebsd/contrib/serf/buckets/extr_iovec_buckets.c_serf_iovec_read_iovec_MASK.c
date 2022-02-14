
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iovec {char* iov_base; scalar_t__ iov_len; } ;
struct TYPE_4__ {TYPE_2__* data; } ;
typedef TYPE_1__ serf_bucket_t ;
struct TYPE_5__ {size_t current_vec; size_t vecs_len; int offset; struct iovec* vecs; } ;
typedef TYPE_2__ iovec_context_t ;
typedef int apr_status_t ;
typedef scalar_t__ apr_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static apr_status_t FUNC_0(serf_bucket_t *VAR_3,
                                          apr_size_t VAR_4,
                                          int VAR_5,
                                          struct iovec *VAR_6,
                                          int *VAR_7)
{
    iovec_context_t *VAR_8 = VAR_3->data;

    *VAR_7 = 0;


    for (; VAR_8->current_vec < VAR_8->vecs_len; VAR_8->current_vec++) {
        struct iovec VAR_9 = VAR_8->vecs[VAR_8->current_vec];
        apr_size_t VAR_10;

        if (VAR_4 != VAR_2 && VAR_4 <= 0)
            break;
        if (*VAR_7 >= VAR_5)
            break;

        VAR_6[*VAR_7].iov_base = (char*)VAR_9.iov_base + VAR_8->offset;
        VAR_10 = VAR_9.iov_len - VAR_8->offset;


        if (VAR_4 != VAR_2 && VAR_4 < VAR_10) {
            VAR_6[*VAR_7].iov_len = VAR_4;
            VAR_8->offset += VAR_4;
            VAR_4 = 0;
            (*VAR_7)++;
            break;
        } else {

            VAR_6[*VAR_7].iov_len = VAR_10;
            VAR_8->offset = 0;
            if (VAR_4 != VAR_2)
                VAR_4 -= VAR_10;
            (*VAR_7)++;
        }
    }

    if (VAR_8->current_vec == VAR_8->vecs_len && !VAR_8->offset)
        return VAR_0;

    return VAR_1;
}
