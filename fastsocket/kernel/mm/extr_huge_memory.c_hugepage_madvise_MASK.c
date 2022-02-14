
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;


 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;

int FUNC_0(unsigned long *VAR_13, int VAR_14)
{
 switch (VAR_14) {
 case 129:



  if (*VAR_13 & (VAR_2 |
     VAR_12 | VAR_6 |
     VAR_9 | VAR_5 | VAR_1 |
     VAR_10 | VAR_3 | VAR_4 |
     VAR_7 | VAR_11))
   return -VAR_0;
  *VAR_13 &= ~VAR_8;
  *VAR_13 |= VAR_2;
  break;
 case 128:



  if (*VAR_13 & (VAR_8 |
     VAR_12 | VAR_6 |
     VAR_9 | VAR_5 | VAR_1 |
     VAR_10 | VAR_3 | VAR_4 |
     VAR_7 | VAR_11))
   return -VAR_0;
  *VAR_13 &= ~VAR_2;
  *VAR_13 |= VAR_8;
  break;
 }

 return 0;
}
