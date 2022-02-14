
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int *) ;

const char *
FUNC_7 (rtx VAR_5, rtx *VAR_6, int VAR_7)
{
  int VAR_8 = FUNC_3 (VAR_5, VAR_4, VAR_1) != 0;
  int VAR_9 = FUNC_1 (VAR_6[0]) == VAR_0;
  int VAR_10 = FUNC_5 (VAR_5);




  if ((VAR_9 || VAR_7) && !VAR_8)
    FUNC_6 ("fld\t%y1", VAR_6);

  FUNC_4 (FUNC_2 (VAR_6[1]));
  FUNC_4 (FUNC_0 (VAR_6[0]) == VAR_3);

  if (VAR_7)
      FUNC_6 ("fisttp%z0\t%0", VAR_6);
  else
    {
      if (VAR_10 != VAR_2)
 FUNC_6 ("fldcw\t%3", VAR_6);
      if (VAR_8 || VAR_9)
 FUNC_6 ("fistp%z0\t%0", VAR_6);
      else
 FUNC_6 ("fist%z0\t%0", VAR_6);
      if (VAR_10 != VAR_2)
 FUNC_6 ("fldcw\t%2", VAR_6);
    }

  return "";
}
