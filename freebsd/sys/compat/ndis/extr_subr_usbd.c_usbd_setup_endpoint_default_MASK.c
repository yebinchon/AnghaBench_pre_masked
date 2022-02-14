
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef scalar_t__ uint8_t ;
struct ndis_softc {int ndisusb_dwrite_ep; int ndisusb_dread_ep; } ;
typedef int irp ;
typedef int device_t ;


 int FUNC_0 (int *) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 struct ndis_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int * VAR_3 ;
 scalar_t__ FUNC_3 (int *,scalar_t__,int *,int *) ;

__attribute__((used)) static usb_error_t
FUNC_4(irp *VAR_4, uint8_t VAR_5)
{
 device_t VAR_6 = FUNC_0(VAR_4);
 struct ndis_softc *VAR_7 = FUNC_1(VAR_6);
 usb_error_t VAR_8;

 if (VAR_5 > 0)
  FUNC_2(VAR_6, "warning: ifidx > 0 isn't supported.\n");

 VAR_8 = FUNC_3(VAR_4, VAR_5, &VAR_7->ndisusb_dread_ep,
     &VAR_3[VAR_0]);
 if (VAR_8 != VAR_2)
  return (VAR_8);

 VAR_8 = FUNC_3(VAR_4, VAR_5, &VAR_7->ndisusb_dwrite_ep,
     &VAR_3[VAR_1]);
 return (VAR_8);
}
