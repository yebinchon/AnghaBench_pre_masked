
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwm_time_event_notif {int unique_id; int action; int status; } ;
struct iwm_softc {int sc_time_event_end_ticks; int sc_dev; int sc_time_event_duration; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwm_softc*,int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct iwm_softc*) ;
 int FUNC_5 (int) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_6(struct iwm_softc *VAR_4,
    struct iwm_time_event_notif *VAR_5)
{
 FUNC_0(VAR_4, VAR_0,
     "Handle time event notif - UID = 0x%x action %d\n",
     FUNC_5(VAR_5->unique_id),
     FUNC_5(VAR_5->action));

 if (!FUNC_5(VAR_5->status)) {
  const char *VAR_6;

  if (VAR_5->action & FUNC_3(VAR_2))
   VAR_6 = "Time Event start notification failure";
  else
   VAR_6 = "Time Event end notification failure";

  FUNC_0(VAR_4, VAR_0, "%s\n", VAR_6);
 }

 if (FUNC_5(VAR_5->action) & VAR_1) {
  FUNC_0(VAR_4, VAR_0,
      "TE ended - current time %d, estimated end %d\n",
      VAR_3, VAR_4->sc_time_event_end_ticks);

  FUNC_4(VAR_4);
 } else if (FUNC_5(VAR_5->action) & VAR_2) {
  VAR_4->sc_time_event_end_ticks =
      VAR_3 + FUNC_1(VAR_4->sc_time_event_duration);
 } else {
  FUNC_2(VAR_4->sc_dev, "Got TE with unknown action\n");
 }
}
