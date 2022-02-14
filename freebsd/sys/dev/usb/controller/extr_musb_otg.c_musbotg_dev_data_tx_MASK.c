
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct usb_page_search {int length; void* buffer; } ;
struct musbotg_td {int channel; int max_frame_size; int remainder; int short_pkt; int offset; int reg_max_packet; int pc; } ;
struct musbotg_softc {void* sc_bounce_buf; int sc_io_hdl; int sc_io_tag; } ;


 int FUNC_0 (int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct musbotg_softc*,int ) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct musbotg_softc*,int ,int) ;
 int FUNC_4 (struct musbotg_softc*,int ,int ) ;
 struct musbotg_softc* FUNC_5 (int ) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int ,int ,int ,void*,int) ;
 int FUNC_8 (int ,int ,int ,void*,int) ;
 int FUNC_9 (struct musbotg_softc*,struct musbotg_td*,int) ;
 int FUNC_10 (struct musbotg_softc*,struct musbotg_td*) ;
 int FUNC_11 (int ,int,void*,int) ;
 int FUNC_12 (int ,int,struct usb_page_search*) ;

__attribute__((used)) static uint8_t
FUNC_13(struct musbotg_td *VAR_6)
{
 struct usb_page_search VAR_7;
 struct musbotg_softc *VAR_8;
 uint16_t VAR_9;
 uint8_t VAR_10;
 uint8_t VAR_11;

 VAR_11 = 8;


 VAR_8 = FUNC_5(VAR_6->pc);

 if (VAR_6->channel == -1)
  VAR_6->channel = FUNC_9(VAR_8, VAR_6, 1);


 if (VAR_6->channel == -1)
  return (1);


 FUNC_3(VAR_8, VAR_3, VAR_6->channel);

repeat:


 VAR_10 = FUNC_1(VAR_8, VAR_4);

 FUNC_0(4, "csr=0x%02x\n", VAR_10);

 if (VAR_10 & (VAR_0 |
     VAR_2)) {

  FUNC_3(VAR_8, VAR_4, 0);
 }
 if (VAR_10 & VAR_1) {
  return (1);
 }

 VAR_9 = VAR_6->max_frame_size;
 if (VAR_6->remainder < VAR_9) {

  VAR_6->short_pkt = 1;
  VAR_9 = VAR_6->remainder;
 }
 while (VAR_9 > 0) {
  uint32_t VAR_12;

  FUNC_12(VAR_6->pc, VAR_6->offset, &VAR_7);


  if (VAR_7.length > VAR_9) {
   VAR_7.length = VAR_9;
  }

  if (FUNC_6(VAR_7.buffer) & 3) {

   FUNC_11(VAR_6->pc, VAR_6->offset,
       VAR_8->sc_bounce_buf, VAR_9);

   VAR_12 = VAR_9 & ~3;

   if (VAR_12) {

    FUNC_8(VAR_8->sc_io_tag,
        VAR_8->sc_io_hdl, FUNC_2(VAR_6->channel),
        VAR_8->sc_bounce_buf, VAR_12 / 4);
   }
   VAR_12 = VAR_9 & 3;
   if (VAR_12) {

    FUNC_7(VAR_8->sc_io_tag, VAR_8->sc_io_hdl,
        FUNC_2(VAR_6->channel),
        ((void *)&VAR_8->sc_bounce_buf[VAR_9 / 4]), VAR_12);
   }

   VAR_6->offset += VAR_9;
   VAR_6->remainder -= VAR_9;
   break;
  }

  if (VAR_7.length >= 4) {


   FUNC_8(VAR_8->sc_io_tag, VAR_8->sc_io_hdl,
       FUNC_2(VAR_6->channel), VAR_7.buffer,
       VAR_7.length / 4);

   VAR_12 = VAR_7.length & ~3;


   VAR_9 -= VAR_12;
   VAR_6->offset += VAR_12;
   VAR_6->remainder -= VAR_12;
   continue;
  }

  FUNC_7(VAR_8->sc_io_tag, VAR_8->sc_io_hdl,
      FUNC_2(VAR_6->channel), VAR_7.buffer,
      VAR_7.length);


  VAR_9 -= VAR_7.length;
  VAR_6->offset += VAR_7.length;
  VAR_6->remainder -= VAR_7.length;
 }


 FUNC_4(VAR_8, VAR_5, VAR_6->reg_max_packet);


 FUNC_3(VAR_8, VAR_4,
     VAR_1);


 if (VAR_6->remainder == 0) {
  if (VAR_6->short_pkt) {
   FUNC_10(VAR_8, VAR_6);
   return (0);
  }

 }
 if (--VAR_11) {
  goto repeat;
 }
 return (1);
}
