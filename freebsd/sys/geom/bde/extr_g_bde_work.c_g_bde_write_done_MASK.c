
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_bde_work {scalar_t__ error; struct g_bde_sector* ksp; struct g_bde_sector* sp; TYPE_1__* bp; } ;
struct g_bde_softc {int worklist_mutex; } ;
struct g_bde_sector {scalar_t__ size; scalar_t__ error; scalar_t__ state; struct g_bde_work* owner; } ;
struct bio {scalar_t__ bio_error; scalar_t__ bio_completed; struct g_bde_softc* bio_caller2; struct g_bde_sector* bio_caller1; } ;
struct TYPE_2__ {scalar_t__ bio_cmd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct g_bde_softc*,struct g_bde_sector*) ;
 int FUNC_2 (struct g_bde_work*,scalar_t__) ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (int ,char*,struct g_bde_sector*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct bio *VAR_5)
{
 struct g_bde_sector *VAR_6;
 struct g_bde_work *VAR_7;
 struct g_bde_softc *VAR_8;

 VAR_6 = VAR_5->bio_caller1;
 VAR_8 = VAR_5->bio_caller2;
 FUNC_5(&VAR_8->worklist_mutex);
 FUNC_0(VAR_6 != ((void*)0), ("NULL sp"));
 FUNC_0(VAR_8 != ((void*)0), ("NULL sc"));
 FUNC_0(VAR_6->owner != ((void*)0), ("NULL sp->owner"));
 FUNC_4(VAR_3, "g_bde_write_done(%p)", VAR_6);
 if (VAR_5->bio_error == 0 && VAR_5->bio_completed != VAR_6->size)
  VAR_5->bio_error = VAR_2;
 VAR_6->error = VAR_5->bio_error;
 FUNC_3(VAR_5);
 VAR_7 = VAR_6->owner;
 if (VAR_7->error == 0)
  VAR_7->error = VAR_6->error;

 if (VAR_7->bp->bio_cmd == VAR_0) {
  FUNC_0(VAR_6 == VAR_7->sp, ("trashed delete op"));
  FUNC_2(VAR_7, VAR_7->error);
  FUNC_6(&VAR_8->worklist_mutex);
  return;
 }

 FUNC_0(VAR_7->bp->bio_cmd == VAR_1, ("Confused in g_bde_write_done()"));
 FUNC_0(VAR_6 == VAR_7->sp || VAR_6 == VAR_7->ksp, ("trashed write op"));
 if (VAR_7->sp == VAR_6) {
  FUNC_1(VAR_8, VAR_7->sp);
  VAR_7->sp = ((void*)0);
 } else {
  VAR_6->state = VAR_4;
 }
 if (VAR_7->sp == ((void*)0) && VAR_7->ksp != ((void*)0) && VAR_7->ksp->state == VAR_4)
  FUNC_2(VAR_7, VAR_7->error);
 FUNC_6(&VAR_8->worklist_mutex);
 return;
}
