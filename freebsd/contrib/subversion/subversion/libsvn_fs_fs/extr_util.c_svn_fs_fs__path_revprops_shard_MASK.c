
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_4__ {int path; TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
struct TYPE_5__ {int max_files_per_dir; } ;
typedef TYPE_2__ fs_fs_data_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int) ;
 char const* FUNC_2 (int *,int ,int ,int ,int ) ;

const char *
FUNC_3(svn_fs_t *VAR_2,
                               svn_revnum_t VAR_3,
                               apr_pool_t *VAR_4)
{
  fs_fs_data_t *VAR_5 = VAR_2->fsap_data;

  FUNC_1(VAR_5->max_files_per_dir);
  return FUNC_2(VAR_4, VAR_2->path, VAR_0,
                              FUNC_0(VAR_4, "%ld",
                                           VAR_3 / VAR_5->max_files_per_dir),
                              VAR_1);
}
