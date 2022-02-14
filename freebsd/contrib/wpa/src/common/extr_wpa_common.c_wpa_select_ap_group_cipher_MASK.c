
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_0(int VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8 = 0;


 if (VAR_5 & 1)
  VAR_8 |= VAR_6;
 if (VAR_5 & 2)
  VAR_8 |= VAR_7;

 if (VAR_8 & VAR_4)
  return VAR_4;
 if ((VAR_8 & (VAR_0 | VAR_2)) == VAR_2)
  return VAR_2;
 if ((VAR_8 & (VAR_3 | VAR_0 |
    VAR_2)) == VAR_3)
  return VAR_3;
 if ((VAR_8 & (VAR_1 | VAR_0 |
    VAR_2)) == VAR_1)
  return VAR_1;
 return VAR_0;
}
