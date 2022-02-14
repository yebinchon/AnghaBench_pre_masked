
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_4__ {TYPE_2__* priv; } ;
typedef TYPE_1__ svn_ra_session_t ;
struct TYPE_5__ {int fs; } ;
typedef TYPE_2__ svn_ra_local__session_baton_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (int *,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(svn_ra_session_t *VAR_0,
                                svn_revnum_t *VAR_1,
                                apr_pool_t *VAR_2)
{
  svn_ra_local__session_baton_t *VAR_3 = VAR_0->priv;
  return FUNC_0(VAR_1, VAR_3->fs, VAR_2);
}
