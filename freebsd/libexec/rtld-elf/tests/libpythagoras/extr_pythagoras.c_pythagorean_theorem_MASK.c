
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (double,int) ;
 double FUNC_1 (scalar_t__) ;

double
FUNC_2(double VAR_2, double VAR_3)
{

 if (VAR_2 <= 0 || VAR_3 <= 0) {
  VAR_1 = VAR_0;
  return (-1.0);
 }
 return (FUNC_1(FUNC_0(VAR_2, 2) + FUNC_0(VAR_3, 2)));
}
