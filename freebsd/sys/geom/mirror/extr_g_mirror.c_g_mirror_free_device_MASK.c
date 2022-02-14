
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_mirror_softc {int sc_lock; int sc_done_mtx; int sc_events_mtx; int sc_queue_mtx; } ;


 int VAR_0 ;
 int FUNC_0 (struct g_mirror_softc*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct g_mirror_softc *VAR_1)
{

 FUNC_1();

 FUNC_2(&VAR_1->sc_queue_mtx);
 FUNC_2(&VAR_1->sc_events_mtx);
 FUNC_2(&VAR_1->sc_done_mtx);
 FUNC_3(&VAR_1->sc_lock);
 FUNC_0(VAR_1, VAR_0);
}
