
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_1 ;

void FUNC_5(bool VAR_2)
{
 if (!FUNC_0(1) || VAR_0)
  VAR_1 = 0;


 if (VAR_1 < 0)
  VAR_1 = 1;

 switch (VAR_1) {
 case 2:
  if (FUNC_1() == 0)
   break;

 case 1:
  VAR_1 = 1;
  if (FUNC_4() == 0)
   break;

 default:
  VAR_1 = 0;
  if (VAR_2)
   FUNC_3();

  FUNC_2();
  break;
 }
}
