
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * Ctrl_C_Handler ;


 int VAR_0 ;
 int VAR_1 ;
 int ** VAR_2 ;
 size_t VAR_3 ;

int
FUNC_0(
 Ctrl_C_Handler VAR_4
 )
{
 size_t VAR_5 = VAR_3;
 if (VAR_5) {
  --VAR_5;
  if (VAR_4 == ((void*)0) || VAR_4 == VAR_2[VAR_5]) {
   VAR_3 = VAR_5;
   return VAR_1;
  }
 }
 return VAR_0;
}
