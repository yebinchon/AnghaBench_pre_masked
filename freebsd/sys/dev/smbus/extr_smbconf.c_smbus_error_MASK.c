
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

int
FUNC_0(int VAR_14)
{
 int VAR_15 = 0;

 if (VAR_14 == VAR_11)
  return (0);

 if (VAR_14 & (VAR_12))
  VAR_15 = VAR_3;
 else if (VAR_14 & (VAR_10))
  VAR_15 = VAR_4;
 else if (VAR_14 & (VAR_13))
  VAR_15 = VAR_5;
 else if (VAR_14 & (VAR_8))
  VAR_15 = VAR_0;
 else if (VAR_14 & (VAR_6 | VAR_7 | VAR_9))
  VAR_15 = VAR_2;
 else
  VAR_15 = VAR_1;

 return (VAR_15);
}
