
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_revnum_t ;
typedef int svn_repos_notify_func_t ;
typedef int svn_mergeinfo_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,void*,int ,int ,scalar_t__) ;
 int FUNC_4 (int *,int ,scalar_t__,int ,int ,int *,int *) ;
 int FUNC_5 (int *,char const*,int *) ;
 int VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_boolean_t *VAR_3,
                           const char *VAR_4,
                           svn_revnum_t VAR_5,
                           svn_repos_notify_func_t VAR_6,
                           void *VAR_7,
                           apr_pool_t *VAR_8)
{
  svn_mergeinfo_t VAR_9, VAR_10;

  FUNC_0(FUNC_5(&VAR_9, VAR_4, VAR_8));
  FUNC_0(FUNC_4(
            &VAR_10, VAR_9,
            VAR_5 - 1, 0,
            VAR_1, VAR_8, VAR_8));

  if (FUNC_2(VAR_10))
    {
      FUNC_3(VAR_8, VAR_6, VAR_7,
                     VAR_2,
                     FUNC_1("Mergeinfo referencing revision(s) prior "
                       "to the oldest dumped revision (r%ld). "
                       "Loading this dump may result in invalid "
                       "mergeinfo."),
                     VAR_5);

      if (VAR_3)
        *VAR_3 = VAR_1;
    }

  return VAR_0;
}
