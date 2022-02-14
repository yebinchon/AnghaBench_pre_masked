
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int databuf; } ;
typedef TYPE_1__ stream_bucket_ctx_t ;
struct TYPE_5__ {TYPE_1__* data; } ;
typedef TYPE_2__ serf_bucket_t ;
typedef int apr_status_t ;
typedef int apr_size_t ;


 int FUNC_0 (int *,int,int*,char const**,int *) ;

__attribute__((used)) static apr_status_t
FUNC_1(serf_bucket_t *VAR_0, int VAR_1,
                       int *VAR_2, const char **VAR_3, apr_size_t *VAR_4)
{
  stream_bucket_ctx_t *VAR_5 = VAR_0->data;

  return FUNC_0(&VAR_5->databuf, VAR_1, VAR_2, VAR_3, VAR_4);
}
