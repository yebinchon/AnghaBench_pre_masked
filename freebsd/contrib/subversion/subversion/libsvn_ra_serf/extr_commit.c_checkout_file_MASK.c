
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_5__ {int pool; TYPE_3__* commit_ctx; int working_url; int base_revision; int relpath; TYPE_2__* parent_dir; } ;
typedef TYPE_1__ file_context_t ;
struct TYPE_6__ {struct TYPE_6__* parent_dir; int relpath; int working_url; scalar_t__ added; } ;
typedef TYPE_2__ dir_context_t ;
typedef int apr_pool_t ;
struct TYPE_7__ {int session; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (char const**,int ,int ,int ,int *,int *,int *) ;
 int FUNC_3 (int *,TYPE_3__*,char const*,int ,int *) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_7(file_context_t *VAR_1,
              apr_pool_t *VAR_2)
{
  dir_context_t *VAR_3 = VAR_1->parent_dir;
  const char *VAR_4;




  while (VAR_3)
    {
      if (VAR_3->added)
        {

          FUNC_1(VAR_3->working_url);
          VAR_1->working_url = FUNC_5(
                                    VAR_3->working_url,
                                    FUNC_6(
                                      VAR_3->relpath, VAR_1->relpath),
                                    VAR_1->pool);
          return VAR_0;
        }
      VAR_3 = VAR_3->parent_dir;
    }

  FUNC_0(FUNC_2(&VAR_4,
                          VAR_1->commit_ctx->session,
                          VAR_1->relpath, VAR_1->base_revision,
                          ((void*)0), VAR_2, VAR_2));


  return FUNC_4(FUNC_3(&VAR_1->working_url,
                                             VAR_1->commit_ctx, VAR_4,
                                              VAR_1->pool, VAR_2));
}
