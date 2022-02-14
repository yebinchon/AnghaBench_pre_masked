
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;

__attribute__((used)) static unsigned int FUNC_0(int VAR_8)
{
 unsigned int VAR_9 = 0;

 if (VAR_8 & VAR_2)
  VAR_9 |= VAR_6;
 if (VAR_8 & VAR_3)
  VAR_9 |= VAR_7;
 if (VAR_8 & VAR_1)
  VAR_9 |= VAR_5;
 if (VAR_8 & VAR_0)
  VAR_9 |= VAR_4;

 return VAR_9;
}
