
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 (int) ;
 unsigned long FUNC_1 (int const) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (unsigned long*,unsigned long) ;

__attribute__((used)) static int FUNC_4(unsigned long *VAR_1, int VAR_2, int VAR_3)
{
 unsigned long *VAR_4 = VAR_1 + FUNC_2(VAR_2);
 const int VAR_5 = VAR_2 + VAR_3;
 int VAR_6 = VAR_0 - (VAR_2 % VAR_0);
 unsigned long VAR_7 = FUNC_0(VAR_2);

 while (VAR_3 - VAR_6 >= 0) {
  if (FUNC_3(VAR_4, VAR_7))
   return VAR_3;
  VAR_3 -= VAR_6;
  VAR_6 = VAR_0;
  VAR_7 = ~0UL;
  VAR_4++;
 }
 if (VAR_3) {
  VAR_7 &= FUNC_1(VAR_5);
  if (FUNC_3(VAR_4, VAR_7))
   return VAR_3;
 }

 return 0;
}
