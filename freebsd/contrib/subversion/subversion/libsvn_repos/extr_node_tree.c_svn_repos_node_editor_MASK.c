
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int fs; } ;
typedef TYPE_1__ svn_repos_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
struct TYPE_7__ {void* change_dir_prop; void* change_file_prop; int apply_textdelta; int open_file; int add_file; int open_directory; int add_directory; int delete_entry; int open_root; } ;
typedef TYPE_2__ svn_delta_editor_t ;
struct edit_baton {int * base_root; int * root; int fs; int * node_pool; } ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct edit_baton* FUNC_0 (int *,int) ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__* FUNC_1 (int *) ;

svn_error_t *
FUNC_2(const svn_delta_editor_t **VAR_9,
                      void **VAR_10,
                      svn_repos_t *VAR_11,
                      svn_fs_root_t *VAR_12,
                      svn_fs_root_t *VAR_13,
                      apr_pool_t *VAR_14,
                      apr_pool_t *VAR_15)
{
  svn_delta_editor_t *VAR_16;
  struct edit_baton *VAR_17;


  VAR_16 = FUNC_1(VAR_15);
  VAR_16->open_root = VAR_8;
  VAR_16->delete_entry = VAR_5;
  VAR_16->add_directory = VAR_1;
  VAR_16->open_directory = VAR_6;
  VAR_16->add_file = VAR_2;
  VAR_16->open_file = VAR_7;
  VAR_16->apply_textdelta = VAR_3;
  VAR_16->change_file_prop = VAR_4;
  VAR_16->change_dir_prop = VAR_4;


  VAR_17 = FUNC_0(VAR_15, sizeof(*VAR_17));
  VAR_17->node_pool = VAR_14;
  VAR_17->fs = VAR_11->fs;
  VAR_17->root = VAR_13;
  VAR_17->base_root = VAR_12;

  *VAR_9 = VAR_16;
  *VAR_10 = VAR_17;

  return VAR_0;
}
