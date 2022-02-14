
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct upgt_softc {scalar_t__ sc_tx_timer; struct upgt_data* sc_tx_data; } ;
struct TYPE_2__ {int reqid; } ;
struct upgt_lmac_tx_done_desc {int seq; int rssi; int status; TYPE_1__ header2; } ;
struct upgt_data {scalar_t__ addr; int * m; int * ni; } ;


 int FUNC_0 (struct upgt_softc*,int ,char*,scalar_t__,...) ;
 int FUNC_1 (struct upgt_softc*) ;
 int VAR_0 ;
 int FUNC_2 (struct upgt_softc*) ;
 int VAR_1 ;
 int FUNC_3 (struct upgt_softc*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct upgt_softc*,scalar_t__) ;
 int FUNC_7 (struct upgt_softc*) ;

__attribute__((used)) static void
FUNC_8(struct upgt_softc *VAR_2, uint8_t *VAR_3)
{
 struct upgt_lmac_tx_done_desc *VAR_4;
 int VAR_5, VAR_6 = 0;

 FUNC_1(VAR_2);

 VAR_4 = (struct upgt_lmac_tx_done_desc *)VAR_3;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  struct upgt_data *VAR_7 = &VAR_2->sc_tx_data[VAR_5];

  if (VAR_7->addr == FUNC_5(VAR_4->header2.reqid)) {
   FUNC_6(VAR_2, VAR_7->addr);
   VAR_7->ni = ((void*)0);
   VAR_7->addr = 0;
   VAR_7->m = ((void*)0);

   FUNC_0(VAR_2, VAR_0,
       "TX done: memaddr=0x%08x, status=0x%04x, rssi=%d, ",
       FUNC_5(VAR_4->header2.reqid),
       FUNC_4(VAR_4->status), FUNC_4(VAR_4->rssi));
   FUNC_0(VAR_2, VAR_0, "seq=%d\n",
       FUNC_4(VAR_4->seq));

   VAR_6++;
  }
 }

 if (VAR_6 != 0) {
  FUNC_3(VAR_2);
  VAR_2->sc_tx_timer = 0;
  FUNC_7(VAR_2);
  FUNC_2(VAR_2);
 }
}
