
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct usb_page_search {int length; void* buffer; } ;
struct musbotg_td {int channel; int error; int transaction_started; scalar_t__ remainder; int short_pkt; int max_frame_size; int offset; int dev_addr; int haddr; int hport; int transfer_type; int toggle; int reg_max_packet; int pc; } ;
struct musbotg_softc {void* sc_bounce_buf; int sc_io_hdl; int sc_io_tag; } ;


 int FUNC_0 (int,char*,int) ;
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
 int FUNC_1 (struct musbotg_softc*,int ) ;
 int FUNC_2 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_6 (struct musbotg_softc*,int ,int) ;
 int FUNC_7 (struct musbotg_softc*,int ,int ) ;
 struct musbotg_softc* FUNC_8 (int ) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (int ,int ,int ,void*,int) ;
 int FUNC_11 (int ,int ,int ,void*,int) ;
 int FUNC_12 (struct musbotg_softc*,struct musbotg_td*,int) ;
 int FUNC_13 (struct musbotg_softc*,struct musbotg_td*) ;
 int FUNC_14 (int ,int,void*,int) ;
 int FUNC_15 (int ,int,struct usb_page_search*) ;

__attribute__((used)) static uint8_t
FUNC_16(struct musbotg_td *VAR_16)
{
 struct usb_page_search VAR_17;
 struct musbotg_softc *VAR_18;
 uint16_t VAR_19;
 uint8_t VAR_20, VAR_21;


 VAR_18 = FUNC_8(VAR_16->pc);

 if (VAR_16->channel == -1)
  VAR_16->channel = FUNC_12(VAR_18, VAR_16, 1);


 if (VAR_16->channel == -1)
  return (1);

 FUNC_0(1, "ep_no=%d\n", VAR_16->channel);


 FUNC_6(VAR_18, VAR_10, VAR_16->channel);


 VAR_20 = FUNC_1(VAR_18, VAR_12);
 FUNC_0(4, "csr=0x%02x\n", VAR_20);

 if (VAR_20 & (VAR_8 |
     VAR_3)) {

  FUNC_6(VAR_18, VAR_12, 0);
  VAR_16->error = 1;
  FUNC_13(VAR_18, VAR_16);
  return (0);
 }

 if (VAR_20 & VAR_6) {



  if (VAR_20 & VAR_5) {
   VAR_20 |= VAR_4;
   FUNC_6(VAR_18, VAR_12, VAR_20);
   VAR_20 = FUNC_1(VAR_18, VAR_12);
   if (VAR_20 & VAR_5) {
    VAR_20 |= VAR_4;
    FUNC_6(VAR_18, VAR_12, VAR_20);
    VAR_20 = FUNC_1(VAR_18, VAR_12);
   }
  }

  VAR_20 &= ~VAR_6;
  FUNC_6(VAR_18, VAR_12, VAR_20);

  VAR_16->error = 1;
  FUNC_13(VAR_18, VAR_16);
  return (0);
 }







 if (VAR_20 & VAR_5)
  return (1);


 if (VAR_20 & VAR_7)
  return (1);

 if (VAR_16->transaction_started) {

  if (VAR_16->remainder == 0) {
   if (VAR_16->short_pkt) {
    FUNC_13(VAR_18, VAR_16);
    return (0);
   }

  }


  VAR_16->transaction_started = 0;
 }


 VAR_19 = VAR_16->max_frame_size;
 if (VAR_16->remainder < VAR_19) {

  VAR_16->short_pkt = 1;
  VAR_19 = VAR_16->remainder;
 }

 while (VAR_19 > 0) {
  uint32_t VAR_22;

  FUNC_15(VAR_16->pc, VAR_16->offset, &VAR_17);


  if (VAR_17.length > VAR_19) {
   VAR_17.length = VAR_19;
  }

  if (FUNC_9(VAR_17.buffer) & 3) {

   FUNC_14(VAR_16->pc, VAR_16->offset,
       VAR_18->sc_bounce_buf, VAR_19);

   VAR_22 = VAR_19 & ~3;

   if (VAR_22) {

    FUNC_11(VAR_18->sc_io_tag,
        VAR_18->sc_io_hdl, FUNC_2(VAR_16->channel),
        VAR_18->sc_bounce_buf, VAR_22 / 4);
   }
   VAR_22 = VAR_19 & 3;
   if (VAR_22) {

    FUNC_10(VAR_18->sc_io_tag, VAR_18->sc_io_hdl,
        FUNC_2(VAR_16->channel),
        ((void *)&VAR_18->sc_bounce_buf[VAR_19 / 4]), VAR_22);
   }

   VAR_16->offset += VAR_19;
   VAR_16->remainder -= VAR_19;
   break;
  }

  if (VAR_17.length >= 4) {


   FUNC_11(VAR_18->sc_io_tag, VAR_18->sc_io_hdl,
       FUNC_2(VAR_16->channel), VAR_17.buffer,
       VAR_17.length / 4);

   VAR_22 = VAR_17.length & ~3;


   VAR_19 -= VAR_22;
   VAR_16->offset += VAR_22;
   VAR_16->remainder -= VAR_22;
   continue;
  }

  FUNC_10(VAR_18->sc_io_tag, VAR_18->sc_io_hdl,
      FUNC_2(VAR_16->channel), VAR_17.buffer,
      VAR_17.length);


  VAR_19 -= VAR_17.length;
  VAR_16->offset += VAR_17.length;
  VAR_16->remainder -= VAR_17.length;
 }


 FUNC_6(VAR_18, FUNC_3(VAR_16->channel),
     VAR_16->dev_addr);


 FUNC_6(VAR_18, FUNC_4(VAR_16->channel),
     VAR_16->haddr);
 FUNC_6(VAR_18, FUNC_5(VAR_16->channel),
     VAR_16->hport);


 if (VAR_16->transfer_type & VAR_9)
  FUNC_6(VAR_18, VAR_14, 0);
 else
  FUNC_6(VAR_18, VAR_14, VAR_0);


 FUNC_6(VAR_18, VAR_15, VAR_16->transfer_type);


 FUNC_7(VAR_18, VAR_13, VAR_16->reg_max_packet);

 if (!VAR_16->transaction_started) {
  VAR_21 = FUNC_1(VAR_18, VAR_11);
  FUNC_0(4, "csrh=0x%02x\n", VAR_21);

  VAR_21 |= VAR_2;
  if (VAR_16->toggle)
   VAR_21 |= VAR_1;
  else
   VAR_21 &= ~VAR_1;


  FUNC_6(VAR_18, VAR_11, VAR_21);
 }


 FUNC_6(VAR_18, VAR_12,
     VAR_7);


 VAR_16->toggle ^= 1;
 VAR_16->transaction_started = 1;

 return (1);
}
