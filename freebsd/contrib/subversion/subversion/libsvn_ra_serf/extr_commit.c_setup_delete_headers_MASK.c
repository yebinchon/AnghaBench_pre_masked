
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int serf_bucket_t ;
struct TYPE_4__ {TYPE_2__* commit_ctx; int relpath; int non_recursive_if; int revision; } ;
typedef TYPE_1__ delete_context_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {scalar_t__ keep_locks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,TYPE_2__*,int ,int *) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (scalar_t__*,int *,TYPE_2__*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(serf_bucket_t *VAR_5,
                     void *VAR_6,
                     apr_pool_t *VAR_7 ,
                     apr_pool_t *VAR_8)
{
  delete_context_t *VAR_9 = VAR_6;
  svn_boolean_t VAR_10;

  FUNC_3(VAR_5, VAR_2,
                          FUNC_1(VAR_7, VAR_9->revision));

  if (! VAR_9->non_recursive_if)
    FUNC_0(FUNC_5(&VAR_10, VAR_5, VAR_9->commit_ctx,
                                      VAR_9->relpath, VAR_7));
  else
    {
      FUNC_0(FUNC_2(VAR_5, VAR_9->commit_ctx,
                                          VAR_9->relpath, VAR_7));
      VAR_10 = VAR_4;
    }

  if (VAR_10 && VAR_9->commit_ctx->keep_locks)
    FUNC_4(VAR_5, VAR_0,
                                      VAR_1);

  return VAR_3;
}
