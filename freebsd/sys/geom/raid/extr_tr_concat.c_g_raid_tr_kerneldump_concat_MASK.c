
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct g_raid_volume {scalar_t__ v_state; int v_disks_count; struct g_raid_subdisk* v_subdisks; } ;
struct g_raid_tr_object {struct g_raid_volume* tro_volume; } ;
struct g_raid_subdisk {scalar_t__ sd_size; } ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (struct g_raid_subdisk*,char*,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_3(struct g_raid_tr_object *VAR_2,
    void *VAR_3, vm_offset_t VAR_4, off_t VAR_5, size_t VAR_6)
{
 struct g_raid_volume *VAR_7;
 struct g_raid_subdisk *VAR_8;
 char *VAR_9;
 off_t VAR_10, VAR_11, VAR_12;
 int VAR_13, VAR_14;

 VAR_7 = VAR_2->tro_volume;
 if (VAR_7->v_state != VAR_1)
  return (VAR_0);

 VAR_10 = VAR_5;
 VAR_12 = VAR_6;
 VAR_9 = VAR_3;
 VAR_14 = 0;
 while (VAR_14 < VAR_7->v_disks_count &&
     VAR_10 >= VAR_7->v_subdisks[VAR_14].sd_size) {
  VAR_10 -= VAR_7->v_subdisks[VAR_14].sd_size;
  VAR_14++;
 }
 FUNC_0(VAR_14 < VAR_7->v_disks_count,
     ("Request starts after volume end (%ju)", VAR_5));
 do {
  VAR_8 = &VAR_7->v_subdisks[VAR_14];
  VAR_11 = FUNC_1(VAR_8->sd_size - VAR_10, VAR_12);
  VAR_13 = FUNC_2(&VAR_7->v_subdisks[VAR_14],
      VAR_9, 0, VAR_10, VAR_11);
  if (VAR_13 != 0)
   return (VAR_13);
  VAR_12 -= VAR_11;
  VAR_9 += VAR_11;
  VAR_10 = 0;
  VAR_14++;
  FUNC_0(VAR_14 < VAR_7->v_disks_count || VAR_12 == 0,
      ("Request ends after volume end (%ju, %zu)",
   VAR_5, VAR_6));
 } while (VAR_12 > 0);
 return (0);
}
