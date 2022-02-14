
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct g_raid_volume {int v_disks_count; struct g_raid_subdisk* v_subdisks; } ;
struct g_raid_subdisk {scalar_t__ sd_state; scalar_t__ sd_rebuild_pos; int sd_recovery; } ;
struct bio {scalar_t__ bio_offset; scalar_t__ bio_length; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct g_raid_subdisk*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct g_raid_subdisk*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static struct g_raid_subdisk *
FUNC_4(struct g_raid_volume *VAR_6, struct bio *VAR_7,
    u_int VAR_8)
{
 struct g_raid_subdisk *VAR_9, *VAR_10;
 int VAR_11, VAR_12, VAR_13;

 VAR_10 = ((void*)0);
 VAR_13 = VAR_5;
 for (VAR_11 = 0; VAR_11 < VAR_6->v_disks_count; VAR_11++) {
  VAR_9 = &VAR_6->v_subdisks[VAR_11];
  if (VAR_9->sd_state != VAR_1 &&
      ((VAR_9->sd_state != VAR_2 &&
        VAR_9->sd_state != VAR_3) ||
       VAR_7->bio_offset + VAR_7->bio_length > VAR_9->sd_rebuild_pos))
   continue;
  if ((VAR_8 & (1 << VAR_11)) != 0)
   continue;
  VAR_12 = FUNC_1(VAR_9);
  VAR_12 += FUNC_3(VAR_9->sd_recovery, 255) << 22;
  VAR_12 += (VAR_1 - VAR_9->sd_state) << 16;

  if (FUNC_2(VAR_9) == VAR_7->bio_offset)
   VAR_12 -= 2 * VAR_0;
  else

  if (FUNC_0(FUNC_2(VAR_9) - VAR_7->bio_offset) <
      VAR_4)
   VAR_12 -= 1 * VAR_0;
  if (VAR_12 < VAR_13) {
   VAR_10 = VAR_9;
   VAR_13 = VAR_12;
  }
 }
 return (VAR_10);
}
