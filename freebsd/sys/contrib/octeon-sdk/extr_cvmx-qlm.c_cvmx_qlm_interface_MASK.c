
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;

int FUNC_1(int VAR_3)
{
 if (FUNC_0(VAR_0)) {
  return (VAR_3 == 0) ? 2 : 0;
 } else if (FUNC_0(VAR_1) || FUNC_0(VAR_2)) {
  return 2 - VAR_3;
 } else {

  switch(VAR_3) {
  case 1:
   return 0;
  default:
   return VAR_3;
  }
 }
}
