
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct uss820dci_td {int ep_index; int remainder; int error; int did_enable; int max_packet_size; int short_pkt; int offset; int pc; } ;
struct uss820dci_softc {int sc_io_hdl; int sc_io_tag; } ;
struct usb_page_search {int length; int buffer; } ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct uss820dci_softc*,int ) ;
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
 int FUNC_3 (struct uss820dci_softc*,int ,int) ;
 int FUNC_4 (int ,int ,int,int ,int) ;
 int FUNC_5 (int ,int,struct usb_page_search*) ;
 int FUNC_6 (int ,int ,int,int ) ;

__attribute__((used)) static uint8_t
FUNC_7(struct uss820dci_softc *VAR_18, struct uss820dci_td *VAR_19)
{
 struct usb_page_search VAR_20;
 uint16_t VAR_21;
 uint8_t VAR_22;
 uint8_t VAR_23;
 uint8_t VAR_24;
 uint8_t VAR_25;
 uint8_t VAR_26;

 VAR_25 = 2;
 VAR_26 = 0;


 FUNC_3(VAR_18, VAR_2, VAR_19->ep_index);


repeat:

 VAR_22 = FUNC_2(VAR_18, VAR_9);

 VAR_23 = FUNC_2(VAR_18, VAR_14);

 FUNC_0(5, "rx_stat=0x%02x rx_flag=0x%02x rem=%u\n",
     VAR_23, VAR_22, VAR_19->remainder);

 if (VAR_23 & (VAR_16 |
     VAR_17 |
     VAR_15)) {
  if (VAR_19->remainder == 0 && VAR_19->ep_index == 0) {




   FUNC_0(5, "faking complete\n");
   return (0);
  }



  VAR_19->error = 1;
  return (0);
 }

 if (VAR_22 & (VAR_12 |
     VAR_13)) {
  FUNC_0(5, "overflow or underflow\n");

  VAR_19->error = 1;
  return (0);
 }

 if (!(VAR_22 & (VAR_10 |
     VAR_11))) {



  if (!VAR_19->did_enable) {
   FUNC_6(FUNC_1(VAR_19->pc),
       VAR_0, 0xFF, VAR_1);
   VAR_19->did_enable = 1;
  }
  return (1);
 }

 VAR_21 = FUNC_2(VAR_18, VAR_5);
 VAR_21 |= (FUNC_2(VAR_18, VAR_4) << 8);
 VAR_21 &= 0x3FF;

 FUNC_0(5, "count=0x%04x\n", VAR_21);


 if (VAR_21 != VAR_19->max_packet_size) {
  if (VAR_21 < VAR_19->max_packet_size) {

   VAR_19->short_pkt = 1;
   VAR_26 = 1;
  } else {

   VAR_19->error = 1;
   return (0);
  }
 }

 if (VAR_21 > VAR_19->remainder) {

  VAR_19->error = 1;
  return (0);
 }
 while (VAR_21 > 0) {
  FUNC_5(VAR_19->pc, VAR_19->offset, &VAR_20);


  if (VAR_20.length > VAR_21) {
   VAR_20.length = VAR_21;
  }

  FUNC_4(VAR_18->sc_io_tag, VAR_18->sc_io_hdl,
      VAR_8 * VAR_3, VAR_20.buffer, VAR_20.length);


  VAR_21 -= VAR_20.length;
  VAR_19->offset += VAR_20.length;
  VAR_19->remainder -= VAR_20.length;
 }


 VAR_24 = FUNC_2(VAR_18, VAR_6);
 VAR_24 |= VAR_7;
 FUNC_3(VAR_18, VAR_6, VAR_24);


 if ((VAR_19->remainder == 0) || VAR_26) {
  if (VAR_19->short_pkt) {

   return (0);
  }

 }
 if (--VAR_25) {
  goto repeat;
 }
 return (1);
}
