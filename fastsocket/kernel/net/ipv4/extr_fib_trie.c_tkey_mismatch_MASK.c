
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t_key ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(t_key VAR_1, int VAR_2, t_key VAR_3)
{
 t_key VAR_4 = VAR_1 ^ VAR_3;
 int VAR_5 = VAR_2;

 if (!VAR_4)
  return 0;
 while ((VAR_4 << VAR_5) >> (VAR_0-1) == 0)
  VAR_5++;
 return VAR_5;
}
