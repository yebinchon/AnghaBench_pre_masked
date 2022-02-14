
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* data; } ;
typedef TYPE_1__ serf_bucket_t ;
struct TYPE_5__ {scalar_t__ remaining; char* data; } ;
typedef TYPE_2__ eagain_baton_t ;
typedef int apr_status_t ;
typedef scalar_t__ apr_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static apr_status_t
FUNC_0(serf_bucket_t *VAR_3,
                   apr_size_t VAR_4,
                   const char **VAR_5,
                   apr_size_t *VAR_6)
{
  eagain_baton_t *VAR_7 = VAR_3->data;

  if (VAR_7->remaining > 0)
    {
      *VAR_5 = VAR_7->data;
      if (VAR_4 > VAR_7->remaining || VAR_4 == VAR_2)
        {
          *VAR_6 = VAR_7->remaining;
          VAR_7->data = ((void*)0);
          VAR_7->remaining = 0;
        }
      else
        {
          *VAR_6 = VAR_4;
          VAR_7->data += VAR_4;
          VAR_7->remaining -= VAR_4;
        }

      if (VAR_7->remaining)
        return VAR_1;
    }

  return VAR_0;
}
