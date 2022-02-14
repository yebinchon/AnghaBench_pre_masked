
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone_reclaim_stat {int * recent_rotated; int * recent_scanned; } ;
struct zone {struct zone_reclaim_stat reclaim_stat; } ;
struct page {int dummy; } ;


 struct zone_reclaim_stat* FUNC_0 (struct page*) ;

__attribute__((used)) static void FUNC_1(struct zone *VAR_0, struct page *VAR_1,
         int VAR_2, int VAR_3)
{
 struct zone_reclaim_stat *VAR_4 = &VAR_0->reclaim_stat;
 struct zone_reclaim_stat *VAR_5;

 VAR_5 = FUNC_0(VAR_1);

 VAR_4->recent_scanned[VAR_2]++;
 if (VAR_3)
  VAR_4->recent_rotated[VAR_2]++;

 if (!VAR_5)
  return;

 VAR_5->recent_scanned[VAR_2]++;
 if (VAR_3)
  VAR_5->recent_rotated[VAR_2]++;
}
