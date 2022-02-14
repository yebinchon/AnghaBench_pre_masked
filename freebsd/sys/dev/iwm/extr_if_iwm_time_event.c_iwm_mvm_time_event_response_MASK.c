
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwm_time_event_resp {int unique_id; int id; } ;
struct iwm_softc {scalar_t__ sc_time_event_uid; } ;
struct TYPE_2__ {scalar_t__ code; } ;
struct iwm_rx_packet {scalar_t__ data; TYPE_1__ hdr; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwm_softc*,int ,char*,...) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct iwm_rx_packet*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct iwm_softc *VAR_3, struct iwm_rx_packet *VAR_4,
    void *VAR_5)
{
 struct iwm_time_event_resp *VAR_6;
 int VAR_7 = FUNC_1(VAR_4);

 if (VAR_4->hdr.code != VAR_2 ||
     VAR_7 != sizeof(*VAR_6)) {
  FUNC_0(VAR_3, VAR_0,
      "Invalid TIME_EVENT_CMD response\n");
  return 1;
 }

 VAR_6 = (void *)VAR_4->data;


 if (FUNC_2(VAR_6->id) != VAR_1) {
  FUNC_0(VAR_3, VAR_0,
      "Got TIME_EVENT_CMD response with wrong id: %d\n",
      FUNC_2(VAR_6->id));
  return 0;
 }

 VAR_3->sc_time_event_uid = FUNC_2(VAR_6->unique_id);
 FUNC_0(VAR_3, VAR_0,
     "TIME_EVENT_CMD response - UID = 0x%x\n", VAR_3->sc_time_event_uid);
 return 1;
}
