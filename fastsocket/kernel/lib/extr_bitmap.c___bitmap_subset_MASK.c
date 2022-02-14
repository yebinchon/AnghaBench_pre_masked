
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long const FUNC_0 (int) ;
 int VAR_0 ;

int FUNC_1(const unsigned long *VAR_1,
    const unsigned long *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5 = VAR_3/VAR_0;
 for (VAR_4 = 0; VAR_4 < VAR_5; ++VAR_4)
  if (VAR_1[VAR_4] & ~VAR_2[VAR_4])
   return 0;

 if (VAR_3 % VAR_0)
  if ((VAR_1[VAR_4] & ~VAR_2[VAR_4]) & FUNC_0(VAR_3))
   return 0;
 return 1;
}
