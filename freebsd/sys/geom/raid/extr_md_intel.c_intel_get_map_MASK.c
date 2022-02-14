
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_raid_vol {struct intel_raid_map* map; scalar_t__ migr_state; } ;
struct intel_raid_map {size_t total_disks; int * disk_idx; } ;



__attribute__((used)) static struct intel_raid_map *
FUNC_0(struct intel_raid_vol *VAR_0, int VAR_1)
{
 struct intel_raid_map *VAR_2;

 if (VAR_1 > (VAR_0->migr_state ? 1 : 0))
  return (((void*)0));
 VAR_2 = &VAR_0->map[0];
 for (; VAR_1 > 0; VAR_1--) {
  VAR_2 = (struct intel_raid_map *)
      &VAR_2->disk_idx[VAR_2->total_disks];
 }
 return ((struct intel_raid_map *)VAR_2);
}
