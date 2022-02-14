
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iovec {int dummy; } ;
struct TYPE_4__ {TYPE_2__* data; } ;
typedef TYPE_1__ serf_bucket_t ;
struct TYPE_5__ {int stream; } ;
typedef TYPE_2__ barrier_context_t ;
typedef int apr_status_t ;
typedef int apr_size_t ;


 int FUNC_0 (int ,int ,int,struct iovec*,int*) ;

__attribute__((used)) static apr_status_t FUNC_1(serf_bucket_t *VAR_0,
                                            apr_size_t VAR_1,
                                            int VAR_2, struct iovec *VAR_3,
                                            int *VAR_4)
{
    barrier_context_t *VAR_5 = VAR_0->data;

    return FUNC_0(VAR_5->stream, VAR_1, VAR_2, VAR_3,
                                  VAR_4);
}
