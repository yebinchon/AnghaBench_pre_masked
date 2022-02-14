
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(int VAR_2, int VAR_3)
{

 switch (VAR_3) {
 case 128:
 case 192:
  if (VAR_2 == VAR_0)
   return (VAR_1);
  break;
 case 256:
  break;
 case 512:
  if (VAR_2 != VAR_0)
   return (VAR_1);
  break;
 default:
  return (VAR_1);
 }
 return (0);
}
