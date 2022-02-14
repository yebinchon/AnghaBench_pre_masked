
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_quad_t ;
typedef double quad_t ;


 double VAR_0 ;
 double VAR_1 ;

quad_t
FUNC_0(double VAR_2)
{
 if (VAR_2 < 0)
  if (VAR_2 <= VAR_1)
   return (VAR_1);
  else
   return ((quad_t)-(u_quad_t)-VAR_2);
 else
  if (VAR_2 >= VAR_0)
   return (VAR_0);
  else
   return ((quad_t)(u_quad_t)VAR_2);
}
