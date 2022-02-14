
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_4__ {TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_boolean_t ;
struct TYPE_5__ {int max_files_per_dir; } ;
typedef TYPE_2__ fs_fs_data_t ;



__attribute__((used)) static svn_boolean_t
FUNC_0(svn_fs_t *VAR_0,
           svn_revnum_t VAR_1,
           svn_revnum_t VAR_2)
{
  fs_fs_data_t *VAR_3 = VAR_0->fsap_data;
  return (VAR_1 / VAR_3->max_files_per_dir) == (VAR_2 / VAR_3->max_files_per_dir);
}
