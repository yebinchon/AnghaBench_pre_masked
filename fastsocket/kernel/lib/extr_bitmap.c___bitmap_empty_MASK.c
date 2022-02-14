
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long const FUNC_0 (int) ;
 int VAR_0 ;

int FUNC_1(const unsigned long *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4 = VAR_2/VAR_0;
 for (VAR_3 = 0; VAR_3 < VAR_4; ++VAR_3)
  if (VAR_1[VAR_3])
   return 0;

 if (VAR_2 % VAR_0)
  if (VAR_1[VAR_3] & FUNC_0(VAR_2))
   return 0;

 return 1;
}
