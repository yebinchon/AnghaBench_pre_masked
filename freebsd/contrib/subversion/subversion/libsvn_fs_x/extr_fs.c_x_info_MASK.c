
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int min_unpacked_rev; int max_files_per_dir; } ;
typedef TYPE_1__ svn_fs_x__data_t ;
struct TYPE_7__ {TYPE_1__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
struct TYPE_8__ {int min_unpacked_rev; int shard_size; int fs_type; } ;
typedef TYPE_3__ svn_fs_fsx_info_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 TYPE_3__* FUNC_0 (int *,int) ;

__attribute__((used)) static svn_error_t *
FUNC_1(const void **VAR_2,
       svn_fs_t *VAR_3,
       apr_pool_t *VAR_4,
       apr_pool_t *VAR_5)
{
  svn_fs_x__data_t *VAR_6 = VAR_3->fsap_data;
  svn_fs_fsx_info_t *VAR_7 = FUNC_0(VAR_4, sizeof(*VAR_7));
  VAR_7->fs_type = VAR_0;
  VAR_7->shard_size = VAR_6->max_files_per_dir;
  VAR_7->min_unpacked_rev = VAR_6->min_unpacked_rev;
  *VAR_2 = VAR_7;
  return VAR_1;
}
