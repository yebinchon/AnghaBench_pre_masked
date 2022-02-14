
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union uu {scalar_t__* sl; scalar_t__* ul; void* q; } ;
typedef void* quad_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;

int
FUNC_0(quad_t VAR_2, quad_t VAR_3)
{
 union uu VAR_4, VAR_5;

 VAR_4.q = VAR_2;
 VAR_5.q = VAR_3;
 return (VAR_4.sl[VAR_0] < VAR_5.sl[VAR_0] ? 0 : VAR_4.sl[VAR_0] > VAR_5.sl[VAR_0] ? 2 :
     VAR_4.ul[VAR_1] < VAR_5.ul[VAR_1] ? 0 : VAR_4.ul[VAR_1] > VAR_5.ul[VAR_1] ? 2 : 1);
}
