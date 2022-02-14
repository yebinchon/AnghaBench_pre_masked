
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gv_softc {int bqueue_mtx; int bqueue_up; } ;
struct g_geom {struct gv_softc* softc; } ;
struct bio {TYPE_1__* bio_from; } ;
struct TYPE_2__ {struct g_geom* geom; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,struct bio*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct gv_softc*) ;

void
FUNC_5(struct bio *VAR_0)
{
 struct g_geom *VAR_1;
 struct gv_softc *VAR_2;

 FUNC_0(VAR_0 != ((void*)0), ("NULL bp"));

 VAR_1 = VAR_0->bio_from->geom;
 VAR_2 = VAR_1->softc;

 FUNC_2(&VAR_2->bqueue_mtx);
 FUNC_1(VAR_2->bqueue_up, VAR_0);
 FUNC_4(VAR_2);
 FUNC_3(&VAR_2->bqueue_mtx);
}
