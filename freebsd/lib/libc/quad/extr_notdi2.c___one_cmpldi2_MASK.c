
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union uu {int q; int * ul; } ;
typedef int quad_t ;



quad_t
FUNC_0(quad_t VAR_0)
{
 union uu VAR_1;

 VAR_1.q = VAR_0;
 VAR_1.ul[0] = ~VAR_1.ul[0];
 VAR_1.ul[1] = ~VAR_1.ul[1];
 return (VAR_1.q);
}
