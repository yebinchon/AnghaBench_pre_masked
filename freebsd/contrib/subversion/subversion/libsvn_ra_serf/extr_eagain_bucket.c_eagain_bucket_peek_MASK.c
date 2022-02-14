
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* data; } ;
typedef TYPE_1__ serf_bucket_t ;
struct TYPE_5__ {char* data; int remaining; } ;
typedef TYPE_2__ eagain_baton_t ;
typedef int apr_status_t ;
typedef int apr_size_t ;


 int VAR_0 ;

__attribute__((used)) static apr_status_t
FUNC_0(serf_bucket_t *VAR_1,
                   const char **VAR_2,
                   apr_size_t *VAR_3)
{
  const eagain_baton_t *VAR_4 = VAR_1->data;

  *VAR_2 = VAR_4->data ? VAR_4->data : "";
  *VAR_3 = VAR_4->remaining;

  return VAR_0;
}
