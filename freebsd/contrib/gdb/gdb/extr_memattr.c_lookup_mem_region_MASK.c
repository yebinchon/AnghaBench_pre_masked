
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_region {int enabled_p; scalar_t__ lo; scalar_t__ hi; int attrib; struct mem_region* next; } ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 struct mem_region* VAR_1 ;

struct mem_region *
FUNC_0 (CORE_ADDR VAR_2)
{
  static struct mem_region VAR_3;
  struct mem_region *VAR_4;
  CORE_ADDR VAR_5;
  CORE_ADDR VAR_6;
  VAR_5 = (CORE_ADDR) 0;
  VAR_6 = (CORE_ADDR) ~ 0;

  for (VAR_4 = VAR_1; VAR_4; VAR_4 = VAR_4->next)
    {
      if (VAR_4->enabled_p == 1)
 {
   if (VAR_2 >= VAR_4->lo && (VAR_2 < VAR_4->hi || VAR_4->hi == 0))
     return VAR_4;

   if (VAR_2 >= VAR_4->hi && VAR_5 < VAR_4->hi)
     VAR_5 = VAR_4->hi;

   if (VAR_2 <= VAR_4->lo && VAR_6 > VAR_4->lo)
     VAR_6 = VAR_4->lo;
 }
    }



  VAR_3.lo = VAR_5;
  VAR_3.hi = VAR_6;
  VAR_3.attrib = VAR_0;
  return &VAR_3;
}
