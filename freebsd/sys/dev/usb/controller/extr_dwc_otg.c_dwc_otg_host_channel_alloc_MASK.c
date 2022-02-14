
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct dwc_otg_td {void** channel; int max_packet_count; int hcsplt; int hcchar; int pc; } ;
struct dwc_otg_softc {int sc_host_ch_max; int sc_active_rx_ep; TYPE_2__* sc_chan_state; } ;
struct TYPE_4__ {scalar_t__ self_suspended; } ;
struct TYPE_6__ {TYPE_1__ flags; } ;
struct TYPE_5__ {int allocated; int wait_halted; } ;


 int FUNC_0 (char*,int,int ,int ) ;
 void* VAR_0 ;
 TYPE_3__* FUNC_1 (int ) ;
 int FUNC_2 (struct dwc_otg_softc*,int) ;
 int FUNC_3 (struct dwc_otg_softc*) ;
 scalar_t__ FUNC_4 (struct dwc_otg_softc*,struct dwc_otg_td*) ;

__attribute__((used)) static uint8_t
FUNC_5(struct dwc_otg_softc *VAR_1,
    struct dwc_otg_td *VAR_2, uint8_t VAR_3)
{
 uint8_t VAR_4;
 uint8_t VAR_5;
 uint8_t VAR_6;

 if (VAR_2->channel[0] < VAR_0)
  return (0);


 if (FUNC_1(VAR_2->pc)->flags.self_suspended != 0)
  return (1);


 if (VAR_3 != 0) {
  if (FUNC_4(VAR_1, VAR_2) != 0)
   return (1);
 }
 VAR_6 = VAR_2->max_packet_count;
 for (VAR_4 = VAR_5 = 0; VAR_4 != VAR_1->sc_host_ch_max; VAR_4++) {

  if (VAR_1->sc_chan_state[VAR_4].allocated != 0)
   continue;

  if (VAR_1->sc_chan_state[VAR_4].wait_halted != 0)
   continue;

  VAR_2->channel[VAR_5++] = VAR_4;

  if (VAR_5 == VAR_6)
   break;
 }
 if (VAR_5 != VAR_6) {

  VAR_2->channel[0] = VAR_0;
  VAR_2->channel[1] = VAR_0;
  VAR_2->channel[2] = VAR_0;

  FUNC_3(VAR_1);
  return (1);
 }

 for (VAR_5 = 0; VAR_5 != VAR_6; VAR_5++) {
  VAR_4 = VAR_2->channel[VAR_5];


  VAR_1->sc_chan_state[VAR_4].allocated = 1;


  VAR_1->sc_chan_state[VAR_4].wait_halted = 1;


  FUNC_2(VAR_1, VAR_4);

  FUNC_0("CH=%d HCCHAR=0x%08x "
      "HCSPLT=0x%08x\n", VAR_4, VAR_2->hcchar, VAR_2->hcsplt);


  VAR_1->sc_active_rx_ep |= (1 << VAR_4);
 }
 return (0);
}
