
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct g_raid_volume {int v_disks_count; scalar_t__ v_state; scalar_t__ v_tr; struct g_raid_softc* v_softc; } ;
struct g_raid_tr_raid0_object {scalar_t__ trso_stopped; scalar_t__ trso_starting; } ;
struct g_raid_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (struct g_raid_volume*,scalar_t__) ;
 int FUNC_2 (struct g_raid_volume*,int ,int ) ;
 int FUNC_3 (struct g_raid_volume*,int ) ;
 int FUNC_4 (struct g_raid_softc*,struct g_raid_volume*,int *,int *) ;

__attribute__((used)) static int
FUNC_5(struct g_raid_volume *VAR_10)
{
 struct g_raid_tr_raid0_object *VAR_11;
 struct g_raid_softc *VAR_12;
 u_int VAR_13;
 int VAR_14, VAR_15;

 VAR_12 = VAR_10->v_softc;
 VAR_11 = (struct g_raid_tr_raid0_object *)VAR_10->v_tr;
 if (VAR_11->trso_stopped)
  VAR_13 = VAR_8;
 else if (VAR_11->trso_starting)
  VAR_13 = VAR_7;
 else {
  VAR_14 = FUNC_3(VAR_10, VAR_1);
  VAR_15 = FUNC_3(VAR_10, VAR_2);
  if (VAR_14 + VAR_15 == VAR_10->v_disks_count) {
   if (VAR_15 == 0)
    VAR_13 = VAR_6;
   else
    VAR_13 = VAR_9;
  } else
   VAR_13 = VAR_5;
 }
 if (VAR_13 != VAR_10->v_state) {
  FUNC_2(VAR_10, FUNC_0(VAR_13) ?
      VAR_4 : VAR_3,
      VAR_0);
  FUNC_1(VAR_10, VAR_13);
  if (!VAR_11->trso_starting && !VAR_11->trso_stopped)
   FUNC_4(VAR_12, VAR_10, ((void*)0), ((void*)0));
 }
 return (0);
}
