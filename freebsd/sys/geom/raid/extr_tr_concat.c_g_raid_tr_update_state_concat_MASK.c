
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct g_raid_volume {int v_disks_count; scalar_t__ v_state; scalar_t__ v_raid_level; scalar_t__ v_mediasize; TYPE_1__* v_subdisks; scalar_t__ v_tr; struct g_raid_softc* v_softc; } ;
struct g_raid_tr_concat_object {scalar_t__ trso_stopped; scalar_t__ trso_starting; } ;
struct g_raid_softc {int dummy; } ;
typedef scalar_t__ off_t ;
struct TYPE_2__ {scalar_t__ sd_state; scalar_t__ sd_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (struct g_raid_volume*,scalar_t__) ;
 int FUNC_2 (struct g_raid_volume*,int ,int ) ;
 int FUNC_3 (struct g_raid_volume*,int ) ;
 int FUNC_4 (struct g_raid_softc*,struct g_raid_volume*,int *,int *) ;

__attribute__((used)) static int
FUNC_5(struct g_raid_volume *VAR_12)
{
 struct g_raid_tr_concat_object *VAR_13;
 struct g_raid_softc *VAR_14;
 off_t VAR_15;
 u_int VAR_16;
 int VAR_17, VAR_18, VAR_19;

 VAR_14 = VAR_12->v_softc;
 VAR_13 = (struct g_raid_tr_concat_object *)VAR_12->v_tr;
 if (VAR_13->trso_stopped)
  VAR_16 = VAR_10;
 else if (VAR_13->trso_starting)
  VAR_16 = VAR_9;
 else {
  VAR_18 = FUNC_3(VAR_12, VAR_1);
  VAR_19 = FUNC_3(VAR_12, VAR_2);
  if (VAR_18 + VAR_19 == VAR_12->v_disks_count) {
   if (VAR_19 == 0)
    VAR_16 = VAR_8;
   else
    VAR_16 = VAR_11;
  } else
   VAR_16 = VAR_7;
 }
 if (VAR_16 != VAR_12->v_state) {





  if (VAR_12->v_raid_level == VAR_6 &&
      FUNC_0(VAR_16) &&
      !FUNC_0(VAR_12->v_state)) {
   VAR_15 = 0;
   for (VAR_17 = 0; VAR_17 < VAR_12->v_disks_count; VAR_17++) {
    if (VAR_12->v_subdisks[VAR_17].sd_state !=
        VAR_3)
     VAR_15 += VAR_12->v_subdisks[VAR_17].sd_size;
   }
   VAR_12->v_mediasize = VAR_15;
  }

  FUNC_2(VAR_12, FUNC_0(VAR_16) ?
      VAR_5 : VAR_4,
      VAR_0);
  FUNC_1(VAR_12, VAR_16);
  if (!VAR_13->trso_starting && !VAR_13->trso_stopped)
   FUNC_4(VAR_14, VAR_12, ((void*)0), ((void*)0));
 }
 return (0);
}
