
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;

unsigned long FUNC_0(unsigned long VAR_6, unsigned long VAR_7,
     unsigned long VAR_8)
{
 if (VAR_8 & VAR_2)
  VAR_8 |= VAR_0;
 VAR_8 |= VAR_5;

 VAR_6 |= VAR_7 & (VAR_4|VAR_0) & VAR_8;
 VAR_6 &= VAR_7 | ~VAR_1;


 if (VAR_6 & (VAR_0 & ~VAR_3))
  VAR_6 &= ~VAR_3;


 if (VAR_6 & VAR_2)
  VAR_6 &= ~(VAR_0 & ~VAR_2);

 return VAR_6;
}
