
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct g_mirror_softc {int sc_queue_mtx; int sc_queue; } ;
struct bio {int bio_cflags; TYPE_2__* bio_from; } ;
struct TYPE_4__ {TYPE_1__* geom; } ;
struct TYPE_3__ {struct g_mirror_softc* softc; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct bio*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct g_mirror_softc*) ;

__attribute__((used)) static void
FUNC_4(struct bio *VAR_2)
{
 struct g_mirror_softc *VAR_3;

 VAR_3 = VAR_2->bio_from->geom->softc;
 VAR_2->bio_cflags = VAR_0;
 FUNC_1(&VAR_3->sc_queue_mtx);
 FUNC_0(&VAR_3->sc_queue, VAR_2, VAR_1);
 FUNC_2(&VAR_3->sc_queue_mtx);
 FUNC_3(VAR_3);
}
