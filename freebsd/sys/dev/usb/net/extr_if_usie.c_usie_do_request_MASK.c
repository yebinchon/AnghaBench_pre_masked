
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usie_softc {int sc_mtx; int sc_udev; } ;
struct usb_device_request {int dummy; } ;


 int FUNC_0 (char*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int *,struct usb_device_request*,void*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(struct usie_softc *VAR_1, struct usb_device_request *VAR_2,
    void *VAR_3)
{
 int VAR_4 = 0;
 int VAR_5;

 FUNC_2(&VAR_1->sc_mtx, VAR_0);

 for (VAR_5 = 0; VAR_5 != 10; VAR_5++) {
  VAR_4 = FUNC_4(VAR_1->sc_udev,
      &VAR_1->sc_mtx, VAR_2, VAR_3);
  if (VAR_4 == 0)
   break;

  FUNC_0("Control request failed: %s %d/10\n",
      FUNC_5(VAR_4), VAR_5);

  FUNC_3(&VAR_1->sc_mtx, FUNC_1(10));
 }
 return (VAR_4);
}
