
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct g_journal_softc {int sc_mtx; int sc_back_queue; } ;
struct bio {TYPE_2__* bio_from; } ;
struct TYPE_4__ {TYPE_1__* geom; } ;
struct TYPE_3__ {struct g_journal_softc* softc; } ;


 int FUNC_0 (int *,struct bio*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct g_journal_softc*) ;

__attribute__((used)) static void
FUNC_4(struct bio *VAR_0)
{
 struct g_journal_softc *VAR_1;

 VAR_1 = VAR_0->bio_from->geom->softc;
 FUNC_1(&VAR_1->sc_mtx);
 FUNC_0(&VAR_1->sc_back_queue, VAR_0);
 FUNC_3(VAR_1);
 FUNC_2(&VAR_1->sc_mtx);
}
