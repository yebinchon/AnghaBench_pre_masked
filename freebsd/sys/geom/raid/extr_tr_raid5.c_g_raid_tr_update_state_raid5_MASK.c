
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct g_raid_volume {int v_disks_count; scalar_t__ v_state; scalar_t__ v_tr; struct g_raid_softc* v_softc; } ;
struct g_raid_tr_raid5_object {int trso_flags; scalar_t__ trso_stopping; scalar_t__ trso_starting; } ;
struct g_raid_subdisk {int dummy; } ;
struct g_raid_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct g_raid_volume*,scalar_t__) ;
 int FUNC_2 (struct g_raid_volume*,int ,int ) ;
 int FUNC_3 (struct g_raid_volume*,int ) ;
 int FUNC_4 (struct g_raid_softc*,struct g_raid_volume*,int *,int *) ;

__attribute__((used)) static int
FUNC_5(struct g_raid_volume *VAR_14,
    struct g_raid_subdisk *VAR_15)
{
 struct g_raid_tr_raid5_object *VAR_16;
 struct g_raid_softc *VAR_17;
 u_int VAR_18;
 int VAR_19, VAR_20, VAR_21;

 VAR_17 = VAR_14->v_softc;
 VAR_16 = (struct g_raid_tr_raid5_object *)VAR_14->v_tr;
 if (VAR_16->trso_stopping &&
     (VAR_16->trso_flags & VAR_13) == 0)
  VAR_18 = VAR_11;
 else if (VAR_16->trso_starting)
  VAR_18 = VAR_10;
 else {
  VAR_19 = FUNC_3(VAR_14, VAR_1);
  VAR_20 = FUNC_3(VAR_14, VAR_3) +
       FUNC_3(VAR_14, VAR_2);
  VAR_21 = FUNC_3(VAR_14, VAR_4);
  if (VAR_19 == VAR_14->v_disks_count)
   VAR_18 = VAR_9;
  else if (VAR_19 + VAR_20 == VAR_14->v_disks_count ||
      VAR_19 + VAR_20 + VAR_21 == VAR_14->v_disks_count )
   VAR_18 = VAR_12;
  else if (VAR_19 == VAR_14->v_disks_count - 1 ||
      VAR_19 + VAR_20 + VAR_21 == VAR_14->v_disks_count)
   VAR_18 = VAR_8;
  else
   VAR_18 = VAR_7;
 }
 if (VAR_18 != VAR_14->v_state) {
  FUNC_2(VAR_14, FUNC_0(VAR_18) ?
      VAR_6 : VAR_5,
      VAR_0);
  FUNC_1(VAR_14, VAR_18);
  if (!VAR_16->trso_starting && !VAR_16->trso_stopping)
   FUNC_4(VAR_17, VAR_14, ((void*)0), ((void*)0));
 }
 return (0);
}
