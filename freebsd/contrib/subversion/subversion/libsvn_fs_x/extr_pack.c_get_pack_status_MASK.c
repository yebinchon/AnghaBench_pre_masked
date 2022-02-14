
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_6__ {int min_unpacked_rev; int max_files_per_dir; } ;
typedef TYPE_1__ svn_fs_x__data_t ;
struct TYPE_7__ {TYPE_1__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int*,TYPE_2__*,int *) ;
 int FUNC_2 (int*,TYPE_2__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_boolean_t *VAR_3,
                svn_fs_t *VAR_4,
                apr_pool_t *VAR_5)
{
  svn_fs_x__data_t *VAR_6 = VAR_4->fsap_data;
  apr_int64_t VAR_7;
  svn_revnum_t VAR_8;

  FUNC_0(FUNC_1(&VAR_6->min_unpacked_rev, VAR_4,
                                          VAR_5));

  FUNC_0(FUNC_2(&VAR_8, VAR_4, VAR_5));
  VAR_7 = (VAR_8 + 1) / VAR_6->max_files_per_dir;


  if (VAR_6->min_unpacked_rev == (VAR_7 * VAR_6->max_files_per_dir))
    *VAR_3 = VAR_2;
  else
    *VAR_3 = VAR_0;

  return VAR_1;
}
