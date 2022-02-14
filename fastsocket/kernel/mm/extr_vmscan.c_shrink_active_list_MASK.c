
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone_reclaim_stat {unsigned long* recent_scanned; unsigned long* recent_rotated; } ;
struct zone {unsigned long pages_scanned; int lru_lock; } ;
struct scan_control {int order; int target_mem_cgroup; } ;
struct page {int lru; } ;
struct mem_cgroup_zone {struct zone* zone; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 unsigned long VAR_9 ;
 int FUNC_2 (int ,struct zone*,unsigned long) ;
 int FUNC_3 (struct zone*,scalar_t__,unsigned long) ;
 int FUNC_4 () ;
 struct zone_reclaim_stat* FUNC_5 (struct mem_cgroup_zone*) ;
 scalar_t__ FUNC_6 (struct scan_control*) ;
 scalar_t__ FUNC_7 (struct page*) ;
 unsigned long FUNC_8 (unsigned long,struct mem_cgroup_zone*,int *,unsigned long*,int,int ,int,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 () ;
 struct page* FUNC_13 (int *) ;
 int FUNC_14 (struct zone*,int *,scalar_t__) ;
 int FUNC_15 (struct page*,int *) ;
 scalar_t__ FUNC_16 (struct page*) ;
 scalar_t__ FUNC_17 (struct page*,int ,int ,unsigned long*) ;
 int FUNC_18 (struct page*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (unsigned long,int,int) ;
 scalar_t__ FUNC_22 (int) ;

__attribute__((used)) static void FUNC_23(unsigned long VAR_13,
          struct mem_cgroup_zone *VAR_14,
          struct scan_control *VAR_15,
          int VAR_16, int VAR_17)
{
 unsigned long VAR_18;
 unsigned long VAR_19;
 unsigned long VAR_20;
 FUNC_1(VAR_11);
 FUNC_1(VAR_10);
 FUNC_1(VAR_12);
 struct page *VAR_21;
 struct zone_reclaim_stat *VAR_22 = FUNC_5(VAR_14);
 unsigned long VAR_23 = 0;
 int VAR_24 = 0;
 struct zone *VAR_25 = VAR_14->zone;

 if (!VAR_0)
  VAR_24 = VAR_15->order;

 FUNC_12();
 FUNC_19(&VAR_25->lru_lock);

 VAR_18 = FUNC_8(VAR_13, VAR_14, &VAR_11,
     &VAR_19, VAR_24,
     VAR_1, 1, VAR_17);

 if (FUNC_6(VAR_15))
  VAR_25->pages_scanned += VAR_19;

 VAR_22->recent_scanned[VAR_17] += VAR_18;

 FUNC_2(VAR_8, VAR_25, VAR_19);
 if (VAR_17)
  FUNC_3(VAR_25, VAR_6, -VAR_18);
 else
  FUNC_3(VAR_25, VAR_5, -VAR_18);
 FUNC_3(VAR_25, VAR_7 + VAR_17, VAR_18);
 FUNC_20(&VAR_25->lru_lock);

 while (!FUNC_11(&VAR_11)) {
  FUNC_4();
  VAR_21 = FUNC_13(&VAR_11);
  FUNC_10(&VAR_21->lru);

  if (FUNC_22(!FUNC_15(VAR_21, ((void*)0)))) {
   FUNC_18(VAR_21);
   continue;
  }

  if (FUNC_17(VAR_21, 0, VAR_15->target_mem_cgroup,
        &VAR_20)) {
   VAR_23 += FUNC_7(VAR_21);
   if ((VAR_20 & VAR_9) && FUNC_16(VAR_21)) {
    FUNC_9(&VAR_21->lru, &VAR_10);
    continue;
   }
  }

  FUNC_0(VAR_21);
  FUNC_9(&VAR_21->lru, &VAR_12);
 }




 FUNC_19(&VAR_25->lru_lock);






 VAR_22->recent_rotated[VAR_17] += VAR_23;

 FUNC_14(VAR_25, &VAR_10,
      VAR_2 + VAR_17 * VAR_4);
 FUNC_14(VAR_25, &VAR_12,
      VAR_3 + VAR_17 * VAR_4);
 FUNC_3(VAR_25, VAR_7 + VAR_17, -VAR_18);
 FUNC_20(&VAR_25->lru_lock);
 FUNC_21(VAR_19, VAR_17, VAR_16);
}
