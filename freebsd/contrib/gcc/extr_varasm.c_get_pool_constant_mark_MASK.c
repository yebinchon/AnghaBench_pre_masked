
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct constant_descriptor_rtx {scalar_t__ mark; int constant; } ;
typedef int rtx ;


 struct constant_descriptor_rtx* FUNC_0 (int ) ;

rtx
FUNC_1 (rtx VAR_0, bool *VAR_1)
{
  struct constant_descriptor_rtx *VAR_2;

  VAR_2 = FUNC_0 (VAR_0);
  *VAR_1 = (VAR_2->mark != 0);
  return VAR_2->constant;
}
