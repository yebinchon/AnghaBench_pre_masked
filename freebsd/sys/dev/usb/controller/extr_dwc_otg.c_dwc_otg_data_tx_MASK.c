
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct dwc_otg_td {size_t ep_no; int error_any; int tx_bytes; scalar_t__ npkt; scalar_t__ max_packet_size; int offset; int remainder; int short_pkt; int pc; } ;
struct dwc_otg_softc {int sc_last_rx_status; int* sc_in_ctl; TYPE_1__* sc_hw_ep_profile; } ;
struct TYPE_2__ {int max_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (int,char*,int,size_t,...) ;
 int FUNC_4 (struct dwc_otg_softc*,int ) ;
 int FUNC_5 (struct dwc_otg_softc*,int ,int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_11 (struct dwc_otg_softc*) ;
 int FUNC_12 (struct dwc_otg_softc*,int ,int,int ,int) ;

__attribute__((used)) static uint8_t
FUNC_13(struct dwc_otg_softc *VAR_10, struct dwc_otg_td *VAR_11)
{
 uint32_t VAR_12;
 uint32_t VAR_13;
 uint32_t VAR_14;
 uint32_t VAR_15;
 uint32_t VAR_16;
 uint8_t VAR_17;

 VAR_17 = 3;

 VAR_12 = VAR_10->sc_hw_ep_profile[VAR_11->ep_no].max_buffer;

repeat:


 VAR_16 = VAR_10->sc_last_rx_status;

 if ((VAR_11->ep_no == 0) && (VAR_16 != 0) &&
     (FUNC_10(VAR_16) == 0)) {

  if ((VAR_16 & VAR_7) !=
      VAR_9 &&
      (VAR_16 & VAR_7) !=
      VAR_8) {


   FUNC_11(VAR_10);
  } else {




   VAR_11->error_any = 1;
   return (0);
  }
 }


 if (VAR_11->tx_bytes != 0) {

  uint16_t VAR_18;


  VAR_16 = FUNC_4(VAR_10, FUNC_2(VAR_11->ep_no));


  VAR_18 = FUNC_6(VAR_16);

  if (VAR_18 >= VAR_11->npkt) {
   VAR_14 = 0;
  } else {
   if (VAR_12 != 0) {
    VAR_14 = (VAR_11->npkt - VAR_18) *
        VAR_11->max_packet_size;

    if (VAR_14 > VAR_12)
     VAR_14 = VAR_12;
   } else {
    VAR_14 = VAR_11->max_packet_size;
   }
  }

  VAR_13 = VAR_11->tx_bytes;
  if (VAR_13 > VAR_14)
   VAR_13 = VAR_14;

  if (VAR_13 != 0) {

   FUNC_12(VAR_10, VAR_11->pc, VAR_11->offset,
       FUNC_0(VAR_11->ep_no), VAR_13);

   VAR_11->tx_bytes -= VAR_13;
   VAR_11->remainder -= VAR_13;
   VAR_11->offset += VAR_13;
   VAR_11->npkt = VAR_18;
  }
  if (VAR_11->tx_bytes != 0)
   goto not_complete;


  if (VAR_11->remainder == 0) {
   if (VAR_11->short_pkt)
    return (0);


  }
 }

 if (!VAR_17--)
  goto not_complete;


 VAR_16 = FUNC_4(VAR_10, FUNC_2(VAR_11->ep_no));

 if (FUNC_6(VAR_16) != 0) {

  FUNC_3(5, "busy ep=%d npkt=%d DIEPTSIZ=0x%08x "
      "DIEPCTL=0x%08x\n", VAR_11->ep_no,
      FUNC_6(VAR_16),
      VAR_16, FUNC_4(VAR_10, FUNC_1(VAR_11->ep_no)));

  goto not_complete;
 }

 FUNC_3(5, "rem=%u ep=%d\n", VAR_11->remainder, VAR_11->ep_no);


 if ((VAR_12 != 0) && ((VAR_11->max_packet_size & 3) == 0)) {


  VAR_15 = VAR_12 / VAR_11->max_packet_size;

  if (VAR_15 > 0x3FE)
   VAR_15 = 0x3FE;

  VAR_13 = VAR_11->remainder;
  if (VAR_13 > 0x7FFFFF)
   VAR_13 = 0x7FFFFF - (0x7FFFFF % VAR_11->max_packet_size);

  VAR_11->npkt = VAR_13 / VAR_11->max_packet_size;
  if (VAR_11->npkt > VAR_15) {
   VAR_11->npkt = VAR_15;
   VAR_13 = VAR_11->max_packet_size * VAR_15;
  } else if ((VAR_13 == 0) || (VAR_13 % VAR_11->max_packet_size)) {

   VAR_11->npkt++;
   VAR_11->short_pkt = 1;
  }
 } else {

  VAR_15 = 1;
  VAR_13 = VAR_11->max_packet_size;
  if (VAR_11->remainder < VAR_13) {

   VAR_11->short_pkt = 1;
   VAR_13 = VAR_11->remainder;
  }
  VAR_11->npkt = 1;
 }
 FUNC_5(VAR_10, FUNC_2(VAR_11->ep_no),
     FUNC_7(1) |
     FUNC_9(VAR_11->npkt) |
     FUNC_8(VAR_13));


 VAR_11->npkt += VAR_15;

 VAR_16 = VAR_10->sc_in_ctl[VAR_11->ep_no];


 if ((VAR_16 & VAR_3) ==
     (VAR_2 << VAR_4)) {

  if (VAR_16 & VAR_6) {
   VAR_16 &= ~VAR_6;
   VAR_16 |= VAR_5;
  } else {
   VAR_16 &= ~VAR_5;
   VAR_16 |= VAR_6;
  }
  VAR_10->sc_in_ctl[VAR_11->ep_no] = VAR_16;
 }


 FUNC_5(VAR_10, FUNC_1(VAR_11->ep_no), VAR_16 |
     VAR_1 | VAR_0);

 VAR_11->tx_bytes = VAR_13;


 if (VAR_11->tx_bytes == 0 &&
     VAR_11->remainder == 0) {
  if (VAR_11->short_pkt)
   return (0);


 }
 goto repeat;

not_complete:
 return (1);
}
