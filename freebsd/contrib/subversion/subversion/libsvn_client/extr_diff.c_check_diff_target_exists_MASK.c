
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_revnum_t ;
typedef int svn_ra_session_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;
 int * FUNC_3 (int ,int *,int ,char const*,scalar_t__,...) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int *,char*,scalar_t__,scalar_t__*,int *) ;
 int FUNC_5 (int *,char const**,int *) ;
 int FUNC_6 (int *,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(const char *VAR_3,
                         svn_revnum_t VAR_4,
                         svn_revnum_t VAR_5,
                         svn_ra_session_t *VAR_6,
                         apr_pool_t *VAR_7)
{
  svn_node_kind_t VAR_8;
  const char *VAR_9;

  FUNC_0(FUNC_5(VAR_6, &VAR_9, VAR_7));

  if (FUNC_2(VAR_3, VAR_9) != 0)
    FUNC_0(FUNC_6(VAR_6, VAR_3, VAR_7));

  FUNC_0(FUNC_4(VAR_6, "", VAR_4, &VAR_8, VAR_7));
  if (VAR_8 == VAR_2)
    {
      if (VAR_4 == VAR_5)
        return FUNC_3(VAR_0, ((void*)0),
                                 FUNC_1("Diff target '%s' was not found in the "
                                   "repository at revision '%ld'"),
                                 VAR_3, VAR_4);
      else
        return FUNC_3(VAR_0, ((void*)0),
                                 FUNC_1("Diff target '%s' was not found in the "
                                   "repository at revision '%ld' or '%ld'"),
                                 VAR_3, VAR_4, VAR_5);
     }

  if (FUNC_2(VAR_3, VAR_9) != 0)
    FUNC_0(FUNC_6(VAR_6, VAR_9, VAR_7));

  return VAR_1;
}
