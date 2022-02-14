
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_ref_group {struct mem_ref* refs; struct mem_ref_group* next; } ;
struct mem_ref {int issue_prefetch_p; unsigned int prefetch_mod; struct mem_ref* next; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,char*,unsigned int) ;
 int FUNC_1 (struct mem_ref*) ;

__attribute__((used)) static bool
FUNC_2 (struct mem_ref_group *VAR_4, unsigned VAR_5,
       unsigned VAR_6)
{
  unsigned VAR_7, VAR_8;
  struct mem_ref *VAR_9;
  bool VAR_10 = 0;

  VAR_7 = (VAR_0 * VAR_5) / VAR_6;
  if (VAR_7 > (unsigned) VAR_0)
    VAR_7 = VAR_0;

  if (VAR_2 && (VAR_3 & VAR_1))
    FUNC_0 (VAR_2, "Max prefetches to issue: %d.\n", VAR_7);

  if (!VAR_7)
    return 0;






  for (; VAR_4; VAR_4 = VAR_4->next)
    for (VAR_9 = VAR_4->refs; VAR_9; VAR_9 = VAR_9->next)
      {
 if (!FUNC_1 (VAR_9))
   continue;

 VAR_9->issue_prefetch_p = 1;



 VAR_8 = ((VAR_5 + VAR_9->prefetch_mod - 1)
   / VAR_9->prefetch_mod);
 if (VAR_7 <= VAR_8)
   return 1;

 VAR_7 -= VAR_8;
 VAR_10 = 1;
      }

  return VAR_10;
}
