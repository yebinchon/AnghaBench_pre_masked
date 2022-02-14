
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_revnum_t ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
  svn_revnum_t VAR_2 = *(const svn_revnum_t *)VAR_0;
  svn_revnum_t VAR_3 = *(const svn_revnum_t *)VAR_1;
  if (VAR_2 == VAR_3)
    return 0;
  return VAR_2 < VAR_3 ? -1 : 1;
}
