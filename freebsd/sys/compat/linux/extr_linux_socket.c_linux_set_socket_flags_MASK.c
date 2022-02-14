
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_0(int VAR_5, int *VAR_6)
{

 if (VAR_5 & ~(VAR_1 | VAR_2))
  return (VAR_0);
 if (VAR_5 & VAR_2)
  *VAR_6 |= VAR_4;
 if (VAR_5 & VAR_1)
  *VAR_6 |= VAR_3;
 return (0);
}
