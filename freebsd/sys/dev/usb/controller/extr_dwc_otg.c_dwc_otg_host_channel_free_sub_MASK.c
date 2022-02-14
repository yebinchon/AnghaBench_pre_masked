
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct dwc_otg_td {scalar_t__* channel; } ;
struct dwc_otg_softc {scalar_t__ sc_last_rx_status; int sc_active_rx_ep; TYPE_1__* sc_chan_state; } ;
struct TYPE_2__ {scalar_t__ wait_halted; scalar_t__ allocated; } ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (char*,size_t) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct dwc_otg_softc*,int ) ;
 int FUNC_3 (struct dwc_otg_softc*,int ,int) ;
 size_t FUNC_4 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct dwc_otg_softc*) ;

__attribute__((used)) static void
FUNC_6(struct dwc_otg_softc *VAR_3, struct dwc_otg_td *VAR_4, uint8_t VAR_5)
{
 uint32_t VAR_6;
 uint8_t VAR_7;

 if (VAR_4->channel[VAR_5] >= VAR_0)
  return;


 VAR_7 = VAR_4->channel[VAR_5];
 VAR_4->channel[VAR_5] = VAR_0;

 FUNC_1("CH=%d\n", VAR_7);





 VAR_3->sc_chan_state[VAR_7].allocated = 0;


 if (VAR_3->sc_last_rx_status != 0 &&
     FUNC_4(VAR_3->sc_last_rx_status) == VAR_7) {
  FUNC_5(VAR_3);
 }


 VAR_3->sc_active_rx_ep &= ~(1 << VAR_7);


 if (VAR_3->sc_chan_state[VAR_7].wait_halted == 0)
  return;


 VAR_6 = FUNC_2(VAR_3, FUNC_0(VAR_7));
 if (VAR_6 & VAR_2) {
  FUNC_1("Halting channel %d\n", VAR_7);
  FUNC_3(VAR_3, FUNC_0(VAR_7),
      VAR_6 | VAR_1);

 } else {
  VAR_3->sc_chan_state[VAR_7].wait_halted = 0;
 }
}
