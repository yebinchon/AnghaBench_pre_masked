
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int *) ;

const char *
FUNC_3 (int VAR_0, rtx *VAR_1)
{
  rtx VAR_2;

  switch (VAR_0)
    {
    case 2:
      if (FUNC_0 (VAR_1[4]) > FUNC_0 (VAR_1[5]))
 {
   VAR_2 = VAR_1[4];
   VAR_1[4] = VAR_1[5];
   VAR_1[5] = VAR_2;
 }
      FUNC_2 ("ldmia\t%1!, {%4, %5}", VAR_1);
      FUNC_2 ("stmia\t%0!, {%4, %5}", VAR_1);
      break;

    case 3:
      if (FUNC_0 (VAR_1[4]) > FUNC_0 (VAR_1[5]))
 {
   VAR_2 = VAR_1[4];
   VAR_1[4] = VAR_1[5];
   VAR_1[5] = VAR_2;
 }
      if (FUNC_0 (VAR_1[5]) > FUNC_0 (VAR_1[6]))
 {
   VAR_2 = VAR_1[5];
   VAR_1[5] = VAR_1[6];
   VAR_1[6] = VAR_2;
 }
      if (FUNC_0 (VAR_1[4]) > FUNC_0 (VAR_1[5]))
 {
   VAR_2 = VAR_1[4];
   VAR_1[4] = VAR_1[5];
   VAR_1[5] = VAR_2;
 }

      FUNC_2 ("ldmia\t%1!, {%4, %5, %6}", VAR_1);
      FUNC_2 ("stmia\t%0!, {%4, %5, %6}", VAR_1);
      break;

    default:
      FUNC_1 ();
    }

  return "";
}
