
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vybrid_ehci_softc {int dev; } ;
typedef int * device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int VAR_4 ;
 int FUNC_3 (struct vybrid_ehci_softc*,int ) ;
 int FUNC_4 (struct vybrid_ehci_softc*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (char*) ;
 int * FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (char*,int) ;

__attribute__((used)) static int
FUNC_9(struct vybrid_ehci_softc *VAR_16)
{
 device_t VAR_17;
 int VAR_18;


 VAR_18 = FUNC_3(VAR_16, VAR_5);
 VAR_18 |= (VAR_8);
 FUNC_4(VAR_16, VAR_5, VAR_18);


 FUNC_0(10000);

 VAR_18 &= ~(VAR_8 | VAR_6);
 FUNC_4(VAR_16, VAR_5, VAR_18);

 VAR_18 = (VAR_0 | VAR_1);
 FUNC_4(VAR_16, VAR_7, VAR_18);


 VAR_17 = FUNC_6(FUNC_5("gpio"), 0);
 if (VAR_17 == ((void*)0)) {
  FUNC_7(VAR_16->dev, "Error: failed to get the GPIO dev\n");
  return (1);
 }


 FUNC_2(VAR_17, VAR_4, VAR_3);
 FUNC_1(VAR_17, VAR_4, VAR_2);


 FUNC_4(VAR_16, VAR_14, 0x00);


 VAR_18 = FUNC_3(VAR_16, VAR_9);
 VAR_18 &= ~(VAR_12);
 FUNC_4(VAR_16, VAR_9, VAR_18);
 return (0);
}
