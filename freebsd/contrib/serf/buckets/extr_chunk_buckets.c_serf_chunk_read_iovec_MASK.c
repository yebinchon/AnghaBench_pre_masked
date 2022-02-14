
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct iovec {int dummy; } ;
struct TYPE_5__ {TYPE_2__* data; } ;
typedef TYPE_1__ serf_bucket_t ;
struct TYPE_6__ {scalar_t__ state; scalar_t__ last_status; int chunk; } ;
typedef TYPE_2__ chunk_context_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_size_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,int ,int,struct iovec*,int*) ;

__attribute__((used)) static apr_status_t FUNC_3(serf_bucket_t *VAR_2,
                                          apr_size_t VAR_3,
                                          int VAR_4,
                                          struct iovec *VAR_5,
                                          int *VAR_6)
{
    chunk_context_t *VAR_7 = VAR_2->data;
    apr_status_t VAR_8;


    if (VAR_7->state == VAR_1) {
        VAR_8 = FUNC_1(VAR_2);
        if (VAR_8) {
            return VAR_8;
        }
    }

    VAR_8 = FUNC_2(VAR_7->chunk, VAR_3, VAR_4, VAR_5,
                                    VAR_6);


    if (FUNC_0(VAR_8) && VAR_7->state == VAR_0) {
        VAR_8 = VAR_7->last_status;
        VAR_7->state = VAR_1;
    }

    return VAR_8;
}
