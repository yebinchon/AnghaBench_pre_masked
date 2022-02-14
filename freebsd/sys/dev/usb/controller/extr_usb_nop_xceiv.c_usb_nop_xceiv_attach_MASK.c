
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct usb_nop_xceiv_softc {scalar_t__ clk_freq; int vcc_supply; int clk; int dev; } ;
struct phynode_init_def {int ofw_node; scalar_t__ id; } ;
struct phynode {int dummy; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,scalar_t__*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,char*,int *) ;
 struct usb_nop_xceiv_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;
 struct phynode* FUNC_7 (int ,int *,struct phynode_init_def*) ;
 int * FUNC_8 (struct phynode*) ;
 int FUNC_9 (int ,int ,char*,int *) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_10(device_t VAR_2)
{
 struct usb_nop_xceiv_softc *VAR_3;
 struct phynode *VAR_4;
 struct phynode_init_def VAR_5;
 phandle_t VAR_6;
 int VAR_7;

 VAR_3 = FUNC_4(VAR_2);
 VAR_3->dev = VAR_2;
 VAR_6 = FUNC_6(VAR_2);


 FUNC_1(VAR_6, "clock-frequency", &VAR_3->clk_freq, sizeof(uint32_t));

 VAR_7 = FUNC_3(VAR_2, VAR_6, "main_clk", &VAR_3->clk);
 if (VAR_7 != 0 && VAR_3->clk_freq != 0) {
  FUNC_5(VAR_2, "clock property is mandatory if clock-frequency is present\n");
  return (VAR_0);
 }

 FUNC_9(VAR_2, VAR_6, "vcc-supply", &VAR_3->vcc_supply);

 VAR_5.id = 0;
 VAR_5.ofw_node = VAR_6;
 VAR_4 = FUNC_7(VAR_2, &VAR_1,
     &VAR_5);
 if (VAR_4 == ((void*)0)) {
  FUNC_5(VAR_2, "failed to create USB NOP PHY\n");
  return (VAR_0);
 }
 if (FUNC_8(VAR_4) == ((void*)0)) {
  FUNC_5(VAR_2, "failed to create USB NOP PHY\n");
  return (VAR_0);
 }

 FUNC_0(FUNC_2(VAR_6), VAR_2);

 return (0);
}
