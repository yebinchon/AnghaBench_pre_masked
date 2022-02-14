
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_attrib {int dummy; } ;
struct mem_region {scalar_t__ lo; scalar_t__ hi; int enabled_p; struct mem_region* next; struct mem_attrib attrib; scalar_t__ number; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ VAR_0 ;
 struct mem_region* VAR_1 ;
 int FUNC_0 (char*) ;
 struct mem_region* FUNC_1 (int) ;

__attribute__((used)) static struct mem_region *
FUNC_2 (CORE_ADDR VAR_2, CORE_ADDR VAR_3,
     const struct mem_attrib *VAR_4)
{
  struct mem_region *VAR_5, *VAR_6;


  if (VAR_2 >= VAR_3 && VAR_3 != 0)
    {
      FUNC_0 ("invalid memory region: low >= high\n");
      return ((void*)0);
    }

  VAR_5 = VAR_1;
  while (VAR_5)
    {

      if ((VAR_2 >= VAR_5->lo && (VAR_2 < VAR_5->hi || VAR_5->hi == 0))
   || (VAR_3 > VAR_5->lo && (VAR_3 <= VAR_5->hi || VAR_5->hi == 0))
   || (VAR_2 <= VAR_5->lo && (VAR_3 >= VAR_5->hi || VAR_3 == 0)))
 {
   FUNC_0 ("overlapping memory region\n");
   return ((void*)0);
 }
      VAR_5 = VAR_5->next;
    }

  VAR_6 = FUNC_1 (sizeof (struct mem_region));
  VAR_6->lo = VAR_2;
  VAR_6->hi = VAR_3;
  VAR_6->number = ++VAR_0;
  VAR_6->enabled_p = 1;
  VAR_6->attrib = *VAR_4;


  VAR_6->next = VAR_1;
  VAR_1 = VAR_6;

  return VAR_6;
}
