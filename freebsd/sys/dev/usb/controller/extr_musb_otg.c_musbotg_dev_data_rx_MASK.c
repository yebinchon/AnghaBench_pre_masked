
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct usb_page_search {int length; void* buffer; } ;
struct musbotg_td {int channel; int max_frame_size; int short_pkt; int error; int remainder; int offset; int pc; } ;
struct musbotg_softc {void* sc_bounce_buf; int sc_io_hdl; int sc_io_tag; } ;


 int FUNC_0 (int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct musbotg_softc*,int ) ;
 int FUNC_2 (struct musbotg_softc*,int ) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct musbotg_softc*,int ,int) ;
 struct musbotg_softc* FUNC_5 (int ) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int ,int ,int ,void*,int) ;
 int FUNC_8 (int ,int ,int ,void*,int) ;
 int FUNC_9 (struct musbotg_softc*,struct musbotg_td*,int ) ;
 int FUNC_10 (struct musbotg_softc*,struct musbotg_td*) ;
 int FUNC_11 (int ,int,void*,int) ;
 int FUNC_12 (int ,int,struct usb_page_search*) ;

__attribute__((used)) static uint8_t
FUNC_13(struct musbotg_td *VAR_5)
{
 struct usb_page_search VAR_6;
 struct musbotg_softc *VAR_7;
 uint16_t VAR_8;
 uint8_t VAR_9;
 uint8_t VAR_10;
 uint8_t VAR_11;

 VAR_10 = 8;
 VAR_11 = 0;


 VAR_7 = FUNC_5(VAR_5->pc);

 if (VAR_5->channel == -1)
  VAR_5->channel = FUNC_9(VAR_7, VAR_5, 0);


 if (VAR_5->channel == -1)
  return (1);


 FUNC_4(VAR_7, VAR_2, VAR_5->channel);

repeat:

 VAR_9 = FUNC_1(VAR_7, VAR_4);

 FUNC_0(4, "csr=0x%02x\n", VAR_9);


 if (VAR_9 & VAR_0) {

  FUNC_4(VAR_7, VAR_4,
      VAR_1);
 }


 if (!(VAR_9 & VAR_1))
  return (1);


 VAR_8 = FUNC_2(VAR_7, VAR_3);

 FUNC_0(4, "count=0x%04x\n", VAR_8);




 if (VAR_8 != VAR_5->max_frame_size) {
  if (VAR_8 < VAR_5->max_frame_size) {

   VAR_5->short_pkt = 1;
   VAR_11 = 1;
  } else {

   VAR_5->error = 1;
   FUNC_10(VAR_7, VAR_5);
   return (0);
  }
 }

 if (VAR_8 > VAR_5->remainder) {

  VAR_5->error = 1;
  FUNC_10(VAR_7, VAR_5);
  return (0);
 }
 while (VAR_8 > 0) {
  uint32_t VAR_12;

  FUNC_12(VAR_5->pc, VAR_5->offset, &VAR_6);


  if (VAR_6.length > VAR_8) {
   VAR_6.length = VAR_8;
  }

  if (FUNC_6(VAR_6.buffer) & 3) {

   VAR_12 = VAR_8 & ~3;

   if (VAR_12) {

    FUNC_8(VAR_7->sc_io_tag, VAR_7->sc_io_hdl,
        FUNC_3(VAR_5->channel), VAR_7->sc_bounce_buf,
        VAR_12 / 4);
   }
   VAR_12 = VAR_8 & 3;
   if (VAR_12) {

    FUNC_7(VAR_7->sc_io_tag,
        VAR_7->sc_io_hdl, FUNC_3(VAR_5->channel),
        ((void *)&VAR_7->sc_bounce_buf[VAR_8 / 4]), VAR_12);
   }
   FUNC_11(VAR_5->pc, VAR_5->offset,
       VAR_7->sc_bounce_buf, VAR_8);


   VAR_5->offset += VAR_8;
   VAR_5->remainder -= VAR_8;
   break;
  }

  if (VAR_6.length >= 4) {


   FUNC_8(VAR_7->sc_io_tag, VAR_7->sc_io_hdl,
       FUNC_3(VAR_5->channel), VAR_6.buffer,
       VAR_6.length / 4);

   VAR_12 = VAR_6.length & ~3;


   VAR_8 -= VAR_12;
   VAR_5->offset += VAR_12;
   VAR_5->remainder -= VAR_12;
   continue;
  }

  FUNC_7(VAR_7->sc_io_tag, VAR_7->sc_io_hdl,
      FUNC_3(VAR_5->channel), VAR_6.buffer,
      VAR_6.length);


  VAR_8 -= VAR_6.length;
  VAR_5->offset += VAR_6.length;
  VAR_5->remainder -= VAR_6.length;
 }


 FUNC_4(VAR_7, VAR_4, 0);


 if ((VAR_5->remainder == 0) || VAR_11) {
  if (VAR_5->short_pkt) {

   FUNC_10(VAR_7, VAR_5);
   return (0);
  }

 }
 if (--VAR_10) {
  goto repeat;
 }
 return (1);
}
