
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
struct usb_device_request {int dummy; } ;
struct kue_softc {int sc_ue; } ;


 int FUNC_0 (int *,struct usb_device_request*,void*,int) ;

__attribute__((used)) static int
FUNC_1(struct kue_softc *VAR_0, struct usb_device_request *VAR_1,
    void *VAR_2)
{
 usb_error_t VAR_3;

 VAR_3 = FUNC_0(&VAR_0->sc_ue, VAR_1, VAR_2, 60000);

 return (VAR_3);
}
