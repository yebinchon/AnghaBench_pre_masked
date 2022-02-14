
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int upr_handle; } ;
union usbd_urb {TYPE_1__ uu_pipe; } ;
struct ndisusb_ep {int * ne_xfer; } ;
struct ndis_softc {int dummy; } ;
typedef int irp ;
typedef int int32_t ;
typedef int device_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ndis_softc*) ;
 int FUNC_2 (struct ndis_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ndis_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 struct ndisusb_ep* FUNC_5 (int *,int ) ;
 union usbd_urb* FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int32_t
FUNC_9(irp *VAR_2)
{
 device_t VAR_3 = FUNC_0(VAR_2);
 struct ndis_softc *VAR_4 = FUNC_3(VAR_3);
 struct ndisusb_ep *VAR_5;
 union usbd_urb *VAR_6;

 VAR_6 = FUNC_6(VAR_2);
 VAR_5 = FUNC_5(VAR_2, VAR_6->uu_pipe.upr_handle);
 if (VAR_5 == ((void*)0)) {
  FUNC_4(FUNC_0(VAR_2), "get NULL endpoint info.\n");
  return (VAR_0);
 }

 FUNC_1(VAR_4);
 FUNC_8(VAR_5->ne_xfer[0]);
 FUNC_7(VAR_5->ne_xfer[0]);
 FUNC_2(VAR_4);

 return (VAR_1);
}
