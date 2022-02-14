
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid_subdisk {struct g_raid_softc* sd_softc; } ;
struct g_raid_softc {int sc_queue_mtx; int sc_queue; } ;
struct bio {struct g_raid_subdisk* bio_caller1; } ;


 int FUNC_0 (int *,struct bio*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct g_raid_softc*) ;

__attribute__((used)) static void
FUNC_4(struct bio *VAR_1)
{
 struct g_raid_softc *VAR_2;
 struct g_raid_subdisk *VAR_3;

 VAR_3 = VAR_1->bio_caller1;
 VAR_2 = VAR_3->sd_softc;
 FUNC_1(&VAR_2->sc_queue_mtx);
 FUNC_0(&VAR_2->sc_queue, VAR_1);
 FUNC_2(&VAR_2->sc_queue_mtx);
 if (!VAR_0)
  FUNC_3(VAR_2);
}
