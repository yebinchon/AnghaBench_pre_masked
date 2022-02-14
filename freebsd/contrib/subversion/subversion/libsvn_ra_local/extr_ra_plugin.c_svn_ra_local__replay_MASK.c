
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_6__ {TYPE_3__* priv; } ;
typedef TYPE_2__ svn_ra_session_t ;
struct TYPE_7__ {TYPE_1__* fs_path; int repos; } ;
typedef TYPE_3__ svn_ra_local__session_baton_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef int svn_delta_editor_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {int data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int **,int ,int ,int *) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int *,int ,int ,int ,int const*,void*,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_ra_session_t *VAR_0,
                     svn_revnum_t VAR_1,
                     svn_revnum_t VAR_2,
                     svn_boolean_t VAR_3,
                     const svn_delta_editor_t *VAR_4,
                     void *VAR_5,
                     apr_pool_t *VAR_6)
{
  svn_ra_local__session_baton_t *VAR_7 = VAR_0->priv;
  svn_fs_root_t *VAR_8;

  FUNC_0(FUNC_1(&VAR_8, FUNC_2(VAR_7->repos),
                               VAR_1, VAR_6));
  return FUNC_3(VAR_8, VAR_7->fs_path->data, VAR_2,
                           VAR_3, VAR_4, VAR_5, ((void*)0), ((void*)0),
                           VAR_6);
}
