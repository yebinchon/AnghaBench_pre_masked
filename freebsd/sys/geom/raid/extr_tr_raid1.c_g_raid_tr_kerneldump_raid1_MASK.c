
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct g_raid_volume {int v_disks_count; struct g_raid_subdisk* v_subdisks; } ;
struct g_raid_tr_object {struct g_raid_volume* tro_volume; } ;
struct g_raid_subdisk {int sd_state; int sd_rebuild_pos; } ;
typedef int off_t ;






 int FUNC_0 (struct g_raid_subdisk*,void*,int ,int ,size_t) ;

__attribute__((used)) static int
FUNC_1(struct g_raid_tr_object *VAR_0,
    void *VAR_1, vm_offset_t VAR_2, off_t VAR_3, size_t VAR_4)
{
 struct g_raid_volume *VAR_5;
 struct g_raid_subdisk *VAR_6;
 int VAR_7, VAR_8, VAR_9;

 VAR_5 = VAR_0->tro_volume;
 VAR_7 = 0;
 VAR_9 = 0;
 for (VAR_8 = 0; VAR_8 < VAR_5->v_disks_count; VAR_8++) {
  VAR_6 = &VAR_5->v_subdisks[VAR_8];
  switch (VAR_6->sd_state) {
  case 131:
   break;
  case 130:





   if (VAR_3 >= VAR_6->sd_rebuild_pos)
    continue;
   break;
  case 128:
  case 129:






   break;
  default:
   continue;
  }
  VAR_7 = FUNC_0(VAR_6,
      VAR_1, VAR_2, VAR_3, VAR_4);
  if (VAR_7 == 0)
   VAR_9++;
 }
 return (VAR_9 > 0 ? 0 : VAR_7);
}
