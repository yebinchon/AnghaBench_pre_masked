
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct ndisusb_ep {int * ne_xfer; } ;
struct ndis_softc {int dummy; } ;
struct TYPE_5__ {int irp_cancelirql; void* irp_cancel; } ;
typedef TYPE_1__ irp ;
typedef int device_t ;
typedef int device_object ;


 struct ndisusb_ep* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ndis_softc*) ;
 int FUNC_4 (struct ndis_softc*) ;
 void* VAR_0 ;
 struct ndis_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(device_object *VAR_1, irp *VAR_2)
{
 device_t VAR_3 = FUNC_1(VAR_2);
 struct ndis_softc *VAR_4 = FUNC_5(VAR_3);
 struct ndisusb_ep *VAR_5 = FUNC_0(VAR_2);

 if (VAR_5 == ((void*)0)) {
  VAR_2->irp_cancel = VAR_0;
  FUNC_2(VAR_2->irp_cancelirql);
  return;
 }





 FUNC_3(VAR_4);
 FUNC_7(VAR_5->ne_xfer[0]);
 FUNC_6(VAR_5->ne_xfer[0]);
 FUNC_4(VAR_4);

 VAR_2->irp_cancel = VAR_0;
 FUNC_2(VAR_2->irp_cancelirql);
}
