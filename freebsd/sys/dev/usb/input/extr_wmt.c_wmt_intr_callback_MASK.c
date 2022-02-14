
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint8_t ;
struct wmt_softc {int isize; int report_id; int * buf; } ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,char*,struct wmt_softc*,int) ;
 int VAR_0 ;
 int FUNC_2 (struct usb_xfer*) ;


 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct usb_page_cache*,int ,int *,int) ;
 int FUNC_5 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_6 (struct usb_xfer*,int ) ;
 int FUNC_7 (struct usb_xfer*) ;
 int FUNC_8 (struct usb_xfer*,int ,int ) ;
 int FUNC_9 (struct usb_xfer*) ;
 struct wmt_softc* FUNC_10 (struct usb_xfer*) ;
 int FUNC_11 (struct usb_xfer*,int*,int *,int *,int *) ;
 int FUNC_12 (struct wmt_softc*,int *,int) ;

__attribute__((used)) static void
FUNC_13(struct usb_xfer *VAR_1, usb_error_t VAR_2)
{
 struct wmt_softc *VAR_3 = FUNC_10(VAR_1);
 struct usb_page_cache *VAR_4;
 uint8_t *VAR_5 = VAR_3->buf;
 int VAR_6;

 FUNC_11(VAR_1, &VAR_6, ((void*)0), ((void*)0), ((void*)0));

 switch (FUNC_2(VAR_1)) {
 case 128:
  VAR_4 = FUNC_6(VAR_1, 0);

  FUNC_1(6, "sc=%p actlen=%d\n", VAR_3, VAR_6);

  if (VAR_6 >= (int)VAR_3->isize || (VAR_6 > 0 && VAR_3->report_id != 0)) {

   if (VAR_6 > (int)VAR_3->isize)
    VAR_6 = VAR_3->isize;

   FUNC_4(VAR_4, 0, VAR_5, VAR_6);


   if (VAR_3->report_id && *VAR_5 != VAR_3->report_id)
    goto tr_ignore;


   if (VAR_6 < VAR_3->isize)
    FUNC_3(VAR_5 + VAR_6, VAR_3->isize - VAR_6);


   if (VAR_3->report_id) {
    VAR_6--;
    VAR_5++;
   }

   FUNC_12(VAR_3, VAR_5, VAR_6);
  } else {
tr_ignore:
   FUNC_0("Ignored transfer, %d bytes\n", VAR_6);
  }

 case 129:
tr_setup:
  FUNC_8(VAR_1, 0, FUNC_7(VAR_1));
  FUNC_5(VAR_1);
  break;
 default:
  if (VAR_2 != VAR_0) {

   FUNC_9(VAR_1);
   goto tr_setup;
  }
  break;
 }
}
