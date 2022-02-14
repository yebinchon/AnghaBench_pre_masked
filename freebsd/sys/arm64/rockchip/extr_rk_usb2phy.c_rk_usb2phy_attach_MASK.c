
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_usb2phy_softc {int phy_supply; int clk; int grf; int dev; } ;
struct phynode_init_def {scalar_t__ ofw_node; int id; } ;
struct phynode {int dummy; } ;
typedef scalar_t__ phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,char*,int *) ;
 int FUNC_4 (int ) ;
 struct rk_usb2phy_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;
 scalar_t__ FUNC_7 (scalar_t__,char*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__) ;
 struct phynode* FUNC_10 (int ,int *,struct phynode_init_def*) ;
 int * FUNC_11 (struct phynode*) ;
 int FUNC_12 (int ,scalar_t__,char*,int *) ;
 int FUNC_13 (struct rk_usb2phy_softc*) ;
 int VAR_2 ;
 scalar_t__ FUNC_14 (int ,int *) ;

__attribute__((used)) static int
FUNC_15(device_t VAR_3)
{
 struct rk_usb2phy_softc *VAR_4;
 struct phynode_init_def VAR_5;
 struct phynode *VAR_6;
 phandle_t VAR_7, VAR_8;
 int VAR_9;

 VAR_4 = FUNC_5(VAR_3);
 VAR_4->dev = VAR_3;
 VAR_7 = FUNC_8(VAR_3);

 if (FUNC_14(VAR_3, &VAR_4->grf) != 0) {
  FUNC_6(VAR_3, "Cannot get syscon handle\n");
  return (VAR_0);
 }

 if (FUNC_3(VAR_3, 0, "phyclk", &VAR_4->clk) != 0) {
  FUNC_6(VAR_3, "Cannot get clock\n");
  return (VAR_0);
 }
 VAR_9 = FUNC_2(VAR_4->clk);
 if (VAR_9 != 0) {
  FUNC_6(VAR_3, "Could not enable clock %s\n",
      FUNC_4(VAR_4->clk));
  return (VAR_0);
 }

 VAR_9 = FUNC_13(VAR_4);
 if (VAR_9 != 0)
  return (VAR_9);



 VAR_8 = FUNC_7(VAR_7, "host-port");
 if (VAR_8 == 0) {
  FUNC_6(VAR_3, "Cannot find host-port child node\n");
  return (VAR_0);
 }

 if (!FUNC_9(VAR_8)) {
  FUNC_6(VAR_3, "host-port isn't okay\n");
  return (0);
 }

 FUNC_12(VAR_3, VAR_8, "phy-supply", &VAR_4->phy_supply);
 VAR_5.id = VAR_1;
 VAR_5.ofw_node = VAR_8;
 VAR_6 = FUNC_10(VAR_3, &VAR_2, &VAR_5);
 if (VAR_6 == ((void*)0)) {
  FUNC_6(VAR_3, "failed to create host USB2PHY\n");
  return (VAR_0);
 }
 if (FUNC_11(VAR_6) == ((void*)0)) {
  FUNC_6(VAR_3, "failed to register host USB2PHY\n");
  return (VAR_0);
 }

 FUNC_0(FUNC_1(VAR_8), VAR_3);

 return (0);
}
