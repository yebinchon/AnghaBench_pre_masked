
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct usb_page_search {int length; void* buffer; } ;
struct musbotg_td {int channel; int error; int transaction_started; scalar_t__ remainder; int short_pkt; int max_frame_size; int offset; int dev_addr; int haddr; int hport; int transfer_type; int pc; } ;
struct musbotg_softc {void* sc_bounce_buf; int sc_io_hdl; int sc_io_tag; } ;


 int FUNC_0 (int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct musbotg_softc*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (struct musbotg_softc*,int ,int) ;
 struct musbotg_softc* FUNC_7 (int ) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (int ,int ,int ,void*,int) ;
 int FUNC_10 (int ,int ,int ,void*,int) ;
 int FUNC_11 (struct musbotg_softc*,struct musbotg_td*,int) ;
 int FUNC_12 (struct musbotg_softc*,struct musbotg_td*) ;
 int FUNC_13 (int ,int,void*,int) ;
 int FUNC_14 (int ,int,struct usb_page_search*) ;

__attribute__((used)) static uint8_t
FUNC_15(struct musbotg_td *VAR_12)
{
 struct usb_page_search VAR_13;
 struct musbotg_softc *VAR_14;
 uint16_t VAR_15;
 uint8_t VAR_16, VAR_17;


 VAR_14 = FUNC_7(VAR_12->pc);

 if (VAR_12->channel == -1)
  VAR_12->channel = FUNC_11(VAR_14, VAR_12, 1);


 if (VAR_12->channel == -1)
  return (1);

 FUNC_0(1, "ep_no=%d\n", VAR_12->channel);


 FUNC_6(VAR_14, VAR_7, 0);


 VAR_16 = FUNC_1(VAR_14, VAR_9);
 FUNC_0(4, "csr=0x%02x\n", VAR_16);

 if (VAR_16 & (VAR_4 |
     VAR_2)) {

  FUNC_6(VAR_14, VAR_9, 0);
  VAR_12->error = 1;
 }

 if (VAR_16 & VAR_3 ) {

  if (VAR_16 & VAR_5) {
   VAR_17 = FUNC_1(VAR_14, VAR_8);
   VAR_17 |= VAR_1;
   FUNC_6(VAR_14, VAR_8, VAR_17);
   VAR_16 = FUNC_1(VAR_14, VAR_9);
   if (VAR_16 & VAR_5) {
    VAR_17 = FUNC_1(VAR_14, VAR_8);
    VAR_17 |= VAR_1;
    FUNC_6(VAR_14, VAR_8, VAR_17);
    VAR_16 = FUNC_1(VAR_14, VAR_9);
   }
  }

  VAR_16 &= ~VAR_3;
  FUNC_6(VAR_14, VAR_9, VAR_16);

  VAR_12->error = 1;
 }


 if (VAR_12->error) {
  FUNC_12(VAR_14, VAR_12);
  return (0);
 }







 if (VAR_16 & VAR_5)
  return (1);


 if (VAR_16 & VAR_6)
  return (1);

 if (VAR_12->transaction_started) {

  if (VAR_12->remainder == 0) {
   if (VAR_12->short_pkt) {
    FUNC_12(VAR_14, VAR_12);
    return (0);
   }

  }


  VAR_12->transaction_started = 0;
 }


 VAR_15 = VAR_12->max_frame_size;
 if (VAR_12->remainder < VAR_15) {

  VAR_12->short_pkt = 1;
  VAR_15 = VAR_12->remainder;
 }

 while (VAR_15 > 0) {
  uint32_t VAR_18;

  FUNC_14(VAR_12->pc, VAR_12->offset, &VAR_13);


  if (VAR_13.length > VAR_15) {
   VAR_13.length = VAR_15;
  }

  if (FUNC_8(VAR_13.buffer) & 3) {

   FUNC_13(VAR_12->pc, VAR_12->offset,
       VAR_14->sc_bounce_buf, VAR_15);

   VAR_18 = VAR_15 & ~3;

   if (VAR_18) {

    FUNC_10(VAR_14->sc_io_tag,
        VAR_14->sc_io_hdl, FUNC_2(0),
        VAR_14->sc_bounce_buf, VAR_18 / 4);
   }
   VAR_18 = VAR_15 & 3;
   if (VAR_18) {

    FUNC_9(VAR_14->sc_io_tag, VAR_14->sc_io_hdl,
        FUNC_2(0),
        ((void *)&VAR_14->sc_bounce_buf[VAR_15 / 4]), VAR_18);
   }

   VAR_12->offset += VAR_15;
   VAR_12->remainder -= VAR_15;
   break;
  }

  if (VAR_13.length >= 4) {


   FUNC_10(VAR_14->sc_io_tag, VAR_14->sc_io_hdl,
       FUNC_2(0), VAR_13.buffer,
       VAR_13.length / 4);

   VAR_18 = VAR_13.length & ~3;


   VAR_15 -= VAR_18;
   VAR_12->offset += VAR_18;
   VAR_12->remainder -= VAR_18;
   continue;
  }

  FUNC_9(VAR_14->sc_io_tag, VAR_14->sc_io_hdl,
      FUNC_2(0), VAR_13.buffer,
      VAR_13.length);


  VAR_15 -= VAR_13.length;
  VAR_12->offset += VAR_13.length;
  VAR_12->remainder -= VAR_13.length;
 }


 FUNC_6(VAR_14, FUNC_3(0), VAR_12->dev_addr);
 FUNC_6(VAR_14, FUNC_4(0), VAR_12->haddr);
 FUNC_6(VAR_14, FUNC_5(0), VAR_12->hport);
 FUNC_6(VAR_14, VAR_11, VAR_12->transfer_type);


 FUNC_6(VAR_14, VAR_10, VAR_0);


 FUNC_6(VAR_14, VAR_9,
     VAR_6);

 VAR_12->transaction_started = 1;

 return (1);
}
