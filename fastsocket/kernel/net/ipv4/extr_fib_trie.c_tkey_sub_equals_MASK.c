
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t_key ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(t_key VAR_1, int VAR_2, int VAR_3, t_key VAR_4)
{
 if (VAR_3 == 0 || VAR_2 >= VAR_0)
  return 1;
 VAR_3 = VAR_3 > VAR_0 ? VAR_0 : VAR_3;
 return ((VAR_1 ^ VAR_4) << VAR_2) >> (VAR_0 - VAR_3) == 0;
}
