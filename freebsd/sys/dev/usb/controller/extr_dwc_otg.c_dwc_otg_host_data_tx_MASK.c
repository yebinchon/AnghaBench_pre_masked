
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct dwc_otg_td {size_t* channel; size_t npkt; int state; int error_stall; int error_any; int errcnt; int hcsplt; int did_nak; scalar_t__ tt_scheduled; scalar_t__ offset; scalar_t__ tx_bytes; scalar_t__ remainder; int toggle; int short_pkt; size_t tt_start_slot; scalar_t__ ep_type; size_t max_packet_count; int max_packet_size; int hcchar; int tt_complete_slot; int pc; scalar_t__ set_toggle; } ;
struct dwc_otg_softc {size_t sc_last_frame_num; TYPE_1__* sc_chan_state; } ;
struct TYPE_2__ {int hcint; } ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (char*,...) ;






 size_t VAR_0 ;
 int FUNC_5 (struct dwc_otg_softc*,int ) ;
 size_t VAR_1 ;
 int FUNC_6 (struct dwc_otg_softc*,int ,int) ;
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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ FUNC_7 (struct dwc_otg_softc*,struct dwc_otg_td*,int) ;
 int FUNC_8 (struct dwc_otg_softc*,struct dwc_otg_td*) ;
 int FUNC_9 (struct dwc_otg_softc*,struct dwc_otg_td*) ;
 scalar_t__ FUNC_10 (struct dwc_otg_softc*,struct dwc_otg_td*) ;
 int FUNC_11 (struct dwc_otg_softc*,int ,scalar_t__,int ,int) ;

