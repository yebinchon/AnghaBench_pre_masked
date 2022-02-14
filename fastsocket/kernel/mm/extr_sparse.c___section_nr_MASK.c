
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_section {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 struct mem_section* FUNC_0 (unsigned long) ;

int FUNC_1(struct mem_section* VAR_2)
{
 unsigned long VAR_3;
 struct mem_section* VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_4 = FUNC_0(VAR_3 * VAR_1);
  if (!VAR_4)
   continue;

  if ((VAR_2 >= VAR_4) && (VAR_2 < (VAR_4 + VAR_1)))
       break;
 }

 return (VAR_3 * VAR_1) + (VAR_2 - VAR_4);
}
