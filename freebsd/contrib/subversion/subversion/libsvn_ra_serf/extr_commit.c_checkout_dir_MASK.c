
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_4__ {char* working_url; char* url; int pool; TYPE_2__* commit_ctx; struct TYPE_4__* parent_dir; int relpath; scalar_t__ added; } ;
typedef TYPE_1__ dir_context_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {char* baseline_url; char* vcc_url; } ;


 int FUNC_0 (char*) ;
 int * VAR_0 ;
 int FUNC_1 (char const**,TYPE_2__*,char const*,int ,int *) ;
 int * FUNC_2 (int ) ;
 char* FUNC_3 (char*,char const*,int ) ;
 char* FUNC_4 (int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_5(dir_context_t *VAR_1,
             apr_pool_t *VAR_2)
{
  dir_context_t *VAR_3 = VAR_1;
  const char *VAR_4;
  const char **VAR_5;

  if (VAR_1->working_url)
    {
      return VAR_0;
    }



  while (VAR_3)
    {
      if (VAR_3->added)
        {



          dir_context_t *VAR_6 = VAR_3->parent_dir;
          const char *VAR_7 = FUNC_4(VAR_6->relpath,
                                                          VAR_1->relpath);


          FUNC_0(VAR_6->working_url);
          VAR_1->working_url = FUNC_3(
                                   VAR_6->working_url,
                                   VAR_7, VAR_1->pool);
          return VAR_0;
        }
      VAR_3 = VAR_3->parent_dir;
    }





  if (!VAR_1->parent_dir && !VAR_1->commit_ctx->baseline_url)
    {
      VAR_4 = VAR_1->commit_ctx->vcc_url;
      VAR_5 = &VAR_1->commit_ctx->baseline_url;
    }
  else
    {
      VAR_4 = VAR_1->url;
      VAR_5 = &VAR_1->working_url;
    }


  return FUNC_2(FUNC_1(VAR_5, VAR_1->commit_ctx,
                                             VAR_4,
                                             VAR_1->pool, VAR_2));
}
