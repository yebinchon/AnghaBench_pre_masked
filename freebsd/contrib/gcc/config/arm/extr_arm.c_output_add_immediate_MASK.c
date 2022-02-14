
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef int HOST_WIDE_INT ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,char*,int,int ) ;

const char *
FUNC_3 (rtx *VAR_0)
{
  HOST_WIDE_INT VAR_1 = FUNC_0 (VAR_0[2]);

  if (VAR_1 != 0 || FUNC_1 (VAR_0[0]) != FUNC_1 (VAR_0[1]))
    {
      if (VAR_1 < 0)
 FUNC_2 (VAR_0,
    "sub%?\t%0, %1, %2", "sub%?\t%0, %0, %2", 2,
    -VAR_1);
      else
 FUNC_2 (VAR_0,
    "add%?\t%0, %1, %2", "add%?\t%0, %0, %2", 2,
    VAR_1);
    }

  return "";
}
