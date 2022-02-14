
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_mountver_softc {int sc_mtx; int sc_queue; } ;
struct g_geom {struct g_mountver_softc* softc; } ;
struct bio {TYPE_1__* bio_to; } ;
struct TYPE_2__ {struct g_geom* geom; } ;


 int FUNC_0 (int *,struct bio*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct bio *VAR_1)
{
 struct g_mountver_softc *VAR_2;
 struct g_geom *VAR_3;

 VAR_3 = VAR_1->bio_to->geom;
 VAR_2 = VAR_3->softc;

 FUNC_1(&VAR_2->sc_mtx);
 FUNC_0(&VAR_2->sc_queue, VAR_1, VAR_0);
 FUNC_2(&VAR_2->sc_mtx);
}
