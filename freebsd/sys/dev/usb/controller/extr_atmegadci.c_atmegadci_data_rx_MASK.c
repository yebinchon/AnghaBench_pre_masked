
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct usb_page_search {int length; int buffer; } ;
struct atmegadci_td {int ep_no; int remainder; int error; int max_packet_size; int short_pkt; int offset; int pc; } ;
struct atmegadci_softc {int dummy; } ;


 struct atmegadci_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct atmegadci_softc*,int ) ;
 int FUNC_2 (struct atmegadci_softc*,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct atmegadci_softc*,int ,int) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (int ,int,struct usb_page_search*) ;

__attribute__((used)) static uint8_t
FUNC_6(struct atmegadci_td *VAR_11)
{
 struct atmegadci_softc *VAR_12;
 struct usb_page_search VAR_13;
 uint16_t VAR_14;
 uint8_t VAR_15;
 uint8_t VAR_16;
 uint8_t VAR_17;

 VAR_16 = 3;
 VAR_17 = 0;


 VAR_12 = FUNC_0(VAR_11->pc);


 FUNC_3(VAR_12, VAR_10, VAR_11->ep_no);

repeat:


 VAR_15 = FUNC_1(VAR_12, VAR_6);

 FUNC_4(5, "temp=0x%02x rem=%u\n", VAR_15, VAR_11->remainder);

 if (VAR_15 & VAR_9) {
  if (VAR_11->remainder == 0) {




   FUNC_4(5, "faking complete\n");
   return (0);
  }



  VAR_11->error = 1;
  return (0);
 }

 if (!(VAR_15 & (VAR_7 |
     VAR_8))) {

  goto not_complete;
 }

 VAR_14 =
     (FUNC_1(VAR_12, VAR_0) << 8) |
     (FUNC_1(VAR_12, VAR_1));


 VAR_14 &= 0x7FF;


 if (VAR_14 != VAR_11->max_packet_size) {
  if (VAR_14 < VAR_11->max_packet_size) {

   VAR_11->short_pkt = 1;
   VAR_17 = 1;
  } else {

   VAR_11->error = 1;
   return (0);
  }
 }

 if (VAR_14 > VAR_11->remainder) {

  VAR_11->error = 1;
  return (0);
 }
 while (VAR_14 > 0) {
  FUNC_5(VAR_11->pc, VAR_11->offset, &VAR_13);


  if (VAR_13.length > VAR_14) {
   VAR_13.length = VAR_14;
  }

  FUNC_2(VAR_12, VAR_2,
      VAR_13.buffer, VAR_13.length);


  VAR_14 -= VAR_13.length;
  VAR_11->offset += VAR_13.length;
  VAR_11->remainder -= VAR_13.length;
 }


 FUNC_3(VAR_12, VAR_6, VAR_8 ^ 0xFF);


 FUNC_3(VAR_12, VAR_6, VAR_7 ^ 0xFF);


 if ((VAR_11->remainder == 0) || VAR_17) {
  if (VAR_11->short_pkt) {

   return (0);
  }

 }
 if (--VAR_16) {
  goto repeat;
 }
not_complete:

 FUNC_3(VAR_12, VAR_3,
     VAR_5 | VAR_4);
 return (1);
}
