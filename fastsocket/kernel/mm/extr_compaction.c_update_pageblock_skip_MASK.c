
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {unsigned long compact_cached_migrate_pfn; unsigned long compact_cached_free_pfn; } ;
struct page {int dummy; } ;
struct compact_control {int finished_update_free; int finished_update_migrate; struct zone* zone; } ;


 unsigned long FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;

__attribute__((used)) static void FUNC_2(struct compact_control *VAR_0,
   struct page *VAR_1, unsigned long VAR_2,
   bool VAR_3)
{
 struct zone *VAR_4 = VAR_0->zone;
 if (!VAR_1)
  return;

 if (!VAR_2) {
  unsigned long VAR_5 = FUNC_0(VAR_1);
  FUNC_1(VAR_1);


  if (VAR_3) {
   if (!VAR_0->finished_update_migrate &&
       VAR_5 > VAR_4->compact_cached_migrate_pfn)
    VAR_4->compact_cached_migrate_pfn = VAR_5;
  } else {
   if (!VAR_0->finished_update_free &&
       VAR_5 < VAR_4->compact_cached_free_pfn)
    VAR_4->compact_cached_free_pfn = VAR_5;
  }
 }
}
