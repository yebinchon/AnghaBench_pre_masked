
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_revnum_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int *,int ,char const*,...) ;

__attribute__((used)) static const char *
FUNC_2(const char *VAR_1,
           svn_revnum_t VAR_2,
           apr_pool_t *VAR_3)
{
  const char *VAR_4;
  if (VAR_2 >= 0)
    VAR_4 = FUNC_1(VAR_3, FUNC_0("%s\t(revision %ld)"), VAR_1, VAR_2);
  else if (VAR_2 == VAR_0)
    VAR_4 = FUNC_1(VAR_3, FUNC_0("%s\t(nonexistent)"), VAR_1);
  else
    VAR_4 = FUNC_1(VAR_3, FUNC_0("%s\t(working copy)"), VAR_1);

  return VAR_4;
}
