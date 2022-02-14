
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct xhci_trb {int dwTrb3; scalar_t__ dwTrb2; scalar_t__ qwTrb0; } ;
struct xhci_softc {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct xhci_softc*,struct xhci_trb*,int) ;

__attribute__((used)) static usb_error_t
FUNC_6(struct xhci_softc *VAR_2, uint8_t VAR_3,
    uint8_t VAR_4, uint8_t VAR_5)
{
 struct xhci_trb VAR_6;
 uint32_t VAR_7;

 FUNC_0("\n");

 VAR_6.qwTrb0 = 0;
 VAR_6.dwTrb2 = 0;
 VAR_7 = FUNC_3(VAR_1) |
     FUNC_2(VAR_5) |
     FUNC_1(VAR_4);

 if (VAR_3)
  VAR_7 |= VAR_0;

 VAR_6.dwTrb3 = FUNC_4(VAR_7);

 return (FUNC_5(VAR_2, &VAR_6, 100 ));
}
