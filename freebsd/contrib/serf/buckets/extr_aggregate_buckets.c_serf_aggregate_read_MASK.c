
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct iovec {char* iov_base; int iov_len; } ;
struct TYPE_4__ {int allocator; int * data; } ;
typedef TYPE_1__ serf_bucket_t ;
typedef int apr_status_t ;
typedef int apr_size_t ;
typedef int aggregate_context_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int,struct iovec*,int*) ;

__attribute__((used)) static apr_status_t FUNC_2(serf_bucket_t *VAR_0,
                                        apr_size_t VAR_1,
                                        const char **VAR_2, apr_size_t *VAR_3)
{
    aggregate_context_t *VAR_4 = VAR_0->data;
    struct iovec VAR_5;
    int VAR_6;
    apr_status_t VAR_7;

    FUNC_0(VAR_4, VAR_0->allocator);

    VAR_7 = FUNC_1(VAR_0, VAR_1, 1, &VAR_5, &VAR_6);

    if (!VAR_6) {
        *VAR_3 = 0;
    }
    else {
        *VAR_2 = VAR_5.iov_base;
        *VAR_3 = VAR_5.iov_len;
    }

    return VAR_7;
}
