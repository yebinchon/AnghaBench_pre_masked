
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {unsigned long zone_start_pfn; unsigned long spanned_pages; } ;
struct page {int dummy; } ;


 int FUNC_0 (struct zone*,struct page*,struct page*,int) ;
 unsigned long FUNC_1 (struct page*) ;
 int VAR_0 ;
 struct page* FUNC_2 (unsigned long) ;

__attribute__((used)) static int FUNC_3(struct zone *VAR_1, struct page *VAR_2,
    int VAR_3)
{
 unsigned long VAR_4, VAR_5;
 struct page *VAR_6, *VAR_7;

 VAR_4 = FUNC_1(VAR_2);
 VAR_4 = VAR_4 & ~(VAR_0-1);
 VAR_6 = FUNC_2(VAR_4);
 VAR_7 = VAR_6 + VAR_0 - 1;
 VAR_5 = VAR_4 + VAR_0 - 1;


 if (VAR_4 < VAR_1->zone_start_pfn)
  VAR_6 = VAR_2;
 if (VAR_5 >= VAR_1->zone_start_pfn + VAR_1->spanned_pages)
  return 0;

 return FUNC_0(VAR_1, VAR_6, VAR_7, VAR_3);
}
