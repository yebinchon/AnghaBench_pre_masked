
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct usb_page_search {int length; void* buffer; } ;
struct musbotg_td {scalar_t__ remainder; int error; int max_frame_size; int short_pkt; int offset; int pc; } ;
struct musbotg_softc {void* sc_bounce_buf; scalar_t__ sc_ep0_cmd; int sc_io_hdl; int sc_io_tag; } ;


 int FUNC_0 (int,char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct musbotg_softc*,int ) ;
 int FUNC_2 (struct musbotg_softc*,int ) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct musbotg_softc*,int ,scalar_t__) ;
 struct musbotg_softc* FUNC_5 (int ) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int ,int ,int ,void*,int) ;
 int FUNC_8 (int ,int ,int ,void*,int) ;
 int FUNC_9 (int ,int,void*,int) ;
 int FUNC_10 (int ,int,struct usb_page_search*) ;

__attribute__((used)) static uint8_t
FUNC_11(struct musbotg_td *VAR_7)
{
 struct usb_page_search VAR_8;
 struct musbotg_softc *VAR_9;
 uint16_t VAR_10;
 uint8_t VAR_11;
 uint8_t VAR_12;


 VAR_9 = FUNC_5(VAR_7->pc);


 FUNC_4(VAR_9, VAR_4, 0);


 if (VAR_9->sc_ep0_cmd) {
  FUNC_4(VAR_9, VAR_6, VAR_9->sc_ep0_cmd);
  VAR_9->sc_ep0_cmd = 0;
 }

 VAR_11 = FUNC_1(VAR_9, VAR_6);

 FUNC_0(4, "csr=0x%02x\n", VAR_11);

 VAR_12 = 0;

 if (VAR_11 & (VAR_3 |
     VAR_2)) {
  if (VAR_7->remainder == 0) {




   FUNC_0(4, "faking complete\n");
   return (0);
  }



  VAR_7->error = 1;
  return (0);
 }
 if (!(VAR_11 & VAR_0)) {
  return (1);
 }

 VAR_10 = FUNC_2(VAR_9, VAR_5);


 if (VAR_10 != VAR_7->max_frame_size) {
  if (VAR_10 < VAR_7->max_frame_size) {

   VAR_7->short_pkt = 1;
   VAR_12 = 1;
  } else {

   VAR_7->error = 1;
   return (0);
  }
 }

 if (VAR_10 > VAR_7->remainder) {

  VAR_7->error = 1;
  return (0);
 }
 while (VAR_10 > 0) {
  uint32_t VAR_13;

  FUNC_10(VAR_7->pc, VAR_7->offset, &VAR_8);


  if (VAR_8.length > VAR_10) {
   VAR_8.length = VAR_10;
  }

  if (FUNC_6(VAR_8.buffer) & 3) {

   VAR_13 = VAR_10 & ~3;

   if (VAR_13) {

    FUNC_8(VAR_9->sc_io_tag, VAR_9->sc_io_hdl,
        FUNC_3(0), VAR_9->sc_bounce_buf,
        VAR_13 / 4);
   }
   VAR_13 = VAR_10 & 3;
   if (VAR_13) {

    FUNC_7(VAR_9->sc_io_tag, VAR_9->sc_io_hdl,
        FUNC_3(0),
        (void *)(&VAR_9->sc_bounce_buf[VAR_10 / 4]), VAR_13);
   }
   FUNC_9(VAR_7->pc, VAR_7->offset,
       VAR_9->sc_bounce_buf, VAR_10);


   VAR_7->offset += VAR_10;
   VAR_7->remainder -= VAR_10;
   break;
  }

  if (VAR_8.length >= 4) {


   FUNC_8(VAR_9->sc_io_tag, VAR_9->sc_io_hdl,
       FUNC_3(0), VAR_8.buffer,
       VAR_8.length / 4);

   VAR_13 = VAR_8.length & ~3;


   VAR_10 -= VAR_13;
   VAR_7->offset += VAR_13;
   VAR_7->remainder -= VAR_13;
   continue;
  }

  FUNC_7(VAR_9->sc_io_tag, VAR_9->sc_io_hdl,
      FUNC_3(0), VAR_8.buffer, VAR_8.length);


  VAR_10 -= VAR_8.length;
  VAR_7->offset += VAR_8.length;
  VAR_7->remainder -= VAR_8.length;
 }


 if ((VAR_7->remainder == 0) || VAR_12) {
  if (VAR_7->short_pkt) {

   VAR_9->sc_ep0_cmd = VAR_1;
   return (0);
  }

 }

 FUNC_4(VAR_9, VAR_6,
     VAR_1);
 return (1);
}
