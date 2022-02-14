
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct usb_page_search {scalar_t__ length; int buffer; } ;
struct avr32dci_td {int ep_no; int error; scalar_t__ max_packet_size; scalar_t__ remainder; int short_pkt; int offset; int bank_shift; int pc; } ;
struct avr32dci_softc {scalar_t__ physdata; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct avr32dci_softc* FUNC_3 (int ) ;
 int FUNC_4 (struct avr32dci_softc*,int ) ;
 int FUNC_5 (struct avr32dci_softc*,int ,int ) ;
 int FUNC_6 (int,char*,int,int) ;
 int FUNC_7 (scalar_t__,int ,scalar_t__) ;
 int FUNC_8 (int ,int,struct usb_page_search*) ;

__attribute__((used)) static uint8_t
FUNC_9(struct avr32dci_td *VAR_3)
{
 struct avr32dci_softc *VAR_4;
 struct usb_page_search VAR_5;
 uint16_t VAR_6;
 uint8_t VAR_7;
 uint32_t VAR_8;

 VAR_7 = 4;


 VAR_4 = FUNC_3(VAR_3->pc);

repeat:


 VAR_8 = FUNC_4(VAR_4, FUNC_1(VAR_3->ep_no));

 FUNC_6(5, "EPTSTA(%u)=0x%08x\n", VAR_3->ep_no, VAR_8);

 if (VAR_8 & VAR_1) {




  VAR_3->error = 1;
  return (0);
 }
 if (VAR_8 & VAR_2) {

  goto not_complete;
 }
 VAR_6 = VAR_3->max_packet_size;
 if (VAR_3->remainder < VAR_6) {

  VAR_3->short_pkt = 1;
  VAR_6 = VAR_3->remainder;
 }
 while (VAR_6 > 0) {

  FUNC_8(VAR_3->pc, VAR_3->offset, &VAR_5);


  if (VAR_5.length > VAR_6) {
   VAR_5.length = VAR_6;
  }

  FUNC_7(VAR_4->physdata +
      (FUNC_2(VAR_8) << VAR_3->bank_shift) +
      (VAR_3->ep_no << 16) + (VAR_3->offset % VAR_3->max_packet_size),
      VAR_5.buffer, VAR_5.length);

  VAR_6 -= VAR_5.length;
  VAR_3->offset += VAR_5.length;
  VAR_3->remainder -= VAR_5.length;
 }


 FUNC_5(VAR_4, FUNC_0(VAR_3->ep_no), VAR_0);


 if (VAR_3->remainder == 0) {
  if (VAR_3->short_pkt) {
   return (0);
  }

 }
 if (--VAR_7) {
  goto repeat;
 }
not_complete:
 return (1);
}
