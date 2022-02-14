
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct dwc_otg_td {size_t ep_no; scalar_t__ remainder; int error_any; scalar_t__ max_packet_size; int short_pkt; int offset; int pc; } ;
struct dwc_otg_softc {int sc_last_rx_status; int* sc_out_ctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct dwc_otg_softc*,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 size_t FUNC_8 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (struct dwc_otg_softc*) ;
 int FUNC_10 (struct dwc_otg_softc*,int ,int ,scalar_t__) ;

__attribute__((used)) static uint8_t
FUNC_11(struct dwc_otg_softc *VAR_11, struct dwc_otg_td *VAR_12)
{
 uint32_t VAR_13;
 uint16_t VAR_14;
 uint8_t VAR_15;

 VAR_15 = 0;


 if (VAR_11->sc_last_rx_status == 0)
  goto not_complete;

 if (FUNC_8(VAR_11->sc_last_rx_status) != VAR_12->ep_no)
  goto not_complete;


 if ((VAR_11->sc_last_rx_status & VAR_8) ==
     VAR_10 ||
     (VAR_11->sc_last_rx_status & VAR_8) ==
     VAR_9) {
  if (VAR_12->remainder == 0) {




   FUNC_2(5, "faking complete\n");
   return (0);
  }



  VAR_12->error_any = 1;
  return (0);
 }

 if ((VAR_11->sc_last_rx_status & VAR_8) !=
     VAR_7) {

  FUNC_9(VAR_11);
  goto not_complete;
 }


 VAR_14 = FUNC_7(VAR_11->sc_last_rx_status);


 if (VAR_14 != VAR_12->max_packet_size) {
  if (VAR_14 < VAR_12->max_packet_size) {

   VAR_12->short_pkt = 1;
   VAR_15 = 1;
  } else {

   VAR_12->error_any = 1;


   FUNC_9(VAR_11);
   return (0);
  }
 }

 if (VAR_14 > VAR_12->remainder) {

  VAR_12->error_any = 1;


  FUNC_9(VAR_11);
  return (0);
 }


 FUNC_10(VAR_11, VAR_12->pc, VAR_12->offset, VAR_14);

 VAR_12->remainder -= VAR_14;
 VAR_12->offset += VAR_14;


 FUNC_9(VAR_11);

 VAR_13 = VAR_11->sc_out_ctl[VAR_12->ep_no];


 if ((VAR_13 & VAR_1) ==
     (VAR_0 << VAR_2)) {

  if (VAR_13 & VAR_4) {
   VAR_13 &= ~VAR_4;
   VAR_13 |= VAR_3;
  } else {
   VAR_13 &= ~VAR_3;
   VAR_13 |= VAR_4;
  }
  VAR_11->sc_out_ctl[VAR_12->ep_no] = VAR_13;
 }


 if ((VAR_12->remainder == 0) || VAR_15) {
  if (VAR_12->short_pkt) {

   return (0);
  }

 }

not_complete:


 if (VAR_12->ep_no == 0) {
  FUNC_3(VAR_11, FUNC_1(0),
      FUNC_4(3) |
      FUNC_6(1) |
      FUNC_5(VAR_12->max_packet_size));
 } else {

  FUNC_3(VAR_11, FUNC_1(VAR_12->ep_no),
      FUNC_4(1) |
      FUNC_6(4) |
      FUNC_5(4 *
          ((VAR_12->max_packet_size + 3) & ~3)));
 }
 VAR_13 = VAR_11->sc_out_ctl[VAR_12->ep_no];
 FUNC_3(VAR_11, FUNC_0(VAR_12->ep_no), VAR_13 |
     VAR_6 | VAR_5);

 return (1);
}
