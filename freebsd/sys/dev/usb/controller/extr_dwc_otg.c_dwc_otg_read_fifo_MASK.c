
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct usb_page_search {int length; int buffer; } ;
struct usb_page_cache {int dummy; } ;
struct dwc_otg_softc {int sc_current_rx_fifo; int sc_current_rx_bytes; int sc_bounce_buffer; int sc_io_hdl; int sc_io_tag; } ;


 int FUNC_0 (int ,int ,int,int ,int) ;
 scalar_t__ FUNC_1 (struct usb_page_cache*,int,int,int) ;
 int FUNC_2 (struct usb_page_cache*,int,int ,int) ;
 int FUNC_3 (struct usb_page_cache*,int,struct usb_page_search*) ;

__attribute__((used)) static void
FUNC_4(struct dwc_otg_softc *VAR_0, struct usb_page_cache *VAR_1,
    uint32_t VAR_2, uint32_t VAR_3)
{
 uint32_t VAR_4;


 VAR_4 = VAR_3 & ~3;


 if (VAR_4 != 0 && FUNC_1(VAR_1, VAR_2, VAR_4, 3)) {
  struct usb_page_search VAR_5;


  VAR_3 -= VAR_4;


  do {

   FUNC_3(VAR_1, VAR_2, &VAR_5);

   if (VAR_5.length > VAR_4)
    VAR_5.length = VAR_4;


   FUNC_0(VAR_0->sc_io_tag, VAR_0->sc_io_hdl,
       VAR_0->sc_current_rx_fifo, VAR_5.buffer, VAR_5.length / 4);

   VAR_2 += VAR_5.length;
   VAR_0->sc_current_rx_fifo += VAR_5.length;
   VAR_0->sc_current_rx_bytes -= VAR_5.length;
   VAR_4 -= VAR_5.length;
  } while (VAR_4 != 0);
 }


 if (VAR_3 != 0) {

  FUNC_0(VAR_0->sc_io_tag, VAR_0->sc_io_hdl,
   VAR_0->sc_current_rx_fifo,
   VAR_0->sc_bounce_buffer, (VAR_3 + 3) / 4);


  FUNC_2(VAR_1, VAR_2, VAR_0->sc_bounce_buffer, VAR_3);


  VAR_3 = (VAR_3 + 3) & ~3;


  VAR_0->sc_current_rx_bytes -= VAR_3;
  VAR_0->sc_current_rx_fifo += VAR_3;
 }
}
