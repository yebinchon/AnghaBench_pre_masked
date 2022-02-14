
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct dwc_otg_td {size_t max_packet_count; size_t* channel; int state; int error_stall; int error_any; int errcnt; int hcsplt; scalar_t__ ep_type; int toggle; int did_nak; scalar_t__ tt_scheduled; size_t tt_complete_slot; size_t tt_start_slot; int max_packet_size; int hcchar; scalar_t__ set_toggle; int short_pkt; int got_short; int remainder; int tt_xactpos; } ;
struct dwc_otg_softc {size_t sc_last_frame_num; TYPE_1__* sc_chan_state; } ;
struct TYPE_2__ {int hcint; } ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (char*,...) ;




 size_t VAR_0 ;
 int FUNC_4 (struct dwc_otg_softc*,int ) ;
 size_t VAR_1 ;
 int FUNC_5 (struct dwc_otg_softc*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ FUNC_6 (struct dwc_otg_softc*,struct dwc_otg_td*,int ) ;
 int FUNC_7 (struct dwc_otg_softc*,struct dwc_otg_td*) ;
 scalar_t__ FUNC_8 (struct dwc_otg_softc*,struct dwc_otg_td*,size_t) ;
 scalar_t__ FUNC_9 (struct dwc_otg_softc*,struct dwc_otg_td*) ;

__attribute__((used)) static uint8_t
FUNC_10(struct dwc_otg_softc *VAR_20, struct dwc_otg_td *VAR_21)
{
 uint32_t VAR_22 = 0;
 uint32_t VAR_23;
 uint8_t VAR_24;
 uint8_t VAR_25;
 uint8_t VAR_26;

 for (VAR_26 = 0; VAR_26 != VAR_21->max_packet_count; VAR_26++) {
  VAR_25 = VAR_21->channel[VAR_26];
  if (VAR_25 >= VAR_0)
   continue;
  VAR_22 |= VAR_20->sc_chan_state[VAR_25].hcint;

  FUNC_3("CH=%d ST=%d HCINT=0x%08x HCCHAR=0x%08x HCTSIZ=0x%08x\n",
      VAR_25, VAR_21->state, VAR_22,
      FUNC_4(VAR_20, FUNC_0(VAR_25)),
      FUNC_4(VAR_20, FUNC_2(VAR_25)));


  if (VAR_22 & (VAR_8 |
      VAR_4 | VAR_7)) {

  } else if (VAR_22 & VAR_10) {
   FUNC_3("CH=%d STALL\n", VAR_25);
   VAR_21->error_stall = 1;
   VAR_21->error_any = 1;
   goto complete;
  } else if (VAR_22 & VAR_6) {
   FUNC_3("CH=%d ERROR\n", VAR_25);
   VAR_21->errcnt++;
   if (VAR_21->hcsplt != 0 || VAR_21->errcnt >= 3) {
    if (VAR_21->ep_type != VAR_19) {
     VAR_21->error_any = 1;
     goto complete;
    }
   }
  }


  if (FUNC_8(VAR_20, VAR_21, VAR_25))
   goto complete;


  VAR_22 |= VAR_20->sc_chan_state[VAR_25].hcint;

  if (VAR_22 & (VAR_6 | VAR_8 |
      VAR_4 | VAR_7)) {
   if (!(VAR_22 & VAR_6))
    VAR_21->errcnt = 0;
  }
 }

 switch (VAR_21->state) {
 case 131:
  if (VAR_21->hcsplt != 0)
   goto receive_spkt;
  else
   goto receive_pkt;

 case 130:
  if (VAR_22 & (VAR_8 | VAR_6)) {
   if (VAR_21->ep_type == VAR_18) {
    if (VAR_22 & VAR_5) {
     FUNC_3("Retrying packet due to "
         "data toggle error\n");
     VAR_21->toggle ^= 1;
     goto receive_pkt;
    }
   } else if (VAR_21->ep_type == VAR_19) {
    if (VAR_21->hcsplt != 0) {
     FUNC_3("Retrying complete split\n");
     goto receive_pkt;
    }
    goto complete;
   }
   VAR_21->did_nak = 1;
   VAR_21->tt_scheduled = 0;
   if (VAR_21->hcsplt != 0)
    goto receive_spkt;
   else
    goto receive_pkt;
  } else if (VAR_22 & VAR_7) {
   if (VAR_21->hcsplt != 0) {

    goto receive_pkt;
   } else {

    VAR_21->error_any = 1;
    goto complete;
   }
  } else if (VAR_22 & VAR_4) {

   if (!(VAR_22 & VAR_9))
    goto busy;

   if (VAR_21->ep_type == VAR_19) {

    if (VAR_21->tt_xactpos == VAR_12) {
     goto complete;
    } else if (VAR_21->hcsplt != 0) {
     goto receive_pkt;
    } else {

     goto busy;
    }
   } else {

    if ((VAR_21->remainder == 0) || (VAR_21->got_short != 0)) {
     if (VAR_21->short_pkt)
      goto complete;





    }
    VAR_21->tt_scheduled = 0;
    VAR_21->did_nak = 0;
    if (VAR_21->hcsplt != 0)
     goto receive_spkt;
    else
     goto receive_pkt;
   }
  }
  break;

 case 128:




  if (VAR_22 & (VAR_8 | VAR_6)) {
   VAR_21->did_nak = 1;
   VAR_21->tt_scheduled = 0;
   goto receive_spkt;
  } else if (VAR_22 & VAR_7) {
   VAR_21->tt_scheduled = 0;
   goto receive_spkt;
  } else if (VAR_22 & VAR_4) {
   VAR_21->did_nak = 0;
   goto receive_pkt;
  }
  break;

 case 129:
  goto receive_pkt;

 default:
  break;
 }
 goto busy;

receive_pkt:

 FUNC_7(VAR_20, VAR_21);

   if (VAR_21->hcsplt != 0) {
  VAR_24 = VAR_21->tt_complete_slot - VAR_20->sc_last_frame_num - 1;
  if (VAR_21->tt_scheduled == 0 || VAR_24 < VAR_1) {
   if (VAR_21->ep_type != VAR_19) {
    VAR_21->state = 129;
    goto busy;
   }
  }
  VAR_24 = VAR_20->sc_last_frame_num - VAR_21->tt_start_slot;
  if (VAR_24 > VAR_1) {
   if (VAR_21->ep_type != VAR_19) {

    VAR_21->error_any = 1;
   }
   goto complete;
  }

  VAR_21->hcsplt |= VAR_11;
 } else if (FUNC_9(VAR_20, VAR_21)) {
  VAR_21->state = 129;
  goto busy;
 }


 if (FUNC_6(VAR_20, VAR_21, 0)) {
  VAR_21->state = 129;
  goto busy;
 }


 if (VAR_21->set_toggle) {
  VAR_21->set_toggle = 0;
  VAR_21->toggle = 1;
 }

 VAR_21->state = 130;

 for (VAR_26 = 0; VAR_26 != VAR_21->max_packet_count; VAR_26++) {
    VAR_25 = VAR_21->channel[VAR_26];


  FUNC_5(VAR_20, FUNC_2(VAR_25),
      (VAR_21->max_packet_size << VAR_17) |
      (1 << VAR_16) |
      (VAR_21->toggle ? (VAR_14 << VAR_15) :
      (VAR_13 << VAR_15)));

  FUNC_5(VAR_20, FUNC_1(VAR_25), VAR_21->hcsplt);

  VAR_23 = VAR_21->hcchar;
  VAR_23 |= VAR_2;

  if (VAR_21->ep_type == VAR_19) {
   if (VAR_21->hcsplt != 0) {

    if (VAR_20->sc_last_frame_num & 1)
     VAR_23 &= ~VAR_3;
    else
     VAR_23 |= VAR_3;
   } else {

    if (VAR_20->sc_last_frame_num & 1)
     VAR_23 |= VAR_3;
    else
     VAR_23 &= ~VAR_3;
   }
  } else {
   VAR_23 &= ~VAR_3;
  }


  FUNC_5(VAR_20, FUNC_0(VAR_25), VAR_23);
 }

 VAR_21->tt_complete_slot = VAR_20->sc_last_frame_num + 1;

 goto busy;

receive_spkt:

 FUNC_7(VAR_20, VAR_21);

 VAR_24 = VAR_21->tt_start_slot - VAR_20->sc_last_frame_num - 1;
 if (VAR_21->tt_scheduled == 0 || VAR_24 < VAR_1) {
  VAR_21->state = 131;
  goto busy;
 }
 VAR_24 = VAR_20->sc_last_frame_num - VAR_21->tt_start_slot;
 if (VAR_24 > 5) {

  VAR_21->tt_scheduled = 0;
  VAR_21->state = 131;
  goto busy;
 }


 if (FUNC_6(VAR_20, VAR_21, 0)) {
  VAR_21->state = 131;
  goto busy;
 }

 VAR_25 = VAR_21->channel[0];

 VAR_21->hcsplt &= ~VAR_11;
 VAR_21->state = 128;


 FUNC_5(VAR_20, FUNC_2(VAR_25),
     (VAR_13 << VAR_15));

 FUNC_5(VAR_20, FUNC_1(VAR_25), VAR_21->hcsplt);


 if ((VAR_20->sc_last_frame_num & 1) == 0 &&
     VAR_21->ep_type == VAR_19)
  VAR_21->hcchar |= VAR_3;
 else
  VAR_21->hcchar &= ~VAR_3;

 VAR_23 = VAR_21->hcchar;
 VAR_23 |= VAR_2;


 VAR_21->tt_complete_slot = VAR_20->sc_last_frame_num + 1;


 FUNC_5(VAR_20, FUNC_0(VAR_25), VAR_23);
busy:
 return (1);

complete:
 FUNC_7(VAR_20, VAR_21);
 return (0);
}
