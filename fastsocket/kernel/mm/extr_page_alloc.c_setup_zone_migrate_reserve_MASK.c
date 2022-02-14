
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {unsigned long zone_start_pfn; unsigned long spanned_pages; int nr_migrate_reserve_block; } ;
struct page {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (struct page*) ;
 unsigned long FUNC_1 (struct page*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct zone*) ;
 int FUNC_4 (struct zone*,struct page*,unsigned long) ;
 scalar_t__ FUNC_5 (struct page*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct page* FUNC_6 (unsigned long) ;
 int FUNC_7 (unsigned long) ;
 int FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (struct page*,unsigned long) ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ FUNC_11 (struct zone*) ;

__attribute__((used)) static void FUNC_12(struct zone *VAR_4)
{
 unsigned long VAR_5, VAR_6, VAR_7;
 struct page *VAR_8;
 unsigned long VAR_9;
 int VAR_10;
 bool VAR_11 = 0;
 int VAR_12;
 int VAR_13;

retry:

 VAR_5 = VAR_4->zone_start_pfn;
 VAR_7 = VAR_5 + VAR_4->spanned_pages;
 VAR_10 = FUNC_8(FUNC_3(VAR_4), VAR_2) >>
       VAR_3;
 VAR_10 = VAR_13 = FUNC_2(2, VAR_10);
 VAR_12 = VAR_4->nr_migrate_reserve_block;


 if (VAR_10 == VAR_12)
  return;

 for (VAR_6 = VAR_5; VAR_6 < VAR_7; VAR_6 += VAR_2) {
  if (!FUNC_7(VAR_6))
   continue;
  VAR_8 = FUNC_6(VAR_6);


  if (FUNC_5(VAR_8) != FUNC_11(VAR_4))
   continue;


  if (FUNC_0(VAR_8))
   continue;

  VAR_9 = FUNC_1(VAR_8);


  if (VAR_10 > 0 && VAR_9 == VAR_1) {
   VAR_10--;
   continue;
  }


  if (VAR_10 > 0) {
   if (VAR_11 || VAR_9 == VAR_0) {
    FUNC_9(VAR_8, VAR_1);
    FUNC_4(VAR_4, VAR_8, VAR_1);
    VAR_10--;
    continue;
   }
  } else if (!VAR_12 && !VAR_11) {






   break;
  }





  if (VAR_9 == VAR_1) {
   FUNC_9(VAR_8, VAR_0);
   FUNC_4(VAR_4, VAR_8, VAR_0);
  }
 }
 if (FUNC_10(VAR_10) && !VAR_11) {
  VAR_11 = 1;
  goto retry;
 }

 VAR_4->nr_migrate_reserve_block = VAR_13;
}
