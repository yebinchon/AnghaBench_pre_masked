
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct usb_page_search {int length; void* buffer; } ;
struct musbotg_td {int channel; int transaction_started; int dev_addr; int haddr; int hport; int transfer_type; int toggle; int error; int max_frame_size; int short_pkt; int remainder; int offset; int pc; int reg_max_packet; } ;
struct musbotg_softc {void* sc_bounce_buf; int sc_io_hdl; int sc_io_tag; } ;


 int FUNC_0 (int,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct musbotg_softc*,int ) ;
 int FUNC_2 (struct musbotg_softc*,int ) ;
 int FUNC_3 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_7 (struct musbotg_softc*,int ,int) ;
 int FUNC_8 (struct musbotg_softc*,int ,int ) ;
 struct musbotg_softc* FUNC_9 (int ) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (int ,int ,int ,void*,int) ;
 int FUNC_12 (int ,int ,int ,void*,int) ;
 int FUNC_13 (struct musbotg_softc*,struct musbotg_td*,int ) ;
 int FUNC_14 (struct musbotg_softc*,struct musbotg_td*) ;
 int FUNC_15 (int ,int,void*,int) ;
 int FUNC_16 (int ,int,struct usb_page_search*) ;

__attribute__((used)) static uint8_t
FUNC_17(struct musbotg_td *VAR_16)
{
 struct usb_page_search VAR_17;
 struct musbotg_softc *VAR_18;
 uint16_t VAR_19;
 uint8_t VAR_20, VAR_21;
 uint8_t VAR_22;
 uint8_t VAR_23;


 VAR_18 = FUNC_9(VAR_16->pc);

 if (VAR_16->channel == -1)
  VAR_16->channel = FUNC_13(VAR_18, VAR_16, 0);


 if (VAR_16->channel == -1)
  return (1);

 FUNC_0(1, "ep_no=%d\n", VAR_16->channel);

 VAR_22 = 8;
 VAR_23 = 0;


 FUNC_7(VAR_18, VAR_9, VAR_16->channel);

repeat:

 VAR_20 = FUNC_1(VAR_18, VAR_12);
 FUNC_0(4, "csr=0x%02x\n", VAR_20);

 if (!VAR_16->transaction_started) {

  FUNC_7(VAR_18, FUNC_4(VAR_16->channel),
      VAR_16->dev_addr);


  FUNC_7(VAR_18, FUNC_5(VAR_16->channel),
      VAR_16->haddr);
  FUNC_7(VAR_18, FUNC_6(VAR_16->channel),
      VAR_16->hport);


  if (VAR_16->transfer_type & VAR_8)
   FUNC_7(VAR_18, VAR_14, 0);
  else
   FUNC_7(VAR_18, VAR_14, VAR_0);


  FUNC_7(VAR_18, VAR_15, VAR_16->transfer_type);


  FUNC_8(VAR_18, VAR_13, VAR_16->reg_max_packet);


  VAR_21 = FUNC_1(VAR_18, VAR_11);
  FUNC_0(4, "csrh=0x%02x\n", VAR_21);

  VAR_21 |= VAR_2;
  if (VAR_16->toggle)
   VAR_21 |= VAR_1;
  else
   VAR_21 &= ~VAR_1;


  FUNC_7(VAR_18, VAR_11, VAR_21);


  FUNC_7(VAR_18, VAR_12,
      VAR_6);

  VAR_16->transaction_started = 1;
  return (1);
 }


 if (VAR_20 & VAR_4) {
  FUNC_0(4, "NAK Timeout\n");
  if (VAR_20 & VAR_6) {
   VAR_20 &= ~VAR_6;
   FUNC_7(VAR_18, VAR_12, VAR_20);

   VAR_20 &= ~VAR_4;
   FUNC_7(VAR_18, VAR_12, VAR_20);
  }

  VAR_16->error = 1;
 }

 if (VAR_20 & VAR_3) {
  FUNC_0(4, "RXERROR\n");
  VAR_16->error = 1;
 }

 if (VAR_20 & VAR_7) {
  FUNC_0(4, "RXSTALL\n");
  VAR_16->error = 1;
 }

 if (VAR_16->error) {
  FUNC_14(VAR_18, VAR_16);
  return (0);
 }

 if (!(VAR_20 & VAR_5)) {

  return (1);
 }

 VAR_16->toggle ^= 1;

 VAR_19 = FUNC_2(VAR_18, VAR_10);
 FUNC_0(4, "count=0x%04x\n", VAR_19);




 if (VAR_19 != VAR_16->max_frame_size) {
  if (VAR_19 < VAR_16->max_frame_size) {

   VAR_16->short_pkt = 1;
   VAR_23 = 1;
  } else {

   VAR_16->error = 1;
   FUNC_14(VAR_18, VAR_16);
   return (0);
  }
 }


 if (VAR_19 > VAR_16->remainder) {

  VAR_16->error = 1;
  FUNC_14(VAR_18, VAR_16);
  return (0);
 }

 while (VAR_19 > 0) {
  uint32_t VAR_24;

  FUNC_16(VAR_16->pc, VAR_16->offset, &VAR_17);


  if (VAR_17.length > VAR_19) {
   VAR_17.length = VAR_19;
  }

  if (FUNC_10(VAR_17.buffer) & 3) {

   VAR_24 = VAR_19 & ~3;

   if (VAR_24) {

    FUNC_12(VAR_18->sc_io_tag, VAR_18->sc_io_hdl,
        FUNC_3(VAR_16->channel), VAR_18->sc_bounce_buf,
        VAR_24 / 4);
   }
   VAR_24 = VAR_19 & 3;
   if (VAR_24) {

    FUNC_11(VAR_18->sc_io_tag,
        VAR_18->sc_io_hdl, FUNC_3(VAR_16->channel),
        ((void *)&VAR_18->sc_bounce_buf[VAR_19 / 4]), VAR_24);
   }
   FUNC_15(VAR_16->pc, VAR_16->offset,
       VAR_18->sc_bounce_buf, VAR_19);


   VAR_16->offset += VAR_19;
   VAR_16->remainder -= VAR_19;
   break;
  }

  if (VAR_17.length >= 4) {


   FUNC_12(VAR_18->sc_io_tag, VAR_18->sc_io_hdl,
       FUNC_3(VAR_16->channel), VAR_17.buffer,
       VAR_17.length / 4);

   VAR_24 = VAR_17.length & ~3;


   VAR_19 -= VAR_24;
   VAR_16->offset += VAR_24;
   VAR_16->remainder -= VAR_24;
   continue;
  }

  FUNC_11(VAR_18->sc_io_tag, VAR_18->sc_io_hdl,
      FUNC_3(VAR_16->channel), VAR_17.buffer,
      VAR_17.length);


  VAR_19 -= VAR_17.length;
  VAR_16->offset += VAR_17.length;
  VAR_16->remainder -= VAR_17.length;
 }


 FUNC_7(VAR_18, VAR_12, 0);


 if ((VAR_16->remainder == 0) || VAR_23) {
  if (VAR_16->short_pkt) {

   FUNC_14(VAR_18, VAR_16);
   return (0);
  }

 }


 VAR_16->transaction_started = 0;

 if (--VAR_22)
  goto repeat;

 return (1);
}
