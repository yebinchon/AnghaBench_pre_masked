
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long*,int ,int) ;

void FUNC_2(unsigned long *VAR_1,
   const unsigned long *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6 = FUNC_0(VAR_4), VAR_7 = VAR_4 % VAR_0;
 int VAR_8 = VAR_3/VAR_0, VAR_9 = VAR_3 % VAR_0;
 for (VAR_5 = VAR_6 - VAR_8 - 1; VAR_5 >= 0; --VAR_5) {
  unsigned long VAR_10, VAR_11;





  if (VAR_9 && VAR_5 > 0)
   VAR_11 = VAR_2[VAR_5 - 1];
  else
   VAR_11 = 0;
  VAR_10 = VAR_2[VAR_5];
  if (VAR_7 && VAR_5 == VAR_6 - 1)
   VAR_10 &= (1UL << VAR_7) - 1;
  VAR_1[VAR_5 + VAR_8] = VAR_11 >> (VAR_0 - VAR_9) | VAR_10 << VAR_9;
  if (VAR_7 && VAR_5 + VAR_8 == VAR_6 - 1)
   VAR_1[VAR_5 + VAR_8] &= (1UL << VAR_7) - 1;
 }
 if (VAR_8)
  FUNC_1(VAR_1, 0, VAR_8*sizeof(unsigned long));
}
