
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_4__ {int min_unpacked_rev; int max_files_per_dir; } ;
typedef TYPE_1__ svn_fs_x__data_t ;
struct TYPE_5__ {TYPE_1__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;



svn_revnum_t
FUNC_0(svn_fs_t *VAR_0, svn_revnum_t VAR_1)
{
  svn_fs_x__data_t *VAR_2 = VAR_0->fsap_data;

  return VAR_1 < VAR_2->min_unpacked_rev
       ? VAR_1 - (VAR_1 % VAR_2->max_files_per_dir)
       : VAR_1;
}
