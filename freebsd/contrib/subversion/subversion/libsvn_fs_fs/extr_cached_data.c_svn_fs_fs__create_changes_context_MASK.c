
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_fs_t ;
struct TYPE_4__ {int * rev_file_pool; int revision; int * fs; } ;
typedef TYPE_1__ svn_fs_fs__changes_context_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int) ;

svn_error_t *
FUNC_1(svn_fs_fs__changes_context_t **VAR_1,
                                  svn_fs_t *VAR_2,
                                  svn_revnum_t VAR_3,
                                  apr_pool_t *VAR_4)
{
  svn_fs_fs__changes_context_t *VAR_5 = FUNC_0(VAR_4,
                                                     sizeof(*VAR_5));
  VAR_5->fs = VAR_2;
  VAR_5->revision = VAR_3;
  VAR_5->rev_file_pool = VAR_4;

  *VAR_1 = VAR_5;
  return VAR_0;
}
