
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
struct usb_device_request {int dummy; } ;
struct run_softc {int sc_mtx; int sc_udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct run_softc*,int ,char*,int ) ;
 int FUNC_1 (struct run_softc*,int ) ;
 int FUNC_2 (struct run_softc*,int) ;
 scalar_t__ FUNC_3 (int ,int *,struct usb_device_request*,void*,int ,int *,int) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static usb_error_t
FUNC_5(struct run_softc *VAR_2,
    struct usb_device_request *VAR_3, void *VAR_4)
{
 usb_error_t VAR_5;
 int VAR_6 = 10;

 FUNC_1(VAR_2, VAR_0);

 while (VAR_6--) {
  VAR_5 = FUNC_3(VAR_2->sc_udev, &VAR_2->sc_mtx,
      VAR_3, VAR_4, 0, ((void*)0), 250 );
  if (VAR_5 == 0)
   break;
  FUNC_0(VAR_2, VAR_1,
      "Control request failed, %s (retrying)\n",
      FUNC_4(VAR_5));
  FUNC_2(VAR_2, 10);
 }
 return (VAR_5);
}