__attribute__((used)) static uint8_t
FUNC_12(struct dwc_otg_softc *VAR_23, struct dwc_otg_td *VAR_24)
{
 uint32_t VAR_25;
 uint32_t VAR_26;
 uint32_t VAR_27;
 uint8_t VAR_28;
 uint8_t VAR_29;
 uint8_t VAR_30;

 FUNC_9(VAR_23, VAR_24);


 VAR_29 = VAR_24->channel[VAR_24->npkt];

 if (VAR_29 < VAR_0) {
  VAR_26 = VAR_23->sc_chan_state[VAR_29].hcint;

  FUNC_4("CH=%d ST=%d HCINT=0x%08x HCCHAR=0x%08x HCTSIZ=0x%08x\n",
      VAR_29, VAR_24->state, VAR_26,
      FUNC_5(VAR_23, FUNC_1(VAR_29)),
      FUNC_5(VAR_23, FUNC_3(VAR_29)));

  if (VAR_26 & (VAR_8 |
      VAR_4 | VAR_7)) {

  } else if (VAR_26 & VAR_9) {
   FUNC_4("CH=%d STALL\n", VAR_29);
   VAR_24->error_stall = 1;
   VAR_24->error_any = 1;
   goto complete;
  } else if (VAR_26 & VAR_5) {
   FUNC_4("CH=%d ERROR\n", VAR_29);
   VAR_24->errcnt++;
   if (VAR_24->hcsplt != 0 || VAR_24->errcnt >= 3) {
    VAR_24->error_any = 1;
    goto complete;
   }
  }

  if (VAR_26 & (VAR_5 | VAR_8 |
      VAR_4 | VAR_7)) {

   if (!(VAR_26 & VAR_5))
    VAR_24->errcnt = 0;
  }
 } else {
  VAR_26 = 0;
 }

 switch (VAR_24->state) {
 case 133:
  goto send_pkt;

 case 131:
  if (VAR_26 & (VAR_8 | VAR_5)) {
   VAR_24->did_nak = 1;
   VAR_24->tt_scheduled = 0;
   goto send_pkt;
  } else if (VAR_26 & (VAR_4 | VAR_7)) {
   VAR_24->offset += VAR_24->tx_bytes;
   VAR_24->remainder -= VAR_24->tx_bytes;
   VAR_24->toggle ^= 1;

   if (VAR_26 & VAR_7)
    VAR_24->did_nak = 1;
   else
    VAR_24->did_nak = 0;
   VAR_24->tt_scheduled = 0;


   if (VAR_24->remainder == 0) {
    if (VAR_24->short_pkt)
     goto complete;





   }
   goto send_pkt;
  }
  break;

 case 128:
  if (VAR_26 & (VAR_8 | VAR_5)) {
   VAR_24->did_nak = 1;
   VAR_24->tt_scheduled = 0;
   goto send_pkt;
  } else if (VAR_26 & (VAR_4 | VAR_7)) {
   VAR_24->did_nak = 0;
   goto send_cpkt;
  }
  break;

 case 130:
  if (VAR_26 & VAR_7) {
   goto send_cpkt;
  } else if (VAR_26 & (VAR_8 | VAR_5)) {
   VAR_24->did_nak = 1;
   VAR_24->tt_scheduled = 0;
   goto send_pkt;
  } else if (VAR_26 & VAR_4) {
   VAR_24->offset += VAR_24->tx_bytes;
   VAR_24->remainder -= VAR_24->tx_bytes;
   VAR_24->toggle ^= 1;
   VAR_24->did_nak = 0;
   VAR_24->tt_scheduled = 0;


   if (VAR_24->remainder == 0) {
    if (VAR_24->short_pkt)
     goto complete;


   }
   goto send_pkt;
  }
  break;

 case 129:
  goto send_cpkt;

 case 132:

  if ((VAR_26 & VAR_6) == 0)
   break;

  VAR_24->offset += VAR_24->tx_bytes;
  VAR_24->remainder -= VAR_24->tx_bytes;
  goto complete;
 default:
  break;
 }
 goto busy;

send_pkt:

 FUNC_8(VAR_23, VAR_24);

 if (VAR_24->hcsplt != 0) {
  VAR_28 = VAR_24->tt_start_slot - VAR_23->sc_last_frame_num - 1;
  if (VAR_24->tt_scheduled == 0 || VAR_28 < VAR_1) {
   VAR_24->state = 133;
   goto busy;
  }
  VAR_28 = VAR_23->sc_last_frame_num - VAR_24->tt_start_slot;
  if (VAR_28 > 5) {

   VAR_24->tt_scheduled = 0;
   VAR_24->state = 133;
   goto busy;
  }
 } else if (FUNC_10(VAR_23, VAR_24)) {
  VAR_24->state = 133;
  goto busy;
 }


 if (FUNC_7(VAR_23, VAR_24, 1)) {
  VAR_24->state = 133;
  goto busy;
 }


 if (VAR_24->set_toggle) {
  VAR_24->set_toggle = 0;
  VAR_24->toggle = 1;
 }

 if (VAR_24->ep_type == VAR_22) {

  VAR_24->state = 132;
  VAR_24->hcsplt &= ~VAR_10;
  if (VAR_24->hcsplt != 0) {

   VAR_25 = VAR_24->remainder;
   if (VAR_25 > VAR_11) {
    FUNC_4("TT overflow\n");
    VAR_24->error_any = 1;
    goto complete;
   }

   VAR_24->hcsplt &= ~VAR_13;
   VAR_24->hcsplt |= (VAR_12 << VAR_14);
  }
 } else if (VAR_24->hcsplt != 0) {
  VAR_24->hcsplt &= ~VAR_10;

  VAR_24->state = 128;
 } else {

  VAR_24->state = 131;
 }

 VAR_24->tx_bytes = 0;

 for (VAR_30 = 0; VAR_30 != VAR_24->max_packet_count; VAR_30++) {
  uint32_t VAR_31;

  VAR_29 = VAR_24->channel[VAR_30];


  VAR_25 = VAR_24->max_packet_size;
  VAR_31 = VAR_24->remainder - VAR_24->tx_bytes;
  if (VAR_31 < VAR_25) {

   VAR_24->short_pkt = 1;
   VAR_25 = VAR_31;
  }
  if (VAR_25 == VAR_31) {

   switch (VAR_30) {
   case 0:
    FUNC_6(VAR_23, FUNC_3(VAR_29),
        (VAR_25 << VAR_21) |
        (1 << VAR_20) |
        (VAR_24->toggle ? (VAR_16 << VAR_19) :
        (VAR_15 << VAR_19)));
    break;
   case 1:
    FUNC_6(VAR_23, FUNC_3(VAR_29),
        (VAR_25 << VAR_21) |
        (1 << VAR_20) |
        (VAR_16 << VAR_19));
    break;
   default:
    FUNC_6(VAR_23, FUNC_3(VAR_29),
        (VAR_25 << VAR_21) |
        (1 << VAR_20) |
        (VAR_17 << VAR_19));
    break;
   }
  } else if (VAR_24->ep_type == VAR_22 &&
      VAR_24->max_packet_count > 1) {

   FUNC_6(VAR_23, FUNC_3(VAR_29),
       (VAR_25 << VAR_21) |
       (1 << VAR_20) |
       (VAR_18 << VAR_19));
  } else {


   FUNC_6(VAR_23, FUNC_3(VAR_29),
       (VAR_25 << VAR_21) |
       (1 << VAR_20) |
       (VAR_24->toggle ? (VAR_16 << VAR_19) :
       (VAR_15 << VAR_19)));
  }

  FUNC_6(VAR_23, FUNC_2(VAR_29), VAR_24->hcsplt);

  VAR_27 = VAR_24->hcchar;
  VAR_27 &= ~VAR_2;


  if ((VAR_23->sc_last_frame_num & 1) == 0 &&
      VAR_24->ep_type == VAR_22)
   VAR_27 |= VAR_3;
  else
   VAR_27 &= ~VAR_3;


  FUNC_6(VAR_23, FUNC_1(VAR_29), VAR_27);

  if (VAR_25 != 0) {

   FUNC_11(VAR_23, VAR_24->pc, VAR_24->offset +
       VAR_24->tx_bytes, FUNC_0(VAR_29), VAR_25);
  }


  VAR_24->tx_bytes += VAR_25;


  VAR_24->npkt = VAR_30;


  if (VAR_25 == VAR_31)
   break;
 }
 goto busy;

send_cpkt:

 FUNC_8(VAR_23, VAR_24);

 VAR_28 = VAR_24->tt_complete_slot - VAR_23->sc_last_frame_num - 1;
 if (VAR_24->tt_scheduled == 0 || VAR_28 < VAR_1) {
  VAR_24->state = 129;
  goto busy;
 }
 VAR_28 = VAR_23->sc_last_frame_num - VAR_24->tt_start_slot;
 if (VAR_28 > VAR_1) {

  if (VAR_24->ep_type != VAR_22)
   VAR_24->error_any = 1;
  goto complete;
 }


 if (FUNC_7(VAR_23, VAR_24, 0)) {
  VAR_24->state = 129;
  goto busy;
 }

 VAR_29 = VAR_24->channel[0];

  VAR_24->hcsplt |= VAR_10;
 VAR_24->state = 130;

 FUNC_6(VAR_23, FUNC_3(VAR_29),
     (VAR_15 << VAR_19));

 FUNC_6(VAR_23, FUNC_2(VAR_29), VAR_24->hcsplt);

 VAR_27 = VAR_24->hcchar;
 VAR_27 &= ~VAR_2;


 if ((VAR_23->sc_last_frame_num & 1) != 0 &&
     VAR_24->ep_type == VAR_22)
  VAR_27 |= VAR_3;
 else
  VAR_27 &= ~VAR_3;


 FUNC_6(VAR_23, FUNC_1(VAR_29), VAR_27);


 VAR_24->tt_complete_slot = VAR_23->sc_last_frame_num + 1;
busy:
 return (1);

complete:
 FUNC_8(VAR_23, VAR_24);
 return (0);
}
