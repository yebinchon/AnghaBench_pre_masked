
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct usb_bus {int hw_power_state; } ;
struct ohci_softc {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct ohci_softc* FUNC_1 (struct usb_bus*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct ohci_softc*,int ) ;
 int FUNC_3 (struct ohci_softc*,int ,int) ;
 int FUNC_4 (struct usb_bus*) ;
 int FUNC_5 (struct usb_bus*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_6(struct usb_bus *VAR_9)
{
 struct ohci_softc *VAR_10 = FUNC_1(VAR_9);
 uint32_t VAR_11;
 uint32_t VAR_12;

 FUNC_0("\n");

 FUNC_4(VAR_9);

 VAR_12 = VAR_9->hw_power_state;

 VAR_11 = FUNC_2(VAR_10, VAR_2);
 VAR_11 &= ~(VAR_4 | VAR_3 | VAR_1 | VAR_0);

 if (VAR_12 & VAR_6)
  VAR_11 |= VAR_1;

 if (VAR_12 & VAR_5)
  VAR_11 |= VAR_0;

 if (VAR_12 & VAR_7)
  VAR_11 |= VAR_4;

 if (VAR_12 & VAR_8)
  VAR_11 |= VAR_3 | VAR_4;

 FUNC_3(VAR_10, VAR_2, VAR_11);

 FUNC_5(VAR_9);

 return;
}
