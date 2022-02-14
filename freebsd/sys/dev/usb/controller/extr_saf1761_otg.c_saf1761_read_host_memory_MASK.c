
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct usb_page_search {int length; scalar_t__ buffer; } ;
struct saf1761_otg_td {int offset; int remainder; int pc; int channel; } ;
struct saf1761_otg_softc {scalar_t__ sc_bounce_buffer; int sc_io_hdl; int sc_io_tag; } ;


 int FUNC_0 (struct saf1761_otg_softc*) ;
 int FUNC_1 (struct saf1761_otg_softc*,int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ,int,scalar_t__,int) ;
 int FUNC_4 (int ,int,scalar_t__,int) ;
 int FUNC_5 (int ,int,struct usb_page_search*) ;

__attribute__((used)) static void
FUNC_6(struct saf1761_otg_softc *VAR_1,
    struct saf1761_otg_td *VAR_2, uint32_t VAR_3)
{
 struct usb_page_search VAR_4;
 uint32_t VAR_5;
 uint32_t VAR_6;

 if (VAR_3 == 0)
  return;

 VAR_5 = FUNC_2(VAR_2->channel);
 FUNC_1(VAR_1, VAR_0, VAR_5);
 FUNC_0(VAR_1);


 while (VAR_3 > 0) {
  FUNC_5(VAR_2->pc, VAR_2->offset, &VAR_4);


  if (VAR_4.length > VAR_3)
   VAR_4.length = VAR_3;


  if (((uintptr_t)VAR_4.buffer) & 3)
   break;

  VAR_6 = VAR_4.length & ~3;
  if (VAR_6 == 0)
   break;

  FUNC_3((VAR_1)->sc_io_tag, (VAR_1)->sc_io_hdl,
      VAR_5, VAR_4.buffer, VAR_6 / 4);

  VAR_3 -= VAR_6;
  VAR_5 += VAR_6;


  VAR_2->remainder -= VAR_6;
  VAR_2->offset += VAR_6;
 }

 if (VAR_3 > 0) {

  FUNC_3((VAR_1)->sc_io_tag, (VAR_1)->sc_io_hdl,
      VAR_5, VAR_1->sc_bounce_buffer, (VAR_3 + 3) / 4);
  FUNC_4(VAR_2->pc, VAR_2->offset,
      VAR_1->sc_bounce_buffer, VAR_3);


  VAR_2->remainder -= VAR_3;
  VAR_2->offset += VAR_3;
 }
}
