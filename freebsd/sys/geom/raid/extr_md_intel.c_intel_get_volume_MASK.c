
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_raid_vol {scalar_t__ migr_state; } ;
struct intel_raid_map {size_t total_disks; int * disk_idx; } ;
struct intel_raid_conf {size_t total_disks; int * disk; } ;


 struct intel_raid_map* FUNC_0 (struct intel_raid_vol*,int) ;

__attribute__((used)) static struct intel_raid_vol *
FUNC_1(struct intel_raid_conf *VAR_0, int VAR_1)
{
 struct intel_raid_vol *VAR_2;
 struct intel_raid_map *VAR_3;

 if (VAR_1 > 1)
  return (((void*)0));
 VAR_2 = (struct intel_raid_vol *)&VAR_0->disk[VAR_0->total_disks];
 for (; VAR_1 > 0; VAR_1--) {
  VAR_3 = FUNC_0(VAR_2, VAR_2->migr_state ? 1 : 0);
  VAR_2 = (struct intel_raid_vol *)
      &VAR_3->disk_idx[VAR_3->total_disks];
 }
 return (VAR_2);
}
