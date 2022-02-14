
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* data; } ;
typedef TYPE_1__ serf_bucket_t ;
struct TYPE_5__ {scalar_t__ state; int chunk; } ;
typedef TYPE_2__ chunk_context_t ;
typedef int apr_status_t ;
typedef int apr_size_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char const**,int *) ;

__attribute__((used)) static apr_status_t FUNC_2(serf_bucket_t *VAR_2,
                                     const char **VAR_3,
                                     apr_size_t *VAR_4)
{
    chunk_context_t *VAR_5 = VAR_2->data;
    apr_status_t VAR_6;

    VAR_6 = FUNC_1(VAR_5->chunk, VAR_3, VAR_4);


    if (FUNC_0(VAR_6) && VAR_5->state == VAR_1) {
        VAR_6 = VAR_0;
    }

    return VAR_6;
}
