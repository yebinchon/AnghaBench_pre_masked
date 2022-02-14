
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_revnum_t ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void
FUNC_1(svn_revnum_t *VAR_0,
                              svn_revnum_t *VAR_1,
                              svn_revnum_t VAR_2)
{

  if (! FUNC_0(*VAR_0)
      || VAR_2 > *VAR_0)
    *VAR_0 = VAR_2;

  if (! FUNC_0(*VAR_1)
      || VAR_2 < *VAR_1)
    *VAR_1 = VAR_2;
}
