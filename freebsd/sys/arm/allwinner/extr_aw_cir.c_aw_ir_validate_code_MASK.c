
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;

__attribute__((used)) static int
FUNC_0(unsigned long VAR_3)
{
 unsigned long VAR_4, VAR_5;


 VAR_4 = VAR_3 & VAR_0;
 VAR_5 = (VAR_3 & VAR_1) >> 8;

 if (((VAR_4 ^ VAR_5) & VAR_2) == VAR_2)
  return (0);
 else
  return (1);
}
