
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_flags; int if_drv_flags; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 unsigned short VAR_7 ;
 unsigned short VAR_8 ;
 unsigned short VAR_9 ;
 short VAR_10 ;
 short VAR_11 ;
 short VAR_12 ;
 short VAR_13 ;
 short VAR_14 ;
 short VAR_15 ;
 short VAR_16 ;
 short VAR_17 ;
 short VAR_18 ;
 short VAR_19 ;

void
FUNC_0(struct ifnet *VAR_20, short *VAR_21)
{
 unsigned short VAR_22;

 VAR_22 = (VAR_20->if_flags | VAR_20->if_drv_flags) & 0xffff;
 *VAR_21 = 0;
 if (VAR_22 & VAR_9)
  *VAR_21 |= VAR_19;
 if (VAR_22 & VAR_1)
  *VAR_21 |= VAR_11;
 if (VAR_22 & VAR_2)
  *VAR_21 |= VAR_12;
 if (VAR_22 & VAR_4)
  *VAR_21 |= VAR_13;
 if (VAR_22 & VAR_7)
  *VAR_21 |= VAR_16;
 if (VAR_22 & VAR_3)
  *VAR_21 |= VAR_18;
 if (VAR_22 & VAR_6)
  *VAR_21 |= VAR_15;
 if (VAR_22 & VAR_8)
  *VAR_21 |= VAR_17;
 if (VAR_22 & VAR_0)
  *VAR_21 |= VAR_10;
 if (VAR_22 & VAR_5)
  *VAR_21 |= VAR_14;
}
