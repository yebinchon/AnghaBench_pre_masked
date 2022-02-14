
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct usb_page_search {int length; scalar_t__ buffer; } ;
struct saf1761_otg_td {int offset; int remainder; int pc; } ;
struct saf1761_otg_softc {scalar_t__ sc_bounce_buffer; int sc_io_hdl; int sc_io_tag; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,scalar_t__,int) ;
 int FUNC_1 (int ,int,scalar_t__,int) ;
 int FUNC_2 (int ,int,struct usb_page_search*) ;

__attribute__((used)) static void
FUNC_3(struct saf1761_otg_softc *VAR_1,
    struct saf1761_otg_td *VAR_2, uint32_t VAR_3)
{
 struct usb_page_search VAR_4;
 uint32_t VAR_5;


 while (VAR_3 > 0) {
  FUNC_2(VAR_2->pc, VAR_2->offset, &VAR_4);


  if (VAR_4.length > VAR_3)
   VAR_4.length = VAR_3;


  if (((uintptr_t)VAR_4.buffer) & 3)
   break;

  VAR_5 = VAR_4.length & ~3;
  if (VAR_5 == 0)
   break;

  FUNC_0((VAR_1)->sc_io_tag, (VAR_1)->sc_io_hdl,
      VAR_0, VAR_4.buffer, VAR_5 / 4);

  VAR_3 -= VAR_5;


  VAR_2->remainder -= VAR_5;
  VAR_2->offset += VAR_5;
 }

 if (VAR_3 > 0) {

  FUNC_0((VAR_1)->sc_io_tag, (VAR_1)->sc_io_hdl,
      VAR_0, VAR_1->sc_bounce_buffer, (VAR_3 + 3) / 4);
  FUNC_1(VAR_2->pc, VAR_2->offset,
      VAR_1->sc_bounce_buffer, VAR_3);


  VAR_2->remainder -= VAR_3;
  VAR_2->offset += VAR_3;
 }
}
