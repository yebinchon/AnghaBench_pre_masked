
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct usb_page_search {scalar_t__ length; int buffer; } ;
struct atmegadci_td {int ep_no; scalar_t__ remainder; int error; scalar_t__ max_packet_size; int short_pkt; int offset; int pc; } ;
struct atmegadci_softc {int dummy; } ;


 struct atmegadci_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct atmegadci_softc*,int ) ;
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
 int FUNC_2 (struct atmegadci_softc*,int ,int) ;
 int FUNC_3 (struct atmegadci_softc*,int ,int ,scalar_t__) ;
 int FUNC_4 (int,char*,int,scalar_t__) ;
 int FUNC_5 (int ,int ,struct usb_page_search*) ;

__attribute__((used)) static uint8_t
FUNC_6(struct atmegadci_td *VAR_10)
{
 struct atmegadci_softc *VAR_11;
 struct usb_page_search VAR_12;
 uint16_t VAR_13;
 uint8_t VAR_14;
 uint8_t VAR_15;

 VAR_14 = 3;


 VAR_11 = FUNC_0(VAR_10->pc);


 FUNC_2(VAR_11, VAR_8, VAR_10->ep_no);

repeat:


 VAR_15 = FUNC_1(VAR_11, VAR_4);

 FUNC_4(5, "temp=0x%02x rem=%u\n", VAR_15, VAR_10->remainder);

 if (VAR_15 & VAR_6) {




  VAR_10->error = 1;
  return (0);
 }

 VAR_15 = FUNC_1(VAR_11, VAR_9);
 if (VAR_15 & 3) {

  goto not_complete;
 }

 VAR_13 = VAR_10->max_packet_size;
 if (VAR_10->remainder < VAR_13) {

  VAR_10->short_pkt = 1;
  VAR_13 = VAR_10->remainder;
 }
 while (VAR_13 > 0) {

  FUNC_5(VAR_10->pc, VAR_10->offset, &VAR_12);


  if (VAR_12.length > VAR_13) {
   VAR_12.length = VAR_13;
  }

  FUNC_3(VAR_11, VAR_0,
      VAR_12.buffer, VAR_12.length);


  VAR_13 -= VAR_12.length;
  VAR_10->offset += VAR_12.length;
  VAR_10->remainder -= VAR_12.length;
 }


 FUNC_2(VAR_11, VAR_4, 0xFF ^ VAR_7);


 FUNC_2(VAR_11, VAR_4, 0xFF ^ VAR_5);


 if (VAR_10->remainder == 0) {
  if (VAR_10->short_pkt) {
   return (0);
  }

 }
 if (--VAR_14) {
  goto repeat;
 }
not_complete:

 FUNC_2(VAR_11, VAR_1,
     VAR_2 | VAR_3);
 return (1);
}
