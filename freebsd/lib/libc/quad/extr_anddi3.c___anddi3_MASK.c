
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union uu {void* q; int * ul; } ;
typedef void* quad_t ;



quad_t
FUNC_0(quad_t VAR_0, quad_t VAR_1)
{
 union uu VAR_2, VAR_3;

 VAR_2.q = VAR_0;
 VAR_3.q = VAR_1;
 VAR_2.ul[0] &= VAR_3.ul[0];
 VAR_2.ul[1] &= VAR_3.ul[1];
 return (VAR_2.q);
}
