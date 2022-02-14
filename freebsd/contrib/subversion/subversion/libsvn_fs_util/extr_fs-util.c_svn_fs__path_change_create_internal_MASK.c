
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_fs_path_change_kind_t ;
struct TYPE_4__ {int copyfrom_rev; int mergeinfo_mod; int change_kind; int const* node_rev_id; } ;
typedef TYPE_1__ svn_fs_path_change2_t ;
typedef int svn_fs_id_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int) ;
 int VAR_1 ;

svn_fs_path_change2_t *
FUNC_1(const svn_fs_id_t *VAR_2,
                                    svn_fs_path_change_kind_t VAR_3,
                                    apr_pool_t *VAR_4)
{
  svn_fs_path_change2_t *VAR_5;

  VAR_5 = FUNC_0(VAR_4, sizeof(*VAR_5));
  VAR_5->node_rev_id = VAR_2;
  VAR_5->change_kind = VAR_3;
  VAR_5->mergeinfo_mod = VAR_1;
  VAR_5->copyfrom_rev = VAR_0;

  return VAR_5;
}
