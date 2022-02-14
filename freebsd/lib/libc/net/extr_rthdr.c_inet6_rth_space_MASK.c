
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int socklen_t ;




socklen_t
FUNC_0(int VAR_0, int VAR_1)
{
 switch (VAR_0) {
 case 128:
  if ((VAR_1 >= 0) && (VAR_1 <= 127))
   return (((VAR_1 * 2) + 1) << 3);

 default:
  return (0);
 }
}
