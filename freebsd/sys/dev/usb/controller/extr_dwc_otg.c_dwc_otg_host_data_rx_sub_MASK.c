
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct dwc_otg_td {int short_pkt; int got_short; int error_any; int toggle; int offset; int remainder; int pc; int tt_scheduled; int max_packet_size; int tt_xactpos; int ep_type; scalar_t__ state; } ;
struct dwc_otg_softc {int sc_last_rx_status; TYPE_1__* sc_chan_state; } ;
struct TYPE_2__ {int hcint; } ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct dwc_otg_softc*) ;
 int FUNC_4 (struct dwc_otg_softc*,int ,int ,int ) ;

__attribute__((used)) static uint8_t
FUNC_5(struct dwc_otg_softc *VAR_8, struct dwc_otg_td *VAR_9,
    uint8_t VAR_10)
{
 uint32_t VAR_11;


 if (VAR_8->sc_last_rx_status == 0)
  goto busy;

 if (VAR_10 >= VAR_0)
  goto busy;

 if (FUNC_2(VAR_8->sc_last_rx_status) != VAR_10)
  goto busy;

 switch (VAR_8->sc_last_rx_status & VAR_3) {
 case 128:

  FUNC_0("DATA ST=%d STATUS=0x%08x\n",
      (int)VAR_9->state, (int)VAR_8->sc_last_rx_status);

  if (VAR_8->sc_chan_state[VAR_10].hcint & VAR_4) {




   FUNC_0("Data already received\n");
   break;
  }


  VAR_11 = FUNC_1(VAR_8->sc_last_rx_status);


  if (VAR_9->ep_type == VAR_7) {
   if ((VAR_8->sc_last_rx_status & VAR_2) !=
       VAR_1) {

    VAR_9->tt_xactpos = VAR_6;
   } else {

    VAR_9->tt_xactpos = VAR_5;

    if (VAR_11 != VAR_9->remainder) {

     VAR_9->short_pkt = 1;
     VAR_9->got_short = 1;
    }
   }
  } else {

   if (VAR_11 != VAR_9->max_packet_size) {
    if (VAR_11 < VAR_9->max_packet_size) {

     VAR_9->short_pkt = 1;
     VAR_9->got_short = 1;
    } else {

     VAR_9->error_any = 1;


     FUNC_3(VAR_8);
     goto complete;
    }
   }
   VAR_9->toggle ^= 1;
   VAR_9->tt_scheduled = 0;
  }


  if (VAR_11 > VAR_9->remainder) {

   VAR_9->error_any = 1;


   FUNC_3(VAR_8);
   goto complete;
  }


  FUNC_4(VAR_8, VAR_9->pc, VAR_9->offset, VAR_11);

  VAR_9->remainder -= VAR_11;
  VAR_9->offset += VAR_11;
  VAR_8->sc_chan_state[VAR_10].hcint |= VAR_4;
  break;
 default:
  break;
 }

 FUNC_3(VAR_8);
busy:
 return (0);
complete:
 return (1);
}
