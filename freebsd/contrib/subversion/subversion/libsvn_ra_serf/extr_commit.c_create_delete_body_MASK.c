
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int serf_bucket_t ;
typedef int serf_bucket_alloc_t ;
struct TYPE_4__ {int relpath; TYPE_1__* commit_ctx; } ;
typedef TYPE_2__ delete_context_t ;
typedef int apr_pool_t ;
struct TYPE_3__ {int lock_tokens; } ;


 int * VAR_0 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int ,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(serf_bucket_t **VAR_1,
                   void *VAR_2,
                   serf_bucket_alloc_t *VAR_3,
                   apr_pool_t *VAR_4 ,
                   apr_pool_t *VAR_5)
{
  delete_context_t *VAR_6 = VAR_2;
  serf_bucket_t *VAR_7;

  VAR_7 = FUNC_0(VAR_3);

  FUNC_1(VAR_7, VAR_3);

  FUNC_2(VAR_6->commit_ctx->lock_tokens,
                                     VAR_6->relpath, VAR_7, VAR_3, VAR_4);

  *VAR_1 = VAR_7;
  return VAR_0;
}
