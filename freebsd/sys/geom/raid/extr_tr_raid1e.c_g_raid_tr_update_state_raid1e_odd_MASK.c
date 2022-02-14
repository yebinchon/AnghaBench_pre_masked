
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid_volume {int v_disks_count; struct g_raid_subdisk* v_subdisks; int v_name; struct g_raid_softc* v_softc; } ;
struct g_raid_subdisk {scalar_t__ sd_state; scalar_t__ sd_rebuild_pos; int sd_disk; int sd_pos; } ;
struct g_raid_softc {int dummy; } ;


 int FUNC_0 (int,struct g_raid_softc*,char*,int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct g_raid_subdisk*,scalar_t__) ;
 int FUNC_2 (struct g_raid_volume*,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct g_raid_softc*,struct g_raid_volume*,struct g_raid_subdisk*,int ) ;

__attribute__((used)) static int
FUNC_5(struct g_raid_volume *VAR_10)
{
 struct g_raid_softc *VAR_11;
 struct g_raid_subdisk *VAR_12, *VAR_13, *VAR_14;
 int VAR_15, VAR_16, VAR_17, VAR_18;

 VAR_11 = VAR_10->v_softc;
 if (FUNC_2(VAR_10, VAR_0) ==
     VAR_10->v_disks_count)
  return (VAR_7);
 for (VAR_15 = 0; VAR_15 < VAR_10->v_disks_count; VAR_15++) {
  VAR_12 = &VAR_10->v_subdisks[VAR_15];
  if (VAR_12->sd_state == VAR_4) {

   FUNC_0(1, VAR_11,
       "Promote subdisk %s:%d from %s to STALE.",
       VAR_10->v_name, VAR_12->sd_pos,
       FUNC_3(VAR_12->sd_state));
   FUNC_1(VAR_12,
       VAR_3);
   FUNC_4(VAR_11, VAR_10, VAR_12, VAR_12->sd_disk);
  }
 }
 VAR_17 = VAR_7;
 for (VAR_15 = 0; VAR_15 < VAR_10->v_disks_count; VAR_15++) {
  VAR_13 = &VAR_10->v_subdisks[VAR_15];
  VAR_14 = &VAR_10->v_subdisks[VAR_15];
  for (VAR_16 = 1; VAR_16 < VAR_9; VAR_16++) {
   VAR_12 = &VAR_10->v_subdisks[(VAR_15 + VAR_16) % VAR_10->v_disks_count];
   if (VAR_12->sd_state > VAR_13->sd_state)
    VAR_13 = VAR_12;
   else if (VAR_12->sd_state == VAR_13->sd_state &&
       (VAR_12->sd_state == VAR_1 ||
        VAR_12->sd_state == VAR_2) &&
       VAR_12->sd_rebuild_pos > VAR_13->sd_rebuild_pos)
    VAR_13 = VAR_12;
   if (VAR_12->sd_state < VAR_14->sd_state)
    VAR_14 = VAR_12;
  }
  if (VAR_14->sd_state == VAR_0)
   VAR_18 = VAR_7;
  else if (VAR_14->sd_state >= VAR_3)
   VAR_18 = VAR_8;
  else if (VAR_13->sd_state >= VAR_3)
   VAR_18 = VAR_6;
  else
   VAR_18 = VAR_5;
  if (VAR_18 < VAR_17)
   VAR_17 = VAR_18;
 }
 return (VAR_17);
}
