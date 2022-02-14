
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,char*,int,int) ;

char *
FUNC_5 (rtx VAR_2, rtx VAR_3)
{
  static char VAR_4[64];
  int VAR_5, VAR_6;

  FUNC_3 (FUNC_1 (VAR_2) == VAR_1 && FUNC_0 (FUNC_2 (VAR_2))
       && FUNC_1 (VAR_3) == VAR_1 && FUNC_0 (FUNC_2 (VAR_3)));


  VAR_5 = 4 * (FUNC_2 (VAR_2) - VAR_0) + 1;
  VAR_6 = 4 * (FUNC_2 (VAR_3) - VAR_0) + 1;

  FUNC_4 (VAR_4, "crnot %d,%d", VAR_5, VAR_6);
  return VAR_4;
}
