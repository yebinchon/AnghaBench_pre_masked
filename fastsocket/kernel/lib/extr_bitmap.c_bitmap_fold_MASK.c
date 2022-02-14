
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long*,int) ;
 int FUNC_1 (unsigned long const*,int) ;
 int FUNC_2 (unsigned long const*,int,int) ;
 int FUNC_3 (int,unsigned long*) ;

void FUNC_4(unsigned long *VAR_0, const unsigned long *VAR_1,
   int VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_0 == VAR_1)
  return;
 FUNC_0(VAR_0, VAR_3);

 for (VAR_4 = FUNC_1(VAR_1, VAR_3);
      VAR_4 < VAR_3;
      VAR_4 = FUNC_2(VAR_1, VAR_3, VAR_4 + 1))
  FUNC_3(VAR_4 % VAR_2, VAR_0);
}
