
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_10__ {TYPE_3__* editor; int editor_baton; int update_target; TYPE_2__* sess; scalar_t__ destination; } ;
typedef TYPE_4__ report_context_t ;
struct TYPE_11__ {char* base_name; scalar_t__ dir_opened; int dir_baton; int pool; int copyfrom_rev; int copyfrom_path; struct TYPE_11__* parent_dir; int relpath; int base_rev; TYPE_4__* ctx; } ;
typedef TYPE_5__ dir_baton_t ;
typedef int apr_pool_t ;
struct TYPE_9__ {int * (* add_directory ) (int ,int ,int ,int ,int ,int *) ;int * (* open_directory ) (int ,int ,int ,int ,int *) ;int * (* open_root ) (int ,int ,int ,int *) ;} ;
struct TYPE_8__ {int wc_callback_baton; TYPE_1__* wc_callbacks; } ;
struct TYPE_7__ {int * (* invalidate_wc_props ) (int ,int ,int ,int *) ;} ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_2 (int ,int ,int ,int *) ;
 int * FUNC_3 (int ,int ,int ,int *) ;
 int * FUNC_4 (int ,int ,int ,int ,int *) ;
 int * FUNC_5 (int ,int ,int ,int ,int ,int *) ;

__attribute__((used)) static svn_error_t*
FUNC_6(dir_baton_t *VAR_3,
                  apr_pool_t *VAR_4)
{
  report_context_t *VAR_5 = VAR_3->ctx;

  if (VAR_3->dir_opened)
    return VAR_0;

  if (VAR_3->base_name[0] == '\0')
    {
      if (VAR_5->destination
          && VAR_5->sess->wc_callbacks->invalidate_wc_props)
        {
          FUNC_0(VAR_5->sess->wc_callbacks->invalidate_wc_props(
                      VAR_5->sess->wc_callback_baton,
                      VAR_5->update_target,
                      VAR_1, VAR_4));
        }

      FUNC_0(VAR_5->editor->open_root(VAR_5->editor_baton, VAR_3->base_rev,
                                     VAR_3->pool,
                                     &VAR_3->dir_baton));
    }
  else
    {
      FUNC_0(FUNC_6(VAR_3->parent_dir, VAR_4));

      if (FUNC_1(VAR_3->base_rev))
        {
          FUNC_0(VAR_5->editor->open_directory(VAR_3->relpath,
                                              VAR_3->parent_dir->dir_baton,
                                              VAR_3->base_rev,
                                              VAR_3->pool,
                                              &VAR_3->dir_baton));
        }
      else
        {
          FUNC_0(VAR_5->editor->add_directory(VAR_3->relpath,
                                             VAR_3->parent_dir->dir_baton,
                                             VAR_3->copyfrom_path,
                                             VAR_3->copyfrom_rev,
                                             VAR_3->pool,
                                             &VAR_3->dir_baton));
        }
    }

  VAR_3->dir_opened = VAR_2;

  return VAR_0;
}
