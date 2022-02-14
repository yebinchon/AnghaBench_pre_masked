
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_list {int phy; int rst; int clk; } ;
struct hwrst_list {int phy; int rst; int clk; } ;
struct generic_ehci_fdt_softc {int phy_list; int rst_list; int clk_list; } ;
struct clk_list {int phy; int rst; int clk; } ;
typedef int phy_t ;
typedef int hwreset_t ;
typedef int device_t ;
typedef int clk_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct phy_list*,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int,int *) ;
 int FUNC_4 (int ) ;
 struct generic_ehci_fdt_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int ,int,int *) ;
 struct phy_list* FUNC_11 (int,int ,int) ;
 int VAR_4 ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ,int ,int,int *) ;
 int FUNC_14 (int ,int ) ;

__attribute__((used)) static int
FUNC_15(device_t VAR_5)
{
 int VAR_6;
 VAR_6 = FUNC_7(VAR_5);
 if (VAR_6 != 0)
  goto error;

 return (0);

error:
 FUNC_8(VAR_5);
 return (VAR_6);
}
