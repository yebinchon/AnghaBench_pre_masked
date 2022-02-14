
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct usb_page_search {int length; void* buffer; } ;
struct musbotg_td {int error; int max_frame_size; int remainder; int short_pkt; int offset; int pc; } ;
struct musbotg_softc {int sc_ep0_cmd; void* sc_bounce_buf; int sc_io_hdl; int sc_io_tag; } ;


 int FUNC_0 (int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct musbotg_softc*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct musbotg_softc*,int ,int) ;
 struct musbotg_softc* FUNC_4 (int ) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int ,int ,int ,void*,int) ;
 int FUNC_7 (int ,int ,int ,void*,int) ;
 int FUNC_8 (int ,int,void*,int) ;
 int FUNC_9 (int ,int,struct usb_page_search*) ;

__attribute__((used)) static uint8_t
FUNC_10(struct musbotg_td *VAR_5)
{
 struct usb_page_search VAR_6;
 struct musbotg_softc *VAR_7;
 uint16_t VAR_8;
 uint8_t VAR_9;


 VAR_7 = FUNC_4(VAR_5->pc);


 FUNC_3(VAR_7, VAR_3, 0);


 if (VAR_7->sc_ep0_cmd) {
  FUNC_3(VAR_7, VAR_4, VAR_7->sc_ep0_cmd);
  VAR_7->sc_ep0_cmd = 0;
 }

 VAR_9 = FUNC_1(VAR_7, VAR_4);

 FUNC_0(4, "csr=0x%02x\n", VAR_9);

 if (VAR_9 & (VAR_1 |
     VAR_0)) {




  VAR_5->error = 1;
  return (0);
 }
 if (VAR_9 & VAR_2) {
  return (1);
 }
 VAR_8 = VAR_5->max_frame_size;
 if (VAR_5->remainder < VAR_8) {

  VAR_5->short_pkt = 1;
  VAR_8 = VAR_5->remainder;
 }
 while (VAR_8 > 0) {
  uint32_t VAR_10;

  FUNC_9(VAR_5->pc, VAR_5->offset, &VAR_6);


  if (VAR_6.length > VAR_8) {
   VAR_6.length = VAR_8;
  }

  if (FUNC_5(VAR_6.buffer) & 3) {

   FUNC_8(VAR_5->pc, VAR_5->offset,
       VAR_7->sc_bounce_buf, VAR_8);

   VAR_10 = VAR_8 & ~3;

   if (VAR_10) {

    FUNC_7(VAR_7->sc_io_tag, VAR_7->sc_io_hdl,
        FUNC_2(0), VAR_7->sc_bounce_buf,
        VAR_10 / 4);
   }
   VAR_10 = VAR_8 & 3;
   if (VAR_10) {

    FUNC_6(VAR_7->sc_io_tag, VAR_7->sc_io_hdl,
        FUNC_2(0),
        ((void *)&VAR_7->sc_bounce_buf[VAR_8 / 4]), VAR_10);
   }

   VAR_5->offset += VAR_8;
   VAR_5->remainder -= VAR_8;
   break;
  }

  if (VAR_6.length >= 4) {


   FUNC_7(VAR_7->sc_io_tag, VAR_7->sc_io_hdl,
       FUNC_2(0), VAR_6.buffer,
       VAR_6.length / 4);

   VAR_10 = VAR_6.length & ~3;


   VAR_8 -= VAR_10;
   VAR_5->offset += VAR_10;
   VAR_5->remainder -= VAR_10;
   continue;
  }

  FUNC_6(VAR_7->sc_io_tag, VAR_7->sc_io_hdl,
      FUNC_2(0), VAR_6.buffer, VAR_6.length);


  VAR_8 -= VAR_6.length;
  VAR_5->offset += VAR_6.length;
  VAR_5->remainder -= VAR_6.length;
 }


 if (VAR_5->remainder == 0) {
  if (VAR_5->short_pkt) {
   VAR_7->sc_ep0_cmd = VAR_2;
   return (0);
  }

 }

 FUNC_3(VAR_7, VAR_4,
     VAR_2);

 return (1);
}
