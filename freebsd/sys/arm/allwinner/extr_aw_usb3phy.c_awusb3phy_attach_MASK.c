
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phynode_init_def {void* ofw_node; } ;
struct phynode {int dummy; } ;
struct awusb3phy_softc {int reg; int res; } ;
typedef void* phandle_t ;
typedef int hwreset_t ;
typedef int device_t ;
typedef int clk_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int,int *) ;
 int FUNC_3 (int ) ;
 struct awusb3phy_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int ,int,int *) ;
 void* FUNC_8 (int ) ;
 struct phynode* FUNC_9 (int ,int *,struct phynode_init_def*) ;
 int * FUNC_10 (struct phynode*) ;
 int FUNC_11 (int ,void*,char*,int *) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_3)
{
 struct phynode *VAR_4;
 struct phynode_init_def VAR_5;
 struct awusb3phy_softc *VAR_6;
 clk_t VAR_7;
 hwreset_t VAR_8;
 phandle_t VAR_9;
 int VAR_10, VAR_11;

 VAR_6 = FUNC_4(VAR_3);
 VAR_9 = FUNC_8(VAR_3);

 if (FUNC_0(VAR_3, VAR_1, &VAR_6->res) != 0) {
  FUNC_5(VAR_3, "cannot allocate resources for device\n");
  return (VAR_0);
 }


 for (VAR_11 = 0; FUNC_2(VAR_3, 0, VAR_11, &VAR_7) == 0; VAR_11++) {
  VAR_10 = FUNC_1(VAR_7);
  if (VAR_10 != 0) {
   FUNC_5(VAR_3, "couldn't enable clock %s\n",
       FUNC_3(VAR_7));
   return (VAR_10);
  }
 }


 for (VAR_11 = 0; FUNC_7(VAR_3, 0, VAR_11, &VAR_8) == 0; VAR_11++) {
  VAR_10 = FUNC_6(VAR_8);
  if (VAR_10 != 0) {
   FUNC_5(VAR_3, "couldn't de-assert reset %d\n",
       VAR_11);
   return (VAR_10);
  }
 }


 FUNC_11(VAR_3, VAR_9, "phy-supply", &VAR_6->reg);


 VAR_5.ofw_node = FUNC_8(VAR_3);
 VAR_4 = FUNC_9(VAR_3, &VAR_2,
     &VAR_5);
 if (VAR_4 == ((void*)0)) {
  FUNC_5(VAR_3, "failed to create USB PHY\n");
  return (VAR_0);
 }
 if (FUNC_10(VAR_4) == ((void*)0)) {
  FUNC_5(VAR_3, "failed to create USB PHY\n");
  return (VAR_0);
 }

 return (VAR_10);
}
