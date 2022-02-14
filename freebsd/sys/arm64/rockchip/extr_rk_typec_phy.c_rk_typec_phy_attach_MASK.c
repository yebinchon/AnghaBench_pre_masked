
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_typec_phy_softc {int phy_ctrl_id; int res; int rst_tcphy; int rst_pipe; int rst_uphy; int tcpdphy_ref; int tcpdcore; int grf; int dev; } ;
struct phynode_init_def {int ofw_node; int id; } ;
struct phynode {int dummy; } ;
typedef int reg_prop ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int,char*,int*,int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ,int *) ;
 scalar_t__ FUNC_5 (int ,int ,char*,int *) ;
 scalar_t__ FUNC_6 (int ,int) ;
 struct rk_typec_phy_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int ,char*,int *) ;
 int FUNC_11 (int,char*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int) ;
 struct phynode* FUNC_14 (int ,int *,struct phynode_init_def*) ;
 int * FUNC_15 (struct phynode*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_16 (int ,int,char*,int *) ;

__attribute__((used)) static int
FUNC_17(device_t VAR_4)
{
 struct rk_typec_phy_softc *VAR_5;
 struct phynode_init_def VAR_6;
 struct phynode *VAR_7;
 phandle_t VAR_8, VAR_9;
 phandle_t VAR_10[4];

 VAR_5 = FUNC_7(VAR_4);
 VAR_5->dev = VAR_4;
 VAR_8 = FUNC_12(VAR_4);






 if (FUNC_1(VAR_8, "reg", VAR_10, sizeof(VAR_10)) <= 0) {
  FUNC_8(VAR_4, "Cannot guess phy controller id\n");
  return (VAR_0);
 }
 switch (VAR_10[1]) {
 case 0xff7c0000:
  VAR_5->phy_ctrl_id = 0;
  break;
 case 0xff800000:
  VAR_5->phy_ctrl_id = 1;
  break;
 default:
  FUNC_8(VAR_4, "Unknown address %x for typec-phy\n", VAR_10[1]);
  return (VAR_0);
 }

 if (FUNC_3(VAR_4, VAR_3, &VAR_5->res) != 0) {
  FUNC_8(VAR_4, "cannot allocate resources for device\n");
  goto fail;
 }

 if (FUNC_16(VAR_4, VAR_8,
     "rockchip,grf", &VAR_5->grf) != 0) {
  FUNC_8(VAR_4, "Cannot get syscon handle\n");
  goto fail;
 }

 if (FUNC_5(VAR_4, 0, "tcpdcore", &VAR_5->tcpdcore) != 0) {
  FUNC_8(VAR_4, "Cannot get tcpdcore clock\n");
  goto fail;
 }
 if (FUNC_5(VAR_4, 0, "tcpdphy-ref", &VAR_5->tcpdphy_ref) != 0) {
  FUNC_8(VAR_4, "Cannot get tcpdphy-ref clock\n");
  goto fail;
 }

 if (FUNC_10(VAR_4, 0, "uphy", &VAR_5->rst_uphy) != 0) {
  FUNC_8(VAR_4, "Cannot get uphy reset\n");
  goto fail;
 }
 if (FUNC_10(VAR_4, 0, "uphy-pipe", &VAR_5->rst_pipe) != 0) {
  FUNC_8(VAR_4, "Cannot get uphy-pipe reset\n");
  goto fail;
 }
 if (FUNC_10(VAR_4, 0, "uphy-tcphy", &VAR_5->rst_tcphy) != 0) {
  FUNC_8(VAR_4, "Cannot get uphy-tcphy reset\n");
  goto fail;
 }





 FUNC_9(VAR_5->rst_uphy);
 FUNC_9(VAR_5->rst_pipe);
 FUNC_9(VAR_5->rst_tcphy);


 if (FUNC_6(VAR_4, VAR_8) != 0) {
  FUNC_8(VAR_4, "clk_set_assigned failed\n");
  goto fail;
 }


 VAR_9 = FUNC_11(VAR_8, "usb3-port");
 if (VAR_9 == 0) {
  FUNC_8(VAR_4, "Cannot find usb3-port child node\n");
  goto fail;
 }



 if (!FUNC_13(VAR_9))
  return (0);

 VAR_6.id = VAR_1;
 VAR_6.ofw_node = VAR_9;
 VAR_7 = FUNC_14(VAR_4, &VAR_2, &VAR_6);
 if (VAR_7 == ((void*)0)) {
  FUNC_8(VAR_4, "failed to create phy usb3-port\n");
  goto fail;
 }
 if (FUNC_15(VAR_7) == ((void*)0)) {
  FUNC_8(VAR_4, "failed to register phy usb3-port\n");
  goto fail;
 }

 FUNC_0(FUNC_2(VAR_9), VAR_4);

 return (0);

fail:
 FUNC_4(VAR_4, VAR_3, &VAR_5->res);

 return (VAR_0);
}
