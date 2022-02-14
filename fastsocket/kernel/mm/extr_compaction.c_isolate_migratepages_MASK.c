
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int lru_lock; int zone_start_pfn; } ;
struct page {int lru; } ;
struct list_head {int dummy; } ;
struct compact_control {unsigned long migrate_pfn; unsigned long free_pfn; int finished_update_migrate; unsigned long nr_migratepages; int sync; struct list_head migratepages; } ;
typedef int isolate_mode_t ;


 int FUNC_0 (unsigned long,unsigned long) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 unsigned long VAR_8 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct page*,int,int ) ;
 int FUNC_7 (struct zone*,int,struct compact_control*) ;
 int FUNC_8 (int *,unsigned long*,int,struct compact_control*) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 () ;
 int FUNC_11 (int ,int) ;
 int VAR_9 ;
 int FUNC_12 (struct zone*,struct page*,int ) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (struct page*) ;
 int FUNC_15 (struct compact_control*,struct page*) ;
 int FUNC_16 (int *,struct list_head*) ;
 unsigned long FUNC_17 (unsigned long,int ) ;
 int FUNC_18 (struct page*) ;
 struct zone* FUNC_19 (struct page*) ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 struct page* FUNC_20 (unsigned long) ;
 int FUNC_21 (unsigned long) ;
 int FUNC_22 (unsigned long) ;
 int FUNC_23 (int *,unsigned long) ;
 int FUNC_24 (int *,unsigned long) ;
 int FUNC_25 (struct zone*) ;
 scalar_t__ FUNC_26 (int ) ;
 int FUNC_27 (struct compact_control*,struct page*,unsigned long,int) ;

__attribute__((used)) static unsigned long FUNC_28(struct zone *VAR_12,
     struct compact_control *VAR_13)
{
 unsigned long VAR_14, VAR_15;
 unsigned long VAR_16 = 0, VAR_17;
 struct list_head *VAR_18 = &VAR_13->migratepages;
 isolate_mode_t VAR_19 = VAR_3|VAR_5;
 unsigned long VAR_20;
 bool VAR_21;
 struct page *VAR_22 = ((void*)0), *VAR_23 = ((void*)0);


 VAR_14 = FUNC_17(VAR_13->migrate_pfn, VAR_12->zone_start_pfn);


 VAR_15 = FUNC_0(VAR_14 + VAR_10, VAR_10);


 if (VAR_15 > VAR_13->free_pfn || !FUNC_21(VAR_14)) {
  VAR_13->migrate_pfn = VAR_15;
  return 0;
 }






 while (FUNC_26(FUNC_25(VAR_12))) {
  FUNC_11(VAR_0, VAR_2/10);

  if (FUNC_13(VAR_9))
   return 0;
 }


 FUNC_10();
 FUNC_23(&VAR_12->lru_lock, VAR_20);
 VAR_21 = 1;
 for (; VAR_14 < VAR_15; VAR_14++) {

  if (!((VAR_14+1) % VAR_8)) {
   FUNC_24(&VAR_12->lru_lock, VAR_20);
   VAR_21 = 0;
  }


  VAR_21 = FUNC_8(&VAR_12->lru_lock, &VAR_20,
        VAR_21, VAR_13);
  if (!VAR_21)
   break;







  if ((VAR_14 & (VAR_6 - 1)) == 0) {
   if (!FUNC_21(VAR_14)) {
    VAR_14 += VAR_6 - 1;
    continue;
   }
  }

  if (!FUNC_22(VAR_14))
   continue;







  VAR_22 = FUNC_20(VAR_14);
  if (FUNC_19(VAR_22) != VAR_12)
   continue;

  if (!VAR_23)
   VAR_23 = VAR_22;


  VAR_17 = VAR_14 >> VAR_11;
  if (!FUNC_15(VAR_13, VAR_22))
   goto next_pageblock;


  if (FUNC_1(VAR_22))
   continue;






  if (!VAR_13->sync && VAR_16 != VAR_17 &&
    FUNC_14(VAR_22) != VAR_7) {
   VAR_14 += VAR_10;
   VAR_14 = FUNC_0(VAR_14, VAR_10) - 1;
   VAR_16 = VAR_17;
   VAR_13->finished_update_migrate = 1;
   continue;
  }

  if (!FUNC_2(VAR_22))
   continue;






  if (FUNC_4(VAR_22)) {
   VAR_14 += (1 << FUNC_9(VAR_22)) - 1;
   continue;
  }

  if (!VAR_13->sync)
   VAR_19 |= VAR_4;


  if (FUNC_6(VAR_22, VAR_19, 0) != 0)
   continue;

  FUNC_5(FUNC_3(VAR_22));


  VAR_13->finished_update_migrate = 1;
  FUNC_12(VAR_12, VAR_22, FUNC_18(VAR_22));
  FUNC_16(&VAR_22->lru, VAR_18);
  VAR_13->nr_migratepages++;


  if (VAR_13->nr_migratepages == VAR_1)
   break;

  continue;

next_pageblock:
  VAR_14 += VAR_10;
  VAR_14 = FUNC_0(VAR_14, VAR_10) - 1;
  VAR_16 = VAR_17;
 }

 FUNC_7(VAR_12, VAR_21, VAR_13);

 if (VAR_21)
  FUNC_24(&VAR_12->lru_lock, VAR_20);


 if (VAR_14 == VAR_15)
  FUNC_27(VAR_13, VAR_23, VAR_13->nr_migratepages, 1);

 VAR_13->migrate_pfn = VAR_14;
 return VAR_13->nr_migratepages;
}
