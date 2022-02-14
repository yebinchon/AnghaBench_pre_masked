
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct ubt_softc {int dummy; } ;


 int FUNC_0 (struct ubt_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct usb_xfer*) ;


 int FUNC_2 (struct usb_xfer*,int) ;
 int FUNC_3 (struct usb_xfer*) ;
 int FUNC_4 (struct usb_xfer*) ;
 int FUNC_5 (struct usb_xfer*,int,int ) ;
 struct ubt_softc* FUNC_6 (struct usb_xfer*) ;
 int FUNC_7 (struct usb_xfer*,int*,int *,int *,int*) ;

__attribute__((used)) static void
FUNC_8(struct usb_xfer *VAR_1, usb_error_t VAR_2)
{
 struct ubt_softc *VAR_3 = FUNC_6(VAR_1);
 int VAR_4;
 int VAR_5, VAR_6;

 FUNC_7(VAR_1, &VAR_5, ((void*)0), ((void*)0), &VAR_6);

 switch (FUNC_1(VAR_1)) {
 case 128:
  for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4 ++)
   if (FUNC_2(VAR_1, VAR_4) < 0)
    break;


 case 129:
read_next:
  for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4 ++)
   FUNC_5(VAR_1, VAR_4,
       FUNC_4(VAR_1));

  FUNC_3(VAR_1);
  break;

 default:
                if (VAR_2 != VAR_0) {
                        FUNC_0(VAR_3);
                        goto read_next;
                }


  break;
 }
}
