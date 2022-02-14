
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct g_raid_volume {int v_tr; int v_inflight; int v_writes; int v_dirty; int v_locked; } ;
struct g_raid_softc {int sc_lock; } ;
struct bio {int bio_cflags; scalar_t__ bio_cmd; TYPE_2__* bio_to; } ;
struct TYPE_4__ {struct g_raid_volume* private; TYPE_1__* geom; } ;
struct TYPE_3__ {struct g_raid_softc* softc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,struct bio*,char*) ;
 int FUNC_1 (int ,struct bio*) ;
 int VAR_3 ;
 int FUNC_2 (int *,struct bio*) ;
 int FUNC_3 (struct g_raid_volume*) ;
 scalar_t__ FUNC_4 (struct g_raid_volume*,struct bio*) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void
FUNC_6(struct bio *VAR_4)
{
 struct g_raid_softc *VAR_5;
 struct g_raid_volume *VAR_6;

 VAR_5 = VAR_4->bio_to->geom->softc;
 FUNC_5(&VAR_5->sc_lock, VAR_3);
 VAR_6 = VAR_4->bio_to->private;
 if (!(VAR_4->bio_cflags & VAR_2) &&
     FUNC_4(VAR_6, VAR_4)) {
  FUNC_0(3, VAR_4, "Defer request.");
  FUNC_2(&VAR_6->v_locked, VAR_4);
  return;
 }





 if (VAR_4->bio_cmd == VAR_1 || VAR_4->bio_cmd == VAR_0) {
  if (!VAR_6->v_dirty)
   FUNC_3(VAR_6);
  VAR_6->v_writes++;
 }






 FUNC_2(&VAR_6->v_inflight, VAR_4);
 FUNC_0(4, VAR_4, "Request started");
 FUNC_1(VAR_6->v_tr, VAR_4);
}
