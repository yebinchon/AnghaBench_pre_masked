
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(caddr_t VAR_6)
{
 u_int VAR_7;

 VAR_7 = *(u_int *)VAR_6;
 if (VAR_7 & ~(VAR_2 | VAR_5 | VAR_4 | VAR_3))
  return (VAR_0);
 if ((VAR_7 & (VAR_2 | VAR_5)) == (VAR_2 | VAR_5))
  return (VAR_0);
 if ((VAR_7 & (VAR_2 | VAR_5)) == 0 && ((VAR_7 & VAR_3) > 0 ||
     (VAR_7 & VAR_4) != 0))
  return (VAR_0);
 if (VAR_7 & VAR_5)
  return (VAR_1);
 VAR_7 &= ~(VAR_2 | VAR_5);

 return (FUNC_0(VAR_7));
}
