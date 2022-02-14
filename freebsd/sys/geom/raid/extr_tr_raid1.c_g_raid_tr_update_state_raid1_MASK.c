
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct g_raid_volume {int v_disks_count; scalar_t__ v_state; scalar_t__ v_tr; int v_name; struct g_raid_subdisk* v_subdisks; struct g_raid_softc* v_softc; } ;
struct g_raid_tr_raid1_object {int trso_flags; scalar_t__ trso_stopping; scalar_t__ trso_starting; } ;
struct g_raid_subdisk {scalar_t__ sd_state; scalar_t__ sd_rebuild_pos; int * sd_disk; int sd_pos; } ;
struct g_raid_softc {int dummy; } ;


 int FUNC_0 (int,struct g_raid_softc*,char*,int ,int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (struct g_raid_subdisk*,scalar_t__) ;
 int FUNC_3 (struct g_raid_volume*,scalar_t__) ;
 int FUNC_4 (struct g_raid_volume*,int ,int ) ;
 int FUNC_5 (struct g_raid_volume*,scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,struct g_raid_subdisk*) ;
 int FUNC_8 (struct g_raid_softc*,struct g_raid_volume*,struct g_raid_subdisk*,int *) ;

__attribute__((used)) static int
FUNC_9(struct g_raid_volume *VAR_15,
    struct g_raid_subdisk *VAR_16)
{
 struct g_raid_tr_raid1_object *VAR_17;
 struct g_raid_softc *VAR_18;
 struct g_raid_subdisk *VAR_19, *VAR_20;
 u_int VAR_21;
 int VAR_22, VAR_23, VAR_24;

 VAR_18 = VAR_15->v_softc;
 VAR_17 = (struct g_raid_tr_raid1_object *)VAR_15->v_tr;
 if (VAR_17->trso_stopping &&
     (VAR_17->trso_flags & VAR_14) == 0)
  VAR_21 = VAR_12;
 else if (VAR_17->trso_starting)
  VAR_21 = VAR_11;
 else {

  VAR_23 = FUNC_5(VAR_15, VAR_1);
  if (VAR_23 == 0) {




   VAR_20 = &VAR_15->v_subdisks[0];
   for (VAR_22 = 1; VAR_22 < VAR_15->v_disks_count; VAR_22++) {
    VAR_19 = &VAR_15->v_subdisks[VAR_22];
    if (VAR_19->sd_state > VAR_20->sd_state)
     VAR_20 = VAR_19;
    else if (VAR_19->sd_state == VAR_20->sd_state &&
        (VAR_19->sd_state == VAR_2 ||
         VAR_19->sd_state == VAR_3) &&
        VAR_19->sd_rebuild_pos > VAR_20->sd_rebuild_pos)
     VAR_20 = VAR_19;
   }
   if (VAR_20->sd_state >= VAR_5) {

    FUNC_0(1, VAR_18,
        "Promote subdisk %s:%d from %s to ACTIVE.",
        VAR_15->v_name, VAR_20->sd_pos,
        FUNC_6(VAR_20->sd_state));
    FUNC_2(VAR_20,
        VAR_1);
    FUNC_8(VAR_18,
        VAR_15, VAR_20, VAR_20->sd_disk);
   }
  }
  VAR_23 = FUNC_5(VAR_15, VAR_1);
  VAR_24 = FUNC_5(VAR_15, VAR_4) +
       FUNC_5(VAR_15, VAR_3);
  if (VAR_23 == VAR_15->v_disks_count)
   VAR_21 = VAR_10;
  else if (VAR_23 + VAR_24 == VAR_15->v_disks_count)
   VAR_21 = VAR_13;
  else if (VAR_23 > 0)
   VAR_21 = VAR_9;
  else
   VAR_21 = VAR_8;
  FUNC_7(VAR_15->v_tr, VAR_16);
 }
 if (VAR_21 != VAR_15->v_state) {
  FUNC_4(VAR_15, FUNC_1(VAR_21) ?
      VAR_7 : VAR_6,
      VAR_0);
  FUNC_3(VAR_15, VAR_21);
  if (!VAR_17->trso_starting && !VAR_17->trso_stopping)
   FUNC_8(VAR_18, VAR_15, ((void*)0), ((void*)0));
 }
 return (0);
}
