
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ndisusb_ep {int ne_xfer; } ;
struct TYPE_4__ {int ne_xfer; } ;
struct TYPE_3__ {int ne_xfer; } ;
struct ndis_softc {int ndisusb_status; int ndisusb_mtx; struct ndisusb_ep* ndisusb_ep; TYPE_2__ ndisusb_dwrite_ep; TYPE_1__ ndisusb_dread_ep; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ndis_softc* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_4)
{
 int VAR_5;
 struct ndis_softc *VAR_6 = FUNC_0(VAR_4);
 struct ndisusb_ep *VAR_7;

 VAR_6->ndisusb_status |= VAR_1;

 FUNC_3(VAR_4, VAR_3);

 if (VAR_6->ndisusb_status & VAR_2) {
  FUNC_4(VAR_6->ndisusb_dread_ep.ne_xfer, 1);
  FUNC_4(VAR_6->ndisusb_dwrite_ep.ne_xfer, 1);
 }
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_7 = &VAR_6->ndisusb_ep[VAR_5];
  FUNC_4(VAR_7->ne_xfer, 1);
 }

 (void)FUNC_2(VAR_4);

 FUNC_1(&VAR_6->ndisusb_mtx);
 return (0);
}
