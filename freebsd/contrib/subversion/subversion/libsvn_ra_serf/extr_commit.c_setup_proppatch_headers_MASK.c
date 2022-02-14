
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int serf_bucket_t ;
struct TYPE_2__ {scalar_t__ relpath; scalar_t__ commit_ctx; int base_revision; } ;
typedef TYPE_1__ proppatch_context_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int * VAR_1 ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,scalar_t__,scalar_t__,int *) ;
 int FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_5(serf_bucket_t *VAR_2,
                        void *VAR_3,
                        apr_pool_t *VAR_4 ,
                        apr_pool_t *VAR_5)
{
  proppatch_context_t *VAR_6 = VAR_3;

  if (FUNC_1(VAR_6->base_revision))
    {
      FUNC_4(VAR_2, VAR_0,
                              FUNC_2(VAR_4, "%ld",
                                           VAR_6->base_revision));
    }

  if (VAR_6->relpath && VAR_6->commit_ctx)
    FUNC_0(FUNC_3(VAR_2, VAR_6->commit_ctx,
                                        VAR_6->relpath, VAR_4));

  return VAR_1;
}
