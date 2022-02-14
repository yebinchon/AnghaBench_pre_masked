
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*,int *) ;

const char *
FUNC_4 (rtx *VAR_4)
{
  rtx VAR_5;
  rtx VAR_6;
  rtx VAR_7;
  rtx VAR_8;

  if (FUNC_0 (VAR_4 [1]) != VAR_1
      || FUNC_0 (VAR_8 = FUNC_2 (VAR_4 [1], 0)) != VAR_2
      || FUNC_0 (VAR_5 = FUNC_2 (VAR_8, 0)) != VAR_3
      || FUNC_0 (VAR_6 = FUNC_2 (VAR_8, 1)) != VAR_0
      || ((FUNC_1 (VAR_6) < 1024) && (FUNC_1 (VAR_6) > -1024)))
    return "wldrw%?\t%0, %1";


  FUNC_3 ("str%?\t%0, [sp, #-4]!\t@ Start of GR load expansion", & VAR_5);
  VAR_7 = VAR_4[0];
  VAR_4[0] = VAR_5;
  FUNC_3 ("ldr%?\t%0, %1", VAR_4);

  VAR_4[0] = VAR_7;
  VAR_4[1] = VAR_5;
  FUNC_3 ("tmcr%?\t%0, %1", VAR_4);
  FUNC_3 ("ldr%?\t%0, [sp], #4\t@ End of GR load expansion", & VAR_5);

  return "";
}
