
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gv_softc {int bqueue_mtx; int bqueue_down; } ;
struct g_geom {struct gv_softc* softc; } ;
struct bio {int bio_cmd; TYPE_1__* bio_to; } ;
struct TYPE_2__ {struct g_geom* geom; } ;






 int VAR_0 ;
 int FUNC_0 (int ,struct bio*) ;
 int FUNC_1 (struct bio*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct gv_softc*) ;

void
FUNC_5(struct bio *VAR_1)
{
 struct g_geom *VAR_2;
 struct gv_softc *VAR_3;

 VAR_2 = VAR_1->bio_to->geom;
 VAR_3 = VAR_2->softc;

 switch (VAR_1->bio_cmd) {
 case 129:
 case 128:
 case 131:
  break;
 case 130:
 default:
  FUNC_1(VAR_1, VAR_0);
  return;
 }
 FUNC_2(&VAR_3->bqueue_mtx);
 FUNC_0(VAR_3->bqueue_down, VAR_1);
 FUNC_4(VAR_3);
 FUNC_3(&VAR_3->bqueue_mtx);
}
