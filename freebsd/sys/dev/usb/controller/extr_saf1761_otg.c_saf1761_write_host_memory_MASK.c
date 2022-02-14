
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct usb_page_search {int length; scalar_t__ buffer; } ;
struct saf1761_otg_td {int offset; int remainder; int pc; int channel; } ;
struct saf1761_otg_softc {scalar_t__ sc_bounce_buffer; int sc_io_hdl; int sc_io_tag; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int,scalar_t__,int) ;
 int FUNC_2 (int ,int,scalar_t__,int) ;
 int FUNC_3 (int ,int,struct usb_page_search*) ;

__attribute__((used)) static void
FUNC_4(struct saf1761_otg_softc *VAR_0,
    struct saf1761_otg_td *VAR_1, uint32_t VAR_2)
{
 struct usb_page_search VAR_3;
 uint32_t VAR_4;
 uint32_t VAR_5;

 if (VAR_2 == 0)
  return;

 VAR_4 = FUNC_0(VAR_1->channel);


 while (VAR_2 > 0) {
  FUNC_3(VAR_1->pc, VAR_1->offset, &VAR_3);


  if (VAR_3.length > VAR_2)
   VAR_3.length = VAR_2;


  if (((uintptr_t)VAR_3.buffer) & 3)
   break;

  VAR_5 = VAR_3.length & ~3;
  if (VAR_5 == 0)
   break;

  FUNC_1((VAR_0)->sc_io_tag, (VAR_0)->sc_io_hdl,
      VAR_4, VAR_3.buffer, VAR_5 / 4);

  VAR_2 -= VAR_5;
  VAR_4 += VAR_5;


  VAR_1->remainder -= VAR_5;
  VAR_1->offset += VAR_5;
 }
 if (VAR_2 > 0) {

  FUNC_2(VAR_1->pc, VAR_1->offset, VAR_0->sc_bounce_buffer, VAR_2);
  FUNC_1((VAR_0)->sc_io_tag, (VAR_0)->sc_io_hdl,
      VAR_4, VAR_0->sc_bounce_buffer, (VAR_2 + 3) / 4);


  VAR_1->remainder -= VAR_2;
  VAR_1->offset += VAR_2;
 }
}
