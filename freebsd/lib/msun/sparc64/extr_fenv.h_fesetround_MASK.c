
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fenv_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*) ;

inline int
FUNC_2(int VAR_2)
{
 fenv_t VAR_3;

 if (VAR_2 & ~VAR_0)
  return (-1);
 FUNC_1(&VAR_3);
 VAR_3 &= ~(VAR_0 << VAR_1);
 VAR_3 |= VAR_2 << VAR_1;
 FUNC_0(VAR_3);
 return (0);
}
