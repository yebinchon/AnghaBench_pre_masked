
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
typedef size_t uint16_t ;
struct usb_page_search {unsigned int length; char* buffer; } ;
struct usb_page_cache {int dummy; } ;
struct ucom_softc {int sc_flag; scalar_t__ sc_jitterbuf_in; scalar_t__ sc_jitterbuf_out; char* sc_jitterbuf; struct tty* sc_tty; } ;
struct tty {int dummy; } ;


 int FUNC_0 (char*,struct tty*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (struct ucom_softc*,int ) ;
 scalar_t__ FUNC_2 (struct tty*) ;
 scalar_t__ FUNC_3 (struct tty*) ;
 int FUNC_4 (struct tty*,char,int ) ;
 unsigned int FUNC_5 (struct tty*,char*,unsigned int) ;
 int FUNC_6 (struct tty*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (struct ucom_softc*,int) ;
 int FUNC_8 (struct usb_page_cache*,unsigned int,scalar_t__,unsigned int) ;
 int FUNC_9 (struct usb_page_cache*,unsigned int,struct usb_page_search*) ;

void
FUNC_10(struct ucom_softc *VAR_8, struct usb_page_cache *VAR_9,
    uint32_t VAR_10, uint32_t VAR_11)
{
 struct usb_page_search VAR_12;
 struct tty *VAR_13 = VAR_8->sc_tty;
 char *VAR_14;
 uint32_t VAR_15;

 FUNC_1(VAR_8, VAR_0);

 if (VAR_8->sc_flag & VAR_2) {
  unsigned int VAR_16;



  VAR_16 = (VAR_1 - 1) - VAR_6 + VAR_7;
  VAR_16 %= VAR_1;



  if (VAR_16 > (VAR_1 - VAR_6))
   VAR_16 = (VAR_1 - VAR_6);

  if (VAR_16 > VAR_11)
   VAR_16 = VAR_11;



  FUNC_8(VAR_9, VAR_10, VAR_5 + VAR_6, VAR_16);



  VAR_6 += VAR_16;
  VAR_6 %= VAR_1;

  return;
 }

 if (FUNC_2(VAR_13))
  return;

 if (VAR_11 == 0)
  return;



 while (VAR_11 > 0) {

  FUNC_9(VAR_9, VAR_10, &VAR_12);

  if (VAR_12.length > VAR_11) {
   VAR_12.length = VAR_11;
  }
  VAR_11 -= VAR_12.length;
  VAR_10 += VAR_12.length;



  VAR_14 = VAR_12.buffer;
  VAR_15 = VAR_12.length;



  if (FUNC_3(VAR_13)) {


   VAR_8->sc_jitterbuf_in = 0;
   VAR_8->sc_jitterbuf_out = 0;

   if (FUNC_5(VAR_13, VAR_14, VAR_15) != VAR_15) {
    FUNC_0("tp=%p, data lost\n", VAR_13);
   }
   continue;
  }


  for (VAR_15 = 0; VAR_15 != VAR_12.length; VAR_15++) {
   if (VAR_8->sc_jitterbuf_in != VAR_8->sc_jitterbuf_out ||
       FUNC_4(VAR_13, VAR_14[VAR_15], 0) == -1) {
    uint16_t VAR_17;
    uint16_t VAR_18;

    VAR_18 = VAR_8->sc_jitterbuf_in;
    VAR_17 = VAR_8->sc_jitterbuf_out +
        VAR_4 - 1;
    if (VAR_17 >= VAR_4)
     VAR_17 -= VAR_4;

    for (; VAR_15 != VAR_12.length; VAR_15++) {
     if (VAR_18 == VAR_17)
      break;
     VAR_8->sc_jitterbuf[VAR_18] = VAR_14[VAR_15];
     VAR_18++;
     if (VAR_18 >= VAR_4)
      VAR_18 -= VAR_4;
    }

    VAR_8->sc_jitterbuf_in = VAR_18;


    if (VAR_8->sc_flag & VAR_3)
     FUNC_7(VAR_8, 1);

    FUNC_0("tp=%p, lost %d "
        "chars\n", VAR_13, VAR_12.length - VAR_15);
    break;
   }
  }
 }
 FUNC_6(VAR_13);
}
