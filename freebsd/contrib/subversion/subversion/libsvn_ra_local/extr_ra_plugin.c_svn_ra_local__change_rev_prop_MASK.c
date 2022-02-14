
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_revnum_t ;
struct TYPE_5__ {TYPE_2__* priv; } ;
typedef TYPE_1__ svn_ra_session_t ;
struct TYPE_6__ {int username; int repos; } ;
typedef TYPE_2__ svn_ra_local__session_baton_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int * FUNC_2 (int ,int ,int ,char const*,int const* const*,int const*,int ,int ,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_ra_session_t *VAR_1,
                              svn_revnum_t VAR_2,
                              const char *VAR_3,
                              const svn_string_t *const *VAR_4,
                              const svn_string_t *VAR_5,
                              apr_pool_t *VAR_6)
{
  svn_ra_local__session_baton_t *VAR_7 = VAR_1->priv;

  FUNC_0(FUNC_1(VAR_1, VAR_6));
  return FUNC_2(VAR_7->repos, VAR_2, VAR_7->username,
                                       VAR_3, VAR_4, VAR_5, VAR_0, VAR_0,
                                       ((void*)0), ((void*)0), VAR_6);
}
