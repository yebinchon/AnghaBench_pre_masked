
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct TYPE_6__ {int working_url; int url; int * pool; int prop_changes; int base_revision; int added; int relpath; int name; TYPE_5__* commit_ctx; TYPE_2__* parent_dir; } ;
typedef TYPE_1__ file_context_t ;
struct TYPE_7__ {TYPE_5__* commit_ctx; } ;
typedef TYPE_2__ dir_context_t ;
typedef int apr_pool_t ;
struct TYPE_8__ {int txn_root_url; int open_batons; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char const*) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (int ,char const*,int *) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(const char *VAR_2,
          void *VAR_3,
          svn_revnum_t VAR_4,
          apr_pool_t *VAR_5,
          void **VAR_6)
{
  dir_context_t *VAR_7 = VAR_3;
  file_context_t *VAR_8;

  VAR_8 = FUNC_3(VAR_5, sizeof(*VAR_8));
  VAR_8->pool = VAR_5;

  VAR_8->parent_dir = VAR_7;
  VAR_8->commit_ctx = VAR_7->commit_ctx;
  VAR_8->relpath = FUNC_4(VAR_8->pool, VAR_2);
  VAR_8->name = FUNC_7(VAR_8->relpath, ((void*)0));
  VAR_8->added = VAR_0;
  VAR_8->base_revision = VAR_4;
  VAR_8->prop_changes = FUNC_2(VAR_8->pool);

  VAR_7->commit_ctx->open_batons++;

  if (FUNC_1(VAR_7->commit_ctx))
    {
      VAR_8->url = FUNC_6(VAR_7->commit_ctx->txn_root_url,
                                                  VAR_2, VAR_8->pool);
    }
  else
    {

      FUNC_0(FUNC_5(VAR_8, VAR_8->pool ));

      VAR_8->url = VAR_8->working_url;
    }

  *VAR_6 = VAR_8;

  return VAR_1;
}
