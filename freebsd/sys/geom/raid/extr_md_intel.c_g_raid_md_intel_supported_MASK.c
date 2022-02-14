
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;





__attribute__((used)) static int
FUNC_0(int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{

 switch (VAR_2) {
 case 131:
  if (VAR_4 < 1)
   return (0);
  if (!VAR_5 && (VAR_4 < 2 || VAR_4 > 6))
   return (0);
  break;
 case 130:
  if (VAR_4 < 1)
   return (0);
  if (!VAR_5 && (VAR_4 != 2))
   return (0);
  break;
 case 129:
  if (VAR_4 < 2)
   return (0);
  if (!VAR_5 && (VAR_4 != 4))
   return (0);
  break;
 case 128:
  if (VAR_4 < 3)
   return (0);
  if (!VAR_5 && VAR_4 > 6)
   return (0);
  if (VAR_3 != VAR_1)
   return (0);
  break;
 default:
  return (0);
 }
 if (VAR_2 != 128 && VAR_3 != VAR_0)
  return (0);
 return (1);
}
