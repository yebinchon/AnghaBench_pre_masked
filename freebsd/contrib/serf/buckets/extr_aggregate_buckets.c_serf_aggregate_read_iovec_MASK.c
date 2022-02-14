
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct iovec {int dummy; } ;
struct TYPE_4__ {int allocator; int * data; } ;
typedef TYPE_1__ serf_bucket_t ;
typedef int apr_status_t ;
typedef int apr_size_t ;
typedef int aggregate_context_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int,struct iovec*,int*) ;

__attribute__((used)) static apr_status_t FUNC_2(serf_bucket_t *VAR_0,
                                              apr_size_t VAR_1,
                                              int VAR_2,
                                              struct iovec *VAR_3,
                                              int *VAR_4)
{
    aggregate_context_t *VAR_5 = VAR_0->data;

    FUNC_0(VAR_5, VAR_0->allocator);

    return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
