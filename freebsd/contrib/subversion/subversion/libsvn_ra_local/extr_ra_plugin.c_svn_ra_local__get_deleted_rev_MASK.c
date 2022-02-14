
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
struct TYPE_7__ {int fs; TYPE_1__* fs_path; } ;
typedef TYPE_3__ svn_ra_local__session_baton_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {int data; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 char* FUNC_1 (int ,char const*,int *) ;
 int FUNC_2 (int ,char const*,int ,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_ra_session_t *VAR_1,
                              const char *VAR_2,
                              svn_revnum_t VAR_3,
                              svn_revnum_t VAR_4,
                              svn_revnum_t *VAR_5,
                              apr_pool_t *VAR_6)
{
  svn_ra_local__session_baton_t *VAR_7 = VAR_1->priv;
  const char *VAR_8 = FUNC_1(VAR_7->fs_path->data, VAR_2, VAR_6);

  FUNC_0(FUNC_2(VAR_7->fs,
                                VAR_8,
                                VAR_3,
                                VAR_4,
                                VAR_5,
                                VAR_6));

  return VAR_0;
}
