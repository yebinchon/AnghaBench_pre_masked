
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwm_softc {int sc_flags; scalar_t__ sc_time_event_end_ticks; scalar_t__ sc_time_event_duration; scalar_t__ sc_time_event_uid; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct iwm_softc *VAR_1)
{
 VAR_1->sc_time_event_uid = 0;
 VAR_1->sc_time_event_duration = 0;
 VAR_1->sc_time_event_end_ticks = 0;
 VAR_1->sc_flags &= ~VAR_0;
}
