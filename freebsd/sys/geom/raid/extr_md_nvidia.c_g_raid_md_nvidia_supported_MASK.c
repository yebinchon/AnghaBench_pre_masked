
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







__attribute__((used)) static int
FUNC_0(int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{

 switch (VAR_3) {
 case 132:
  if (VAR_5 < 1)
   return (0);
  if (!VAR_6 && (VAR_5 < 2 || VAR_5 > 6))
   return (0);
  break;
 case 131:
  if (VAR_5 < 1)
   return (0);
  if (!VAR_6 && (VAR_5 != 2))
   return (0);
  break;
 case 130:
  if (VAR_5 < 2)
   return (0);
  if (VAR_5 % 2 != 0)
   return (0);
  if (!VAR_6 && (VAR_5 < 4))
   return (0);
  break;
 case 128:
  if (VAR_5 != 1)
   return (0);
  break;
 case 133:
  if (VAR_5 < 2)
   return (0);
  break;
 case 129:
  if (VAR_5 < 3)
   return (0);
  if (VAR_4 != VAR_1 &&
      VAR_4 != VAR_2)
   return (0);
  break;
 default:
  return (0);
 }
 if (VAR_3 != 129 && VAR_4 != VAR_0)
  return (0);
 return (1);
}
