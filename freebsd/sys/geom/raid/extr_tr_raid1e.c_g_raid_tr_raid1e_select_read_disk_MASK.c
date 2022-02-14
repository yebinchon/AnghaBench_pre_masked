
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct g_raid_volume {int v_disks_count; scalar_t__ v_strip_size; struct g_raid_subdisk* v_subdisks; } ;
struct g_raid_subdisk {int sd_pos; int sd_state; scalar_t__ sd_rebuild_pos; int sd_recovery; } ;
typedef scalar_t__ off_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct g_raid_subdisk*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct g_raid_subdisk*) ;




 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int
FUNC_4(struct g_raid_volume *VAR_4,
    int VAR_5, off_t VAR_6, off_t VAR_7, u_int VAR_8)
{
 struct g_raid_subdisk *VAR_9;
 off_t VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14;

 VAR_12 = -1;
 VAR_14 = VAR_2;
 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
  VAR_9 = &VAR_4->v_subdisks[(VAR_5 + VAR_11) % VAR_4->v_disks_count];
  VAR_10 = VAR_6;
  if (VAR_5 + VAR_11 >= VAR_4->v_disks_count)
   VAR_10 += VAR_4->v_strip_size;

  VAR_13 = FUNC_1(VAR_9);
  if ((VAR_8 & (1 << VAR_9->sd_pos)) != 0)
   continue;
  switch (VAR_9->sd_state) {
  case 131:
   break;
  case 129:
   if (VAR_10 + VAR_6 < VAR_9->sd_rebuild_pos)
    break;

  case 128:
   VAR_13 += VAR_11 << 24;
   break;
  case 130:
   if (VAR_10 + VAR_6 < VAR_9->sd_rebuild_pos)
    break;

  default:
   continue;
  }
  VAR_13 += FUNC_3(VAR_9->sd_recovery, 255) << 16;

  if (FUNC_2(VAR_9) == VAR_10)
   VAR_13 -= 2 * VAR_0;
  else

  if (FUNC_0(FUNC_2(VAR_9) - VAR_10) <
      VAR_1)
   VAR_13 -= 1 * VAR_0;
  if (VAR_13 < VAR_14) {
   VAR_14 = VAR_13;
   VAR_12 = VAR_11;
  }
 }
 return (VAR_12);
}
