
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef size_t u_int ;
struct g_raid_volume {size_t v_strip_size; size_t v_disks_count; struct g_raid_subdisk* v_subdisks; } ;
struct g_raid_tr_object {struct g_raid_volume* tro_volume; } ;
struct g_raid_subdisk {int sd_state; size_t sd_rebuild_pos; } ;
struct bio_queue_head {int dummy; } ;
typedef size_t off_t ;






 size_t FUNC_0 (size_t,size_t) ;
 int VAR_0 ;
 int FUNC_1 (struct g_raid_volume*,size_t,size_t*,size_t*,size_t*) ;
 int FUNC_2 (struct bio_queue_head*) ;
 int FUNC_3 (struct g_raid_subdisk*,char*,int ,size_t,size_t) ;

__attribute__((used)) static int
FUNC_4(struct g_raid_tr_object *VAR_1,
    void *VAR_2, vm_offset_t VAR_3, off_t VAR_4, size_t VAR_5)
{
 struct g_raid_volume *VAR_6;
 struct g_raid_subdisk *VAR_7;
 struct bio_queue_head VAR_8;
 char *VAR_9;
 off_t VAR_10, VAR_11, VAR_12, VAR_13;
 u_int VAR_14, VAR_15;
 int VAR_16, VAR_17;

 VAR_6 = VAR_1->tro_volume;
 VAR_9 = VAR_2;
 VAR_15 = VAR_6->v_strip_size;
 FUNC_1(VAR_6, VAR_4, &VAR_14, &VAR_10, &VAR_11);
 VAR_13 = VAR_5;
 FUNC_2(&VAR_8);
 while (VAR_13 > 0) {
  VAR_12 = FUNC_0(VAR_15 - VAR_11, VAR_13);
  for (VAR_16 = 0; VAR_16 < VAR_0; VAR_16++) {
   VAR_7 = &VAR_6->v_subdisks[VAR_14];
   switch (VAR_7->sd_state) {
   case 131:
   case 128:
   case 129:
    break;
   case 130:
    if (VAR_10 + VAR_11 >= VAR_7->sd_rebuild_pos)
     goto nextdisk;
    break;
   default:
    goto nextdisk;
   }
   VAR_17 = FUNC_3(VAR_7,
       VAR_9, 0, VAR_10 + VAR_11, VAR_12);
   if (VAR_17 != 0)
    return (VAR_17);
nextdisk:
   if (++VAR_14 >= VAR_6->v_disks_count) {
    VAR_14 = 0;
    VAR_10 += VAR_15;
   }
  }
  VAR_13 -= VAR_12;
  VAR_9 += VAR_12;
  VAR_11 = 0;
 }
 return (0);
}
