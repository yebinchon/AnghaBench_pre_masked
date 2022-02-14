
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef size_t u_int ;
struct g_raid_volume {scalar_t__ v_state; size_t v_strip_size; size_t v_disks_count; int * v_subdisks; } ;
struct g_raid_tr_object {struct g_raid_volume* tro_volume; } ;
typedef size_t off_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_0 (size_t,size_t) ;
 int FUNC_1 (int *,char*,int ,size_t,size_t) ;

__attribute__((used)) static int
FUNC_2(struct g_raid_tr_object *VAR_2,
    void *VAR_3, vm_offset_t VAR_4, off_t VAR_5, size_t VAR_6)
{
 struct g_raid_volume *VAR_7;
 char *VAR_8;
 off_t VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 u_int VAR_14, VAR_15;
 int VAR_16;

 VAR_7 = VAR_2->tro_volume;
 if (VAR_7->v_state != VAR_1)
  return (VAR_0);
 VAR_8 = VAR_3;
 VAR_15 = VAR_7->v_strip_size;


 VAR_12 = VAR_5 / VAR_15;

 VAR_10 = VAR_5 % VAR_15;

 VAR_14 = VAR_12 % VAR_7->v_disks_count;

 VAR_9 = (VAR_12 / VAR_7->v_disks_count) * VAR_15;

 VAR_13 = VAR_6;

 do {
  VAR_11 = FUNC_0(VAR_15 - VAR_10, VAR_13);
  VAR_16 = FUNC_1(&VAR_7->v_subdisks[VAR_14],
      VAR_8, 0, VAR_9 + VAR_10, VAR_11);
  if (VAR_16 != 0)
   return (VAR_16);
  if (++VAR_14 >= VAR_7->v_disks_count) {
   VAR_14 = 0;
   VAR_9 += VAR_15;
  }
  VAR_13 -= VAR_11;
  VAR_8 += VAR_11;
  VAR_10 = 0;
 } while (VAR_13 > 0);
 return (0);
}
