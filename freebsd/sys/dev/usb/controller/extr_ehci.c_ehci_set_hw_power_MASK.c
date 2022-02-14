
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct usb_bus {int hw_power_state; } ;
typedef int ehci_softc_t ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (struct usb_bus*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (struct usb_bus*) ;
 int FUNC_5 (struct usb_bus*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_6(struct usb_bus *VAR_7)
{
 ehci_softc_t *VAR_8 = FUNC_1(VAR_7);
 uint32_t VAR_9;
 uint32_t VAR_10;

 FUNC_0("\n");

 FUNC_4(VAR_7);

 VAR_10 = VAR_7->hw_power_state;

 VAR_9 = FUNC_2(VAR_8, VAR_2);

 VAR_9 &= ~(VAR_0 | VAR_1);

 if (VAR_10 & (VAR_4 |
     VAR_3)) {
  FUNC_0("Async is active\n");
  VAR_9 |= VAR_0;
 }
 if (VAR_10 & (VAR_5 |
     VAR_6)) {
  FUNC_0("Periodic is active\n");
  VAR_9 |= VAR_1;
 }
 FUNC_3(VAR_8, VAR_2, VAR_9);

 FUNC_5(VAR_7);

 return;
}
