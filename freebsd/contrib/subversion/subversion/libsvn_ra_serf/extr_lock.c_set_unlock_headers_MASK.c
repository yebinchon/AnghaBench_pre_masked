
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int serf_bucket_t ;
struct TYPE_2__ {scalar_t__ force; int token; } ;
typedef TYPE_1__ lock_ctx_t ;
typedef int apr_pool_t ;


 char* VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int *,char*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_1(serf_bucket_t *VAR_3,
                   void *VAR_4,
                   apr_pool_t *VAR_5 ,
                   apr_pool_t *VAR_6)
{
  lock_ctx_t *VAR_7 = VAR_4;

  FUNC_0(VAR_3, "Lock-Token", VAR_7->token);
  if (VAR_7->force)
    {
      FUNC_0(VAR_3, VAR_0,
                              VAR_1);
    }

  return VAR_2;
}
