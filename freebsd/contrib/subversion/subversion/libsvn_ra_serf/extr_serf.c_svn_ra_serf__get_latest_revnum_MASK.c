
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_3__ {int * priv; } ;
typedef TYPE_1__ svn_ra_session_t ;
typedef int svn_ra_serf__session_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_ra_session_t *VAR_0,
                               svn_revnum_t *VAR_1,
                               apr_pool_t *VAR_2)
{
  svn_ra_serf__session_t *VAR_3 = VAR_0->priv;

  return FUNC_0(FUNC_1(
                           VAR_1, VAR_3, VAR_2));
}
