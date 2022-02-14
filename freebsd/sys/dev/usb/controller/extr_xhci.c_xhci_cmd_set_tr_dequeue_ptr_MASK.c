
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct xhci_trb {void* dwTrb3; void* dwTrb2; int qwTrb0; } ;
struct xhci_softc {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 void* FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct xhci_softc*,struct xhci_trb*,int) ;

__attribute__((used)) static usb_error_t
FUNC_8(struct xhci_softc *VAR_1, uint64_t VAR_2,
    uint16_t VAR_3, uint8_t VAR_4, uint8_t VAR_5)
{
 struct xhci_trb VAR_6;
 uint32_t VAR_7;

 FUNC_0("\n");

 VAR_6.qwTrb0 = FUNC_6(VAR_2);

 VAR_7 = FUNC_1(VAR_3);
 VAR_6.dwTrb2 = FUNC_5(VAR_7);

 VAR_7 = FUNC_4(VAR_0) |
     FUNC_3(VAR_5) |
     FUNC_2(VAR_4);
 VAR_6.dwTrb3 = FUNC_5(VAR_7);

 return (FUNC_7(VAR_1, &VAR_6, 100 ));
}
