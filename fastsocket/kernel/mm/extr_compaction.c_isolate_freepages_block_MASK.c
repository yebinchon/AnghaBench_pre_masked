
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {unsigned long zone_start_pfn; unsigned long spanned_pages; } ;
struct page {int lru; } ;
struct list_head {int dummy; } ;
struct compact_control {int dummy; } ;


 unsigned long FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int *,struct list_head*) ;
 unsigned long FUNC_3 (unsigned long,unsigned long) ;
 int VAR_0 ;
 struct page* FUNC_4 (unsigned long) ;
 scalar_t__ FUNC_5 (unsigned long) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct compact_control*,struct page*,int,int) ;

__attribute__((used)) static unsigned long FUNC_8(struct compact_control *VAR_1,
    struct zone *VAR_2,
    unsigned long VAR_3,
    struct list_head *VAR_4)
{
 unsigned long VAR_5, VAR_6;
 int VAR_7 = 0;
 struct page *VAR_8, *VAR_9 = ((void*)0);


 VAR_5 = VAR_2->zone_start_pfn + VAR_2->spanned_pages;







 VAR_6 = FUNC_0(VAR_3 + 1, VAR_0);
 VAR_6 = FUNC_3(VAR_6, VAR_5);


 for (; VAR_3 < VAR_6; VAR_3++) {
  if (FUNC_5(VAR_3))
   break;
 }
 VAR_8 = FUNC_4(VAR_3);


 for (; VAR_3 < VAR_6; VAR_3++, VAR_8++) {
  int VAR_10, VAR_11;
  struct page *VAR_12 = VAR_8;

  if (!FUNC_5(VAR_3))
   continue;

  if (!VAR_9)
   VAR_9 = VAR_12;

  if (!FUNC_1(VAR_12))
   continue;


  VAR_10 = FUNC_6(VAR_12);
  VAR_7 += VAR_10;
  for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
   FUNC_2(&VAR_12->lru, VAR_4);
   VAR_12++;
  }


  if (VAR_10) {
   VAR_3 += VAR_10 - 1;
   VAR_8 += VAR_10 - 1;
  }
 }


 if (VAR_3 == VAR_6)
  FUNC_7(VAR_1, VAR_9, VAR_7, 0);

 return VAR_7;
}
