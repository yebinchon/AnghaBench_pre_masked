
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_uzip_softc {int queue_mtx; int bio_queue; } ;
struct g_geom {struct g_uzip_softc* softc; } ;
struct bio {TYPE_1__* bio_to; struct bio* bio_parent; } ;
struct TYPE_2__ {struct g_geom* geom; } ;


 int FUNC_0 (int *,struct bio*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct g_uzip_softc*) ;

__attribute__((used)) static void
FUNC_4(struct bio *VAR_0)
{
 struct bio *VAR_1;
 struct g_geom *VAR_2;
 struct g_uzip_softc *VAR_3;

 VAR_1 = VAR_0->bio_parent;
 VAR_2 = VAR_1->bio_to->geom;
 VAR_3 = VAR_2->softc;

 FUNC_1(&VAR_3->queue_mtx);
 FUNC_0(&VAR_3->bio_queue, VAR_0);
 FUNC_2(&VAR_3->queue_mtx);
 FUNC_3(VAR_3);
}
