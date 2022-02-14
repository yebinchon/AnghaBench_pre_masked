
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef int uint8_t ;
typedef int uint32_t ;
struct xhci_trb {int dwTrb3; scalar_t__ dwTrb2; scalar_t__ qwTrb0; } ;
struct xhci_softc {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct xhci_softc*,struct xhci_trb*,int) ;

__attribute__((used)) static usb_error_t
FUNC_6(struct xhci_softc *VAR_1, uint8_t *VAR_2)
{
 struct xhci_trb VAR_3;
 uint32_t VAR_4;
 usb_error_t VAR_5;

 FUNC_0("\n");

 VAR_3.qwTrb0 = 0;
 VAR_3.dwTrb2 = 0;
 VAR_3.dwTrb3 = FUNC_3(FUNC_2(VAR_0));

 VAR_5 = FUNC_5(VAR_1, &VAR_3, 100 );
 if (VAR_5)
  goto done;

 VAR_4 = FUNC_4(VAR_3.dwTrb3);

 *VAR_2 = FUNC_1(VAR_4);

done:
 return (VAR_5);
}
