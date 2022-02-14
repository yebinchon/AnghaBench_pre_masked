
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct zone_reclaim_stat {unsigned long* recent_scanned; int* recent_rotated; } ;
struct scan_control {unsigned long swappiness; } ;
struct mem_cgroup_zone {TYPE_1__* zone; } ;
struct TYPE_3__ {int lru_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct zone_reclaim_stat* FUNC_0 (struct mem_cgroup_zone*) ;
 scalar_t__ FUNC_1 (struct scan_control*) ;
 unsigned long FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;
 unsigned long FUNC_6 (struct mem_cgroup_zone*,int ) ;
 unsigned long FUNC_7 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_8(struct mem_cgroup_zone *VAR_5, struct scan_control *VAR_6,
     unsigned long *VAR_7)
{
 unsigned long VAR_8, VAR_9, VAR_10;
 unsigned long VAR_11, VAR_12;
 unsigned long VAR_13, VAR_14;
 struct zone_reclaim_stat *VAR_15 = FUNC_0(VAR_5);

 VAR_8 = FUNC_6(VAR_5, VAR_0) +
  FUNC_6(VAR_5, VAR_2);
 VAR_9 = FUNC_6(VAR_5, VAR_1) +
  FUNC_6(VAR_5, VAR_3);

 if (FUNC_1(VAR_6)) {
  VAR_10 = FUNC_7(VAR_5->zone, VAR_4);


  if (FUNC_5(VAR_9 + VAR_10 <= FUNC_2(VAR_5->zone))) {
   VAR_7[0] = 100;
   VAR_7[1] = 0;
   return;
  }
 }
 if (FUNC_5(VAR_15->recent_scanned[0] > VAR_8 / 4)) {
  FUNC_3(&VAR_5->zone->lru_lock);
  VAR_15->recent_scanned[0] /= 2;
  VAR_15->recent_rotated[0] /= 2;
  FUNC_4(&VAR_5->zone->lru_lock);
 }

 if (FUNC_5(VAR_15->recent_scanned[1] > VAR_9 / 4)) {
  FUNC_3(&VAR_5->zone->lru_lock);
  VAR_15->recent_scanned[1] /= 2;
  VAR_15->recent_rotated[1] /= 2;
  FUNC_4(&VAR_5->zone->lru_lock);
 }





 VAR_11 = VAR_6->swappiness;
 VAR_12 = 200 - VAR_6->swappiness;






 VAR_13 = VAR_11 * (VAR_15->recent_scanned[0] + 1);
 VAR_13 /= VAR_15->recent_rotated[0] + 1;

 VAR_14 = VAR_12 * (VAR_15->recent_scanned[1] + 1);
 VAR_14 /= VAR_15->recent_rotated[1] + 1;


 VAR_7[0] = 100 * VAR_13 / (VAR_13 + VAR_14 + 1);
 VAR_7[1] = 100 - VAR_7[0];
}
