
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int serf_bucket_t ;
struct TYPE_2__ {int relpath; int commit_ctx; } ;
typedef TYPE_1__ dir_context_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int *,int *,int ,int ,int *) ;
 int * FUNC_1 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_2(serf_bucket_t *VAR_0,
                             void *VAR_1,
                             apr_pool_t *VAR_2 ,
                             apr_pool_t *VAR_3)
{
  dir_context_t *VAR_4 = VAR_1;
  svn_boolean_t VAR_5;

  return FUNC_1(
      FUNC_0(&VAR_5, VAR_0, VAR_4->commit_ctx, VAR_4->relpath,
                                VAR_2));
}
