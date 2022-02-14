
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union uu {scalar_t__* ul; int uq; } ;
typedef int u_quad_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;

double
FUNC_0(u_quad_t VAR_3)
{
 double VAR_4;
 union uu VAR_5;

 VAR_5.uq = VAR_3;
 VAR_4 = (double)VAR_5.ul[VAR_0] * ((1 << (VAR_2 - 2)) * 4.0);
 VAR_4 += VAR_5.ul[VAR_1];
 return (VAR_4);
}
