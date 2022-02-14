
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct usb_page_search {int length; void* buffer; } ;
struct musbotg_td {int channel; int transaction_started; int dev_addr; int haddr; int hport; int transfer_type; int error; int max_frame_size; int short_pkt; int remainder; int offset; int pc; } ;
struct musbotg_softc {void* sc_bounce_buf; int sc_io_hdl; int sc_io_tag; } ;


 int FUNC_0 (int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct musbotg_softc*,int ) ;
 int FUNC_2 (struct musbotg_softc*,int ) ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (struct musbotg_softc*,int ,int) ;
 struct musbotg_softc* FUNC_8 (int ) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (int ,int ,int ,void*,int) ;
 int FUNC_11 (int ,int ,int ,void*,int) ;
 int FUNC_12 (struct musbotg_softc*,struct musbotg_td*,int ) ;
 int FUNC_13 (struct musbotg_softc*,struct musbotg_td*) ;
 int FUNC_14 (int ,int,void*,int) ;
 int FUNC_15 (int ,int,struct usb_page_search*) ;

__attribute__((used)) static uint8_t
FUNC_16(struct musbotg_td *VAR_11)
{
 struct usb_page_search VAR_12;
 struct musbotg_softc *VAR_13;
 uint16_t VAR_14;
 uint8_t VAR_15;
 uint8_t VAR_16;


 VAR_13 = FUNC_8(VAR_11->pc);

 if (VAR_11->channel == -1)
  VAR_11->channel = FUNC_12(VAR_13, VAR_11, 0);


 if (VAR_11->channel == -1)
  return (1);

 FUNC_0(1, "ep_no=%d\n", VAR_11->channel);


 FUNC_7(VAR_13, VAR_6, 0);


 VAR_15 = FUNC_1(VAR_13, VAR_10);

 FUNC_0(4, "csr=0x%02x\n", VAR_15);

 VAR_16 = 0;
 if (!VAR_11->transaction_started) {
  VAR_11->transaction_started = 1;

  FUNC_7(VAR_13, VAR_8, VAR_0);

  FUNC_7(VAR_13, FUNC_4(0),
      VAR_11->dev_addr);
  FUNC_7(VAR_13, FUNC_5(0), VAR_11->haddr);
  FUNC_7(VAR_13, FUNC_6(0), VAR_11->hport);
  FUNC_7(VAR_13, VAR_9, VAR_11->transfer_type);

  FUNC_7(VAR_13, VAR_10,
      VAR_3);

  return (1);
 }

 if (VAR_15 & VAR_2) {
  VAR_15 &= ~VAR_3;
  FUNC_7(VAR_13, VAR_10, VAR_15);

  VAR_15 &= ~VAR_2;
  FUNC_7(VAR_13, VAR_10, VAR_15);

  VAR_11->error = 1;
 }


 if (VAR_15 & (VAR_5 |
     VAR_1))
 {

  FUNC_7(VAR_13, VAR_10, 0);
  FUNC_0(1, "error bit set, csr=0x%02x\n", VAR_15);
  VAR_11->error = 1;
 }

 if (VAR_11->error) {
  FUNC_13(VAR_13, VAR_11);
  return (0);
 }

 if (!(VAR_15 & VAR_4))
  return (1);


 VAR_14 = FUNC_2(VAR_13, VAR_7);


 if (VAR_14 != VAR_11->max_frame_size) {
  if (VAR_14 < VAR_11->max_frame_size) {

   VAR_11->short_pkt = 1;
   VAR_16 = 1;
  } else {

   VAR_11->error = 1;
   FUNC_13(VAR_13, VAR_11);
   return (0);
  }
 }

 if (VAR_14 > VAR_11->remainder) {

  VAR_11->error = 1;
  FUNC_13(VAR_13, VAR_11);
  return (0);
 }
 while (VAR_14 > 0) {
  uint32_t VAR_17;

  FUNC_15(VAR_11->pc, VAR_11->offset, &VAR_12);


  if (VAR_12.length > VAR_14) {
   VAR_12.length = VAR_14;
  }

  if (FUNC_9(VAR_12.buffer) & 3) {

   VAR_17 = VAR_14 & ~3;

   if (VAR_17) {

    FUNC_11(VAR_13->sc_io_tag, VAR_13->sc_io_hdl,
        FUNC_3(0), VAR_13->sc_bounce_buf,
        VAR_17 / 4);
   }
   VAR_17 = VAR_14 & 3;
   if (VAR_17) {

    FUNC_10(VAR_13->sc_io_tag, VAR_13->sc_io_hdl,
        FUNC_3(0),
        (void *)(&VAR_13->sc_bounce_buf[VAR_14 / 4]), VAR_17);
   }
   FUNC_14(VAR_11->pc, VAR_11->offset,
       VAR_13->sc_bounce_buf, VAR_14);


   VAR_11->offset += VAR_14;
   VAR_11->remainder -= VAR_14;
   break;
  }

  if (VAR_12.length >= 4) {


   FUNC_11(VAR_13->sc_io_tag, VAR_13->sc_io_hdl,
       FUNC_3(0), VAR_12.buffer,
       VAR_12.length / 4);

   VAR_17 = VAR_12.length & ~3;


   VAR_14 -= VAR_17;
   VAR_11->offset += VAR_17;
   VAR_11->remainder -= VAR_17;
   continue;
  }

  FUNC_10(VAR_13->sc_io_tag, VAR_13->sc_io_hdl,
      FUNC_3(0), VAR_12.buffer, VAR_12.length);


  VAR_14 -= VAR_12.length;
  VAR_11->offset += VAR_12.length;
  VAR_11->remainder -= VAR_12.length;
 }

 VAR_15 &= ~VAR_4;
 FUNC_7(VAR_13, VAR_10, VAR_15);


 if ((VAR_11->remainder == 0) || VAR_16) {
  if (VAR_11->short_pkt) {


   FUNC_13(VAR_13, VAR_11);
   return (0);
  }

 }

 VAR_11->transaction_started = 1;
 FUNC_7(VAR_13, VAR_10,
     VAR_3);

 return (1);
}
