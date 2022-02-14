
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int config; int auth_baton; int callbacks_baton; int callbacks; } ;
typedef TYPE_1__ svn_ra_svn__session_baton_t ;
struct TYPE_7__ {TYPE_1__* priv; } ;
typedef TYPE_2__ svn_ra_session_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_2__*,int *,char const*,int ,int ,int ,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *FUNC_2(svn_ra_session_t *VAR_1,
                                       svn_ra_session_t *VAR_2,
                                       const char *VAR_3,
                                       apr_pool_t *VAR_4,
                                       apr_pool_t *VAR_5)
{
  svn_ra_svn__session_baton_t *VAR_6 = VAR_2->priv;

  FUNC_0(FUNC_1(VAR_1, ((void*)0), VAR_3,
                      VAR_6->callbacks, VAR_6->callbacks_baton,
                      VAR_6->auth_baton, VAR_6->config,
                      VAR_4, VAR_5));

  return VAR_0;
}
