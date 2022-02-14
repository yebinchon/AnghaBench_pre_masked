
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
struct usb_device_request {int dummy; } ;
struct rum_softc {int sc_mtx; int sc_udev; } ;


 int FUNC_0 (int,char*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct rum_softc*,int) ;
 scalar_t__ FUNC_2 (int ,int *,struct usb_device_request*,void*,int ,int *,int) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static usb_error_t
FUNC_4(struct rum_softc *VAR_1,
    struct usb_device_request *VAR_2, void *VAR_3)
{
 usb_error_t VAR_4;
 int VAR_5 = 10;

 while (VAR_5--) {
  VAR_4 = FUNC_2(VAR_1->sc_udev, &VAR_1->sc_mtx,
      VAR_2, VAR_3, 0, ((void*)0), 250 );
  if (VAR_4 == 0)
   break;

  FUNC_0(1, "Control request failed, %s (retrying)\n",
      FUNC_3(VAR_4));
  if (FUNC_1(VAR_1, VAR_0 / 100))
   break;
 }
 return (VAR_4);
}
