
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static unsigned short FUNC_0(unsigned int VAR_14)
{
 unsigned short VAR_15 = 0;

 if (VAR_14 & VAR_9)
  VAR_15 |= VAR_4;
 if (VAR_14 & VAR_8)
  VAR_15 |= VAR_3;
 if (VAR_14 & VAR_9) {
  if ((VAR_14 & VAR_10) ==
      VAR_11)
   VAR_15 |= VAR_1;
 } else {
  if ((VAR_14 & VAR_5) ==
      VAR_6)
   VAR_15 |= VAR_1;
  if (!(VAR_14 & VAR_7))
   VAR_15 |= VAR_0;
  if (VAR_14 & (VAR_13 << 8))
   VAR_15 |= VAR_2;
  VAR_15 |= VAR_14 & (VAR_12 << 8);
 }
 return VAR_15;
}
