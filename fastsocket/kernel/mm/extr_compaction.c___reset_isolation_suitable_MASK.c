
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {unsigned long zone_start_pfn; unsigned long spanned_pages; unsigned long compact_cached_migrate_pfn; unsigned long compact_cached_free_pfn; } ;
struct page {int dummy; } ;


 int FUNC_0 (struct page*) ;
 struct zone* FUNC_1 (struct page*) ;
 scalar_t__ VAR_0 ;
 struct page* FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static void FUNC_4(struct zone *VAR_1)
{
 unsigned long VAR_2 = VAR_1->zone_start_pfn;
 unsigned long VAR_3 = VAR_1->zone_start_pfn + VAR_1->spanned_pages;
 unsigned long VAR_4;

 VAR_1->compact_cached_migrate_pfn = VAR_2;
 VAR_1->compact_cached_free_pfn = VAR_3;


 for (VAR_4 = VAR_2; VAR_4 < VAR_3; VAR_4 += VAR_0) {
  struct page *VAR_5;
  if (!FUNC_3(VAR_4))
   continue;

  VAR_5 = FUNC_2(VAR_4);
  if (VAR_1 != FUNC_1(VAR_5))
   continue;

  FUNC_0(VAR_5);
 }
}
