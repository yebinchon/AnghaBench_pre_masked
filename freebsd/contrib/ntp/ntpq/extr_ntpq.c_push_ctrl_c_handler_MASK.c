
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Ctrl_C_Handler ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;
 size_t VAR_4 ;

int
FUNC_0(
 Ctrl_C_Handler VAR_5
 )
{
 size_t VAR_6 = VAR_4;
 if (VAR_5 && (VAR_6 < VAR_0)) {
  VAR_3[VAR_6] = VAR_5;
  VAR_4 = VAR_6 + 1;
  return VAR_2;
 }
 return VAR_1;
}
