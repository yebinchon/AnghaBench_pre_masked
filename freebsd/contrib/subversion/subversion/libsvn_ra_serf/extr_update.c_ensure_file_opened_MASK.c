
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_7__ {int (* add_file ) (int ,int ,int ,int ,int ,int *) ;int (* open_file ) (int ,int ,int ,int ,int *) ;} ;
typedef TYPE_2__ svn_delta_editor_t ;
struct TYPE_8__ {scalar_t__ file_opened; int file_baton; int pool; int copyfrom_rev; int copyfrom_path; TYPE_5__* parent_dir; int relpath; int base_rev; } ;
typedef TYPE_3__ file_baton_t ;
typedef int apr_pool_t ;
struct TYPE_9__ {int dir_baton; TYPE_1__* ctx; } ;
struct TYPE_6__ {TYPE_2__* editor; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_5__*,int *) ;
 int FUNC_3 (int ,int ,int ,int ,int *) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(file_baton_t *VAR_2,
                   apr_pool_t *VAR_3)
{
  const svn_delta_editor_t *VAR_4 = VAR_2->parent_dir->ctx->editor;

  if (VAR_2->file_opened)
    return VAR_0;


  FUNC_0(FUNC_2(VAR_2->parent_dir, VAR_3));


  if (FUNC_1(VAR_2->base_rev))
    {
      FUNC_0(VAR_4->open_file(VAR_2->relpath,
                                VAR_2->parent_dir->dir_baton,
                                VAR_2->base_rev,
                                VAR_2->pool,
                                &VAR_2->file_baton));
    }
  else
    {
      FUNC_0(VAR_4->add_file(VAR_2->relpath,
                               VAR_2->parent_dir->dir_baton,
                               VAR_2->copyfrom_path,
                               VAR_2->copyfrom_rev,
                               VAR_2->pool,
                               &VAR_2->file_baton));
    }

  VAR_2->file_opened = VAR_1;

  return VAR_0;
}
