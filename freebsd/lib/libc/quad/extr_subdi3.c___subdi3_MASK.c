
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union uu {void* q; scalar_t__* ul; } ;
typedef void* quad_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;

quad_t
FUNC_0(quad_t VAR_2, quad_t VAR_3)
{
 union uu VAR_4, VAR_5, VAR_6;

 VAR_4.q = VAR_2;
 VAR_5.q = VAR_3;
 VAR_6.ul[VAR_1] = VAR_4.ul[VAR_1] - VAR_5.ul[VAR_1];
 VAR_6.ul[VAR_0] = VAR_4.ul[VAR_0] - VAR_5.ul[VAR_0] - (VAR_6.ul[VAR_1] > VAR_4.ul[VAR_1]);
 return (VAR_6.q);
}
