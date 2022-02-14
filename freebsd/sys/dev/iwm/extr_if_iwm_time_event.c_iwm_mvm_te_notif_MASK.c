
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwm_time_event_notif {int status; int unique_id; } ;
struct iwm_softc {scalar_t__ sc_time_event_uid; } ;
struct TYPE_2__ {scalar_t__ code; } ;
struct iwm_rx_packet {scalar_t__ data; TYPE_1__ hdr; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwm_softc*,int ,char*,...) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct iwm_rx_packet*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct iwm_softc *VAR_2, struct iwm_rx_packet *VAR_3,
    void *VAR_4)
{
 struct iwm_time_event_notif *VAR_5;
 int VAR_6 = FUNC_1(VAR_3);

 if (VAR_3->hdr.code != VAR_1 ||
     VAR_6 != sizeof(*VAR_5)) {
  FUNC_0(VAR_2, VAR_0,
      "Invalid TIME_EVENT_NOTIFICATION response\n");
  return 1;
 }

 VAR_5 = (void *)VAR_3->data;


 if (FUNC_2(VAR_5->unique_id) != VAR_2->sc_time_event_uid)
  return 0;

 FUNC_0(VAR_2, VAR_0,
     "TIME_EVENT_NOTIFICATION response - UID = 0x%x\n",
     VAR_2->sc_time_event_uid);
 if (!VAR_5->status) {
  FUNC_0(VAR_2, VAR_0,
      "TIME_EVENT_NOTIFICATION received but not executed\n");
 }

 return 1;
}
