
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_mirror_softc {int sc_events_mtx; int sc_events; } ;
struct g_mirror_event {int dummy; } ;


 struct g_mirror_event* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct g_mirror_event *
FUNC_3(struct g_mirror_softc *VAR_0)
{
 struct g_mirror_event *VAR_1;

 FUNC_1(&VAR_0->sc_events_mtx);
 VAR_1 = FUNC_0(&VAR_0->sc_events);
 FUNC_2(&VAR_0->sc_events_mtx);
 return (VAR_1);
}
