
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;

int FUNC_2(unsigned int VAR_13)
{
 unsigned int VAR_14 = FUNC_1(VAR_13);
 unsigned int VAR_15 = FUNC_0(VAR_13);
 if (VAR_15 == VAR_6)
  return VAR_12;

 if (VAR_15 == VAR_5 || VAR_15 == VAR_4)
  return VAR_9;
 if ((VAR_14 & 0x30) == VAR_1)
  return VAR_9;
 if ((VAR_14 & 0x30) == VAR_3)
  return VAR_7;
 if (VAR_14 == VAR_2)
  return VAR_11;
 if (VAR_14 == VAR_0)
  return VAR_8;
 return VAR_10;
}
