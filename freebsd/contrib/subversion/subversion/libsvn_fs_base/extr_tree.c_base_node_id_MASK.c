
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fs; int is_txn_root; TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
struct node_id_args {char const* path; TYPE_1__* root; int const** id_p; } ;
struct TYPE_5__ {int root_dir; } ;
typedef TYPE_2__ base_root_data_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int ,struct node_id_args*,int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_4(const svn_fs_id_t **VAR_3,
             svn_fs_root_t *VAR_4,
             const char *VAR_5,
             apr_pool_t *VAR_6)
{
  base_root_data_t *VAR_7 = VAR_4->fsap_data;

  if (! VAR_4->is_txn_root
      && (VAR_5[0] == '\0' || ((VAR_5[0] == '/') && (VAR_5[1] == '\0'))))
    {




      *VAR_3 = FUNC_2(FUNC_1(VAR_7->root_dir),
                                   VAR_6);
    }
  else
    {
      const svn_fs_id_t *VAR_8;
      struct node_id_args VAR_9;

      VAR_9.id_p = &VAR_8;
      VAR_9.root = VAR_4;
      VAR_9.path = VAR_5;

      FUNC_0(FUNC_3(VAR_4->fs, VAR_2, &VAR_9,
                                     VAR_0, VAR_6));
      *VAR_3 = VAR_8;
    }
  return VAR_1;
}
