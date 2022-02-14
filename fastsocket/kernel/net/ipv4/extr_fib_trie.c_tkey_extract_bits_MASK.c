
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t_key ;


 int VAR_0 ;

__attribute__((used)) static inline t_key FUNC_0(t_key VAR_1, int VAR_2, int VAR_3)
{
 if (VAR_2 < VAR_0)
  return ((t_key)(VAR_1 << VAR_2)) >> (VAR_0 - VAR_3);
 else
  return 0;
}
