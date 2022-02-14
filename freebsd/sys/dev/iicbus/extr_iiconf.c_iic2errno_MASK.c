
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;







 int VAR_9 ;





int
FUNC_0(int VAR_10)
{
 switch (VAR_10) {
 case 128: return (0);
 case 137: return (VAR_1);
 case 136: return (VAR_2);
 case 130: return (VAR_7);
 case 138: return (VAR_8);
 case 131: return (VAR_6);
 case 129: return (VAR_2);
 case 133: return (VAR_5);
 case 134: return (VAR_4);
 case 135: return (VAR_0);
 case 132: return (VAR_3);
 default:
  if ((VAR_10 & VAR_9) == 0)
   return (VAR_2);
  if ((VAR_10 & 0xFFFF0000) != 0)
   return (VAR_10);
  return (VAR_10 & ~VAR_9);
 }
}
