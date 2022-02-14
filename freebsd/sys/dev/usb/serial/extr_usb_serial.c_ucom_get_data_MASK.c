
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef unsigned int uint32_t ;
struct usb_page_search {unsigned int length; int buffer; } ;
struct usb_page_cache {int dummy; } ;
struct ucom_softc {int sc_flag; struct tty* sc_tty; } ;
struct tty {int dummy; } ;


 int FUNC_0 (char*,unsigned int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ucom_softc*,int ) ;
 scalar_t__ FUNC_2 (struct tty*) ;
 unsigned int FUNC_3 (struct tty*,int ,unsigned int) ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_4 (struct usb_page_cache*,unsigned int,scalar_t__,unsigned int) ;
 int FUNC_5 (struct usb_page_cache*,unsigned int,struct usb_page_search*) ;

uint8_t
FUNC_6(struct ucom_softc *VAR_7, struct usb_page_cache *VAR_8,
    uint32_t VAR_9, uint32_t VAR_10, uint32_t *VAR_11)
{
 struct usb_page_search VAR_12;
 struct tty *VAR_13 = VAR_7->sc_tty;
 uint32_t VAR_14;
 uint32_t VAR_15;

 FUNC_1(VAR_7, VAR_0);

 if (VAR_7->sc_flag & VAR_2) {
  unsigned int VAR_16;



  VAR_16 = VAR_5 - VAR_6;
  VAR_16 %= VAR_1;



  if (VAR_16 > (VAR_1 - VAR_6))
   VAR_16 = (VAR_1 - VAR_6);

  if (VAR_16 > VAR_10)
   VAR_16 = VAR_10;



  FUNC_4(VAR_8, VAR_9, VAR_4 + VAR_6, VAR_16);



  VAR_6 += VAR_16;
  VAR_6 %= VAR_1;



  *VAR_11 = VAR_16;

  return (VAR_16 ? 1 : 0);
 }

 if (FUNC_2(VAR_13) ||
     !(VAR_7->sc_flag & VAR_3)) {
  VAR_11[0] = 0;
  return (0);
 }
 VAR_15 = VAR_9;

 while (VAR_10 != 0) {

  FUNC_5(VAR_8, VAR_9, &VAR_12);

  if (VAR_12.length > VAR_10) {
   VAR_12.length = VAR_10;
  }

  VAR_14 = FUNC_3(VAR_13, VAR_12.buffer, VAR_12.length);

  VAR_9 += VAR_14;
  VAR_10 -= VAR_14;

  if (VAR_14 < VAR_12.length) {

   break;
  }
 }

 VAR_11[0] = VAR_9 - VAR_15;

 FUNC_0("cnt=%d\n", VAR_11[0]);

 if (VAR_11[0] == 0) {
  return (0);
 }
 return (1);
}
