
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_fs_path_change_kind_t ;
struct TYPE_5__ {char* data; } ;
struct TYPE_6__ {int copyfrom_rev; int mergeinfo_mod; int change_kind; TYPE_1__ path; } ;
typedef TYPE_2__ svn_fs_path_change3_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *,int) ;
 int VAR_1 ;

svn_fs_path_change3_t *
FUNC_1(svn_fs_path_change_kind_t VAR_2,
                                     apr_pool_t *VAR_3)
{
  svn_fs_path_change3_t *VAR_4;

  VAR_4 = FUNC_0(VAR_3, sizeof(*VAR_4));
  VAR_4->path.data = "";
  VAR_4->change_kind = VAR_2;
  VAR_4->mergeinfo_mod = VAR_1;
  VAR_4->copyfrom_rev = VAR_0;

  return VAR_4;
}
