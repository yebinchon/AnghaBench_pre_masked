
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_4__ {int revision_file; int revision; int * fs; } ;
typedef TYPE_1__ svn_fs_x__changes_context_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int *,int *,int ,int *) ;

svn_error_t *
FUNC_4(svn_fs_x__changes_context_t **VAR_1,
                                 svn_fs_t *VAR_2,
                                 svn_revnum_t VAR_3,
                                 apr_pool_t *VAR_4,
                                 apr_pool_t *VAR_5)
{
  svn_fs_x__changes_context_t *VAR_6 = FUNC_1(VAR_4,
                                                    sizeof(*VAR_6));
  VAR_6->fs = VAR_2;
  VAR_6->revision = VAR_3;

  FUNC_0(FUNC_2(VAR_3, VAR_2, VAR_5));
  FUNC_0(FUNC_3(&VAR_6->revision_file, VAR_2, VAR_3,
                                  VAR_4));

  *VAR_1 = VAR_6;
  return VAR_0;
}
