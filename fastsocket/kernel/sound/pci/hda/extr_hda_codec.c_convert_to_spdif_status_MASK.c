
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
 int VAR_10 ;

__attribute__((used)) static unsigned int FUNC_0(unsigned short VAR_11)
{
 unsigned int VAR_12 = 0;

 if (VAR_11 & VAR_3)
  VAR_12 |= VAR_7;
 if (VAR_11 & VAR_4)
  VAR_12 |= VAR_8;
 if (VAR_12 & VAR_8) {
  if (VAR_11 & VAR_1)
   VAR_12 |= VAR_9;
 } else {
  if (VAR_11 & VAR_1)
   VAR_12 |= VAR_5;
  if (!(VAR_11 & VAR_0))
   VAR_12 |= VAR_6;
  if (VAR_11 & VAR_2)
   VAR_12 |= (VAR_10 << 8);
  VAR_12 |= VAR_11 & (0x7f << 8);
 }
 return VAR_12;
}
