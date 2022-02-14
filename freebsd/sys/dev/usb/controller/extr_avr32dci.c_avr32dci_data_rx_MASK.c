
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct usb_page_search {scalar_t__ length; int buffer; } ;
struct avr32dci_td {int ep_no; scalar_t__ remainder; int error; scalar_t__ max_packet_size; int short_pkt; int offset; int bank_shift; int pc; } ;
struct avr32dci_softc {scalar_t__ physdata; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct avr32dci_softc* FUNC_4 (int ) ;
 int FUNC_5 (struct avr32dci_softc*,int ) ;
 int FUNC_6 (struct avr32dci_softc*,int ,int) ;
 int FUNC_7 (int,char*,...) ;
 int FUNC_8 (int ,scalar_t__,scalar_t__) ;
 int FUNC_9 (int ,int,struct usb_page_search*) ;

__attribute__((used)) static uint8_t
FUNC_10(struct avr32dci_td *VAR_2)
{
 struct avr32dci_softc *VAR_3;
 struct usb_page_search VAR_4;
 uint16_t VAR_5;
 uint32_t VAR_6;
 uint8_t VAR_7;
 uint8_t VAR_8;

 VAR_7 = 4;
 VAR_8 = 0;


 VAR_3 = FUNC_4(VAR_2->pc);

repeat:


 VAR_6 = FUNC_5(VAR_3, FUNC_1(VAR_2->ep_no));

 FUNC_7(5, "EPTSTA(%u)=0x%08x\n", VAR_2->ep_no, VAR_6);

 if (VAR_6 & VAR_1) {
  if (VAR_2->remainder == 0) {




   FUNC_7(5, "faking complete\n");
   return (0);
  }



  VAR_2->error = 1;
  return (0);
 }

 if (!(VAR_6 & VAR_0)) {

  goto not_complete;
 }

 VAR_5 = FUNC_2(VAR_6);


 if (VAR_5 != VAR_2->max_packet_size) {
  if (VAR_5 < VAR_2->max_packet_size) {

   VAR_2->short_pkt = 1;
   VAR_8 = 1;
  } else {

   VAR_2->error = 1;
   return (0);
  }
 }

 if (VAR_5 > VAR_2->remainder) {

  VAR_2->error = 1;
  return (0);
 }
 while (VAR_5 > 0) {
  FUNC_9(VAR_2->pc, VAR_2->offset, &VAR_4);


  if (VAR_4.length > VAR_5) {
   VAR_4.length = VAR_5;
  }

  FUNC_8(VAR_4.buffer, VAR_3->physdata +
      (FUNC_3(VAR_6) << VAR_2->bank_shift) +
      (VAR_2->ep_no << 16) + (VAR_2->offset % VAR_2->max_packet_size), VAR_4.length);

  VAR_5 -= VAR_4.length;
  VAR_2->offset += VAR_4.length;
  VAR_2->remainder -= VAR_4.length;
 }


 FUNC_6(VAR_3, FUNC_0(VAR_2->ep_no), VAR_0);


 if ((VAR_2->remainder == 0) || VAR_8) {
  if (VAR_2->short_pkt) {

   return (0);
  }

 }
 if (--VAR_7) {
  goto repeat;
 }
not_complete:
 return (1);
}
