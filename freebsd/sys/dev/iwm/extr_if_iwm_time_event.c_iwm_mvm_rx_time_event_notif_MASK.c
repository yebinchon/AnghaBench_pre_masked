
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwm_time_event_notif {int action; int unique_id; } ;
struct iwm_softc {int dummy; } ;
struct iwm_rx_packet {scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwm_softc*,int ,char*,int ,int ) ;
 int FUNC_1 (struct iwm_softc*,struct iwm_time_event_notif*) ;
 int FUNC_2 (int ) ;

void
FUNC_3(struct iwm_softc *VAR_1, struct iwm_rx_packet *VAR_2)
{
 struct iwm_time_event_notif *VAR_3 = (void *)VAR_2->data;

 FUNC_0(VAR_1, VAR_0,
     "Time event notification - UID = 0x%x action %d\n",
     FUNC_2(VAR_3->unique_id),
     FUNC_2(VAR_3->action));

 FUNC_1(VAR_1, VAR_3);
}
