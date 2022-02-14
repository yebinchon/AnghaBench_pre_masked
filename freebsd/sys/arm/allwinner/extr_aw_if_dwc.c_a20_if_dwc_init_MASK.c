
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int regulator_t ;
typedef int phandle_t ;
typedef int device_t ;
typedef int clk_t ;


 scalar_t__ FUNC_0 (int ,char*,void**) ;
 int FUNC_1 (int ,char const*,int *) ;
 int FUNC_2 (int ,int ,char*,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int ,char*,int *) ;
 scalar_t__ FUNC_8 (char*,char*) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_0)
{
 const char *VAR_1;
 char *VAR_2;
 clk_t VAR_3, VAR_4;
 regulator_t VAR_5;
 phandle_t VAR_6;
 int VAR_7;

 VAR_6 = FUNC_5(VAR_0);


 if (FUNC_0(VAR_6, "phy-mode", (void **)&VAR_2)) {
  VAR_7 = FUNC_2(VAR_0, 0, "allwinner_gmac_tx", &VAR_3);
  if (VAR_7 != 0) {
   FUNC_4(VAR_0, "could not get tx clk\n");
   return (VAR_7);
  }

  if (FUNC_8(VAR_2, "rgmii") == 0)
   VAR_1 = "gmac_int_tx";
  else
   VAR_1 = "mii_phy_tx";

  VAR_7 = FUNC_1(VAR_0, VAR_1, &VAR_4);
  if (VAR_7 != 0) {
   FUNC_4(VAR_0, "could not get clock '%s'\n",
       VAR_1);
   return (VAR_7);
  }

  VAR_7 = FUNC_3(VAR_3, VAR_4);
  if (VAR_7 != 0) {
   FUNC_4(VAR_0, "could not set tx clk parent\n");
   return (VAR_7);
  }
 }


 if (FUNC_7(VAR_0, 0, "phy-supply", &VAR_5) == 0) {
  VAR_7 = FUNC_6(VAR_5);
  if (VAR_7 != 0) {
   FUNC_4(VAR_0, "could not enable PHY regulator\n");
   return (VAR_7);
  }
 }

 return (0);
}
