
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_mirror_softc {int sc_events_mtx; int sc_events; } ;
struct g_mirror_event {int dummy; } ;


 int FUNC_0 (int *,struct g_mirror_event*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct g_mirror_softc *VAR_1, struct g_mirror_event *VAR_2)
{

 FUNC_1(&VAR_1->sc_events_mtx);
 FUNC_0(&VAR_1->sc_events, VAR_2, VAR_0);
 FUNC_2(&VAR_1->sc_events_mtx);
}
