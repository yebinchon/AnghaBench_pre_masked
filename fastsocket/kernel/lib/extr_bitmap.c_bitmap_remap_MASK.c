
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long const*,int,int) ;
 int FUNC_1 (unsigned long const*,int,int) ;
 int FUNC_2 (unsigned long const*,int) ;
 int FUNC_3 (unsigned long*,int) ;
 int FUNC_4 (unsigned long const*,int) ;
 int FUNC_5 (unsigned long const*,int,int) ;
 int FUNC_6 (int,unsigned long*) ;

void FUNC_7(unsigned long *VAR_0, const unsigned long *VAR_1,
  const unsigned long *VAR_2, const unsigned long *VAR_3,
  int VAR_4)
{
 int VAR_5, VAR_6;

 if (VAR_0 == VAR_1)
  return;
 FUNC_3(VAR_0, VAR_4);

 VAR_6 = FUNC_2(VAR_3, VAR_4);
 for (VAR_5 = FUNC_4(VAR_1, VAR_4);
      VAR_5 < VAR_4;
      VAR_5 = FUNC_5(VAR_1, VAR_4, VAR_5 + 1)) {
       int VAR_7 = FUNC_1(VAR_2, VAR_5, VAR_4);
  if (VAR_7 < 0 || VAR_6 == 0)
   FUNC_6(VAR_5, VAR_0);
  else
   FUNC_6(FUNC_0(VAR_3, VAR_7 % VAR_6, VAR_4), VAR_0);
 }
}
