
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union uu {int* ul; int q; } ;
typedef int quad_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;

quad_t
FUNC_0(quad_t VAR_2)
{
 union uu VAR_3, VAR_4;

 VAR_3.q = VAR_2;
 VAR_4.ul[VAR_1] = -VAR_3.ul[VAR_1];
 VAR_4.ul[VAR_0] = -VAR_3.ul[VAR_0] - (VAR_4.ul[VAR_1] > 0);
 return (VAR_4.q);
}
