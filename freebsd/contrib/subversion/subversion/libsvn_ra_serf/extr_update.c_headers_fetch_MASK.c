
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int serf_bucket_t ;
struct TYPE_3__ {char* delta_base; TYPE_2__* session; } ;
typedef TYPE_1__ fetch_ctx_t ;
typedef int apr_pool_t ;
struct TYPE_4__ {scalar_t__ using_compression; } ;


 char* VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_2(serf_bucket_t *VAR_3,
              void *VAR_4,
              apr_pool_t *VAR_5 ,
              apr_pool_t *VAR_6)
{
  fetch_ctx_t *VAR_7 = VAR_4;


  if (VAR_7->delta_base)
    {
      FUNC_0(VAR_3, VAR_0,
                               VAR_7->delta_base);
      FUNC_1(VAR_3, VAR_7->session);
    }
  else if (VAR_7->session->using_compression != VAR_2)
    {
      FUNC_0(VAR_3, "Accept-Encoding", "gzip");
    }

  return VAR_1;
}
