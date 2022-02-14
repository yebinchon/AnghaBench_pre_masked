
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cloudabi_mprot_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_0(cloudabi_mprot_t VAR_7, int *VAR_8)
{


 if ((VAR_7 & ~(VAR_0 | VAR_2 |
     VAR_1)) != 0)
  return (VAR_3);

 if ((VAR_7 & (VAR_0 | VAR_2)) ==
     (VAR_0 | VAR_2))
  return (VAR_3);

 *VAR_8 = 0;
 if (VAR_7 & VAR_0)
  *VAR_8 |= VAR_4;
 if (VAR_7 & VAR_2)
  *VAR_8 |= VAR_6;
 if (VAR_7 & VAR_1)
  *VAR_8 |= VAR_5;
 return (0);
}
