
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct g_raid_volume {int v_last_done; scalar_t__ v_pending_lock; int v_inflight; int v_last_write; int v_writes; } ;
struct g_raid_softc {int sc_lock; } ;
struct bio {scalar_t__ bio_cmd; TYPE_2__* bio_to; } ;
struct TYPE_4__ {struct g_raid_volume* private; TYPE_1__* geom; } ;
struct TYPE_3__ {struct g_raid_softc* softc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,struct bio*,char*,int) ;
 int VAR_2 ;
 int FUNC_1 (int *,struct bio*) ;
 int FUNC_2 (struct bio*,int) ;
 int FUNC_3 (struct g_raid_volume*,struct bio*) ;
 scalar_t__ FUNC_4 (struct g_raid_volume*,struct bio*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int VAR_3 ;

void
FUNC_7(struct bio *VAR_4, int VAR_5)
{
 struct g_raid_softc *VAR_6;
 struct g_raid_volume *VAR_7;

 VAR_6 = VAR_4->bio_to->geom->softc;
 FUNC_6(&VAR_6->sc_lock, VAR_2);
 VAR_7 = VAR_4->bio_to->private;
 FUNC_0(3, VAR_4, "Request done: %d.", VAR_5);


 if (VAR_4->bio_cmd == VAR_1 || VAR_4->bio_cmd == VAR_0) {
  VAR_7->v_writes--;
  VAR_7->v_last_write = VAR_3;
 }

 FUNC_1(&VAR_7->v_inflight, VAR_4);
 if (VAR_7->v_pending_lock && FUNC_4(VAR_7, VAR_4))
  FUNC_3(VAR_7, VAR_4);
 FUNC_5(&VAR_7->v_last_done);
 FUNC_2(VAR_4, VAR_5);
}
