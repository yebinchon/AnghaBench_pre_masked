
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_6__ {int path; int base_revision; int prop_changes; int relpath; int * commit_ctx; int * pool; } ;
typedef TYPE_1__ proppatch_context_t ;
struct TYPE_7__ {TYPE_5__* commit_ctx; int pool; int working_url; int url; int base_revision; int prop_changes; int relpath; } ;
typedef TYPE_2__ dir_context_t ;
typedef int apr_pool_t ;
struct TYPE_8__ {int open_batons; int session; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int *,int) ;
 int FUNC_4 (int ,TYPE_1__*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_5(void *VAR_1,
                apr_pool_t *VAR_2)
{
  dir_context_t *VAR_3 = VAR_1;






  if (FUNC_2(VAR_3->prop_changes))
    {
      proppatch_context_t *VAR_4;

      VAR_4 = FUNC_3(VAR_2, sizeof(*VAR_4));
      VAR_4->pool = VAR_2;
      VAR_4->commit_ctx = ((void*)0) ;
      VAR_4->relpath = VAR_3->relpath;
      VAR_4->prop_changes = VAR_3->prop_changes;
      VAR_4->base_revision = VAR_3->base_revision;

      if (FUNC_1(VAR_3->commit_ctx))
        {
          VAR_4->path = VAR_3->url;
        }
      else
        {
          VAR_4->path = VAR_3->working_url;
        }

      FUNC_0(FUNC_4(VAR_3->commit_ctx->session,
                                 VAR_4, VAR_3->pool));
    }

  VAR_3->commit_ctx->open_batons--;

  return VAR_0;
}
