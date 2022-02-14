
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct g_raid_volume {int v_disks_count; scalar_t__ v_state; scalar_t__ v_tr; struct g_raid_softc* v_softc; } ;
struct g_raid_tr_raid1e_object {int trso_flags; scalar_t__ trso_stopping; scalar_t__ trso_starting; } ;
struct g_raid_subdisk {int dummy; } ;
struct g_raid_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct g_raid_volume*,scalar_t__) ;
 int FUNC_2 (struct g_raid_volume*,int ,int ) ;
 int FUNC_3 (scalar_t__,struct g_raid_subdisk*) ;
 scalar_t__ FUNC_4 (struct g_raid_volume*) ;
 scalar_t__ FUNC_5 (struct g_raid_volume*) ;
 int FUNC_6 (struct g_raid_softc*,struct g_raid_volume*,int *,int *) ;

__attribute__((used)) static int
FUNC_7(struct g_raid_volume *VAR_7,
    struct g_raid_subdisk *VAR_8)
{
 struct g_raid_tr_raid1e_object *VAR_9;
 struct g_raid_softc *VAR_10;
 u_int VAR_11;

 VAR_10 = VAR_7->v_softc;
 VAR_9 = (struct g_raid_tr_raid1e_object *)VAR_7->v_tr;
 if (VAR_9->trso_stopping &&
     (VAR_9->trso_flags & VAR_6) == 0)
  VAR_11 = VAR_4;
 else if (VAR_9->trso_starting)
  VAR_11 = VAR_3;
 else {
  if ((VAR_7->v_disks_count % VAR_5) == 0)
   VAR_11 = FUNC_4(VAR_7);
  else
   VAR_11 = FUNC_5(VAR_7);
 }
 if (VAR_11 != VAR_7->v_state) {
  FUNC_2(VAR_7, FUNC_0(VAR_11) ?
      VAR_2 : VAR_1,
      VAR_0);
  FUNC_1(VAR_7, VAR_11);
  if (!VAR_9->trso_starting && !VAR_9->trso_stopping)
   FUNC_6(VAR_10, VAR_7, ((void*)0), ((void*)0));
 }
 if (!VAR_9->trso_starting && !VAR_9->trso_stopping)
  FUNC_3(VAR_7->v_tr, VAR_8);
 return (0);
}
