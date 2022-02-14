
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct iovec {scalar_t__ iov_len; void* iov_base; } ;
struct TYPE_6__ {TYPE_1__* type; } ;
typedef TYPE_2__ serf_bucket_t ;
typedef int apr_status_t ;
typedef scalar_t__ apr_size_t ;
struct TYPE_5__ {int (* read ) (TYPE_2__*,scalar_t__,char const**,scalar_t__*) ;} ;


 int FUNC_0 (TYPE_2__*,scalar_t__,char const**,scalar_t__*) ;

apr_status_t FUNC_1(
    serf_bucket_t *VAR_0,
    apr_size_t VAR_1,
    int VAR_2,
    struct iovec *VAR_3,
    int *VAR_4)
{
    const char *VAR_5;
    apr_size_t VAR_6;
    apr_status_t VAR_7 = VAR_0->type->read(VAR_0, VAR_1, &VAR_5, &VAR_6);




    if (VAR_6) {
        VAR_3[0].iov_base = (void *)VAR_5;
        VAR_3[0].iov_len = VAR_6;
        *VAR_4 = 1;
    }
    else {
        *VAR_4 = 0;
    }

    return VAR_7;
}
