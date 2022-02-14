
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_6__ {int path; TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
struct TYPE_7__ {scalar_t__ max_files_per_dir; } ;
typedef TYPE_2__ fs_fs_data_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int) ;
 char const* FUNC_2 (int ,int ,int *) ;
 char const* FUNC_3 (int *,int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int *) ;

const char *
FUNC_6(svn_fs_t *VAR_2, svn_revnum_t VAR_3, apr_pool_t *VAR_4)
{
  fs_fs_data_t *VAR_5 = VAR_2->fsap_data;

  FUNC_1(! FUNC_4(VAR_2, VAR_3));

  if (VAR_5->max_files_per_dir)
    {
      return FUNC_2(FUNC_5(VAR_2, VAR_3, VAR_4),
                             FUNC_0(VAR_4, "%ld", VAR_3),
                             VAR_4);
    }

  return FUNC_3(VAR_4, VAR_2->path, VAR_0,
                              FUNC_0(VAR_4, "%ld", VAR_3), VAR_1);
}
