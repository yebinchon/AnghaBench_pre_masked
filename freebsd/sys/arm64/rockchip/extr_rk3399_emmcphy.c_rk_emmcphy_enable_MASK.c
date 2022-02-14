
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct rk_emmcphy_softc {int syscon; int * clk; struct rk_emmcphy_conf* phy_conf; } ;
struct rk_emmcphy_conf {int dummy; } ;
struct phynode {int dummy; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ ocd_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
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
 int VAR_16 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 scalar_t__ VAR_17 ;
 int FUNC_4 (int ,int ,char*,int **) ;
 int FUNC_5 (int *,int*) ;
 int VAR_18 ;
 struct rk_emmcphy_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,...) ;
 TYPE_1__* FUNC_8 (int ,int ) ;
 int FUNC_9 (struct phynode*) ;
 intptr_t FUNC_10 (struct phynode*) ;

__attribute__((used)) static int
FUNC_11(struct phynode *VAR_19, bool VAR_20)
{
 struct rk_emmcphy_softc *VAR_21;
 device_t VAR_22;
 intptr_t VAR_23;
 uint64_t VAR_24, VAR_25;
 uint32_t VAR_26, VAR_27;
 int VAR_28;

 VAR_22 = FUNC_9(VAR_19);
 VAR_23 = FUNC_10(VAR_19);
 VAR_21 = FUNC_6(VAR_22);

 if (VAR_17)
  FUNC_7(VAR_22, "Phy id: %ld\n", VAR_23);

 if (VAR_23 != 0) {
  FUNC_7(VAR_22, "Unknown phy: %ld\n", VAR_23);
  return (VAR_1);
 }
 if (VAR_20) {

  VAR_26 = VAR_7;
  VAR_27 = FUNC_1(0, VAR_7);
  FUNC_3(VAR_21->syscon, VAR_3,
      (VAR_26 << 16) | VAR_27);


  VAR_26 = VAR_14 | VAR_15;
  VAR_27 = VAR_14 | FUNC_1(4, VAR_15);
  FUNC_3(VAR_21->syscon, VAR_2,
      (VAR_26 << 16) | VAR_27);
 }


 VAR_26 = VAR_8 | VAR_16;
 VAR_27 = 0;
 FUNC_3(VAR_21->syscon, VAR_3, (VAR_26 << 16) | VAR_27);

 if (VAR_20 == 0)
  return (0);

 VAR_21->phy_conf = (struct rk_emmcphy_conf *)FUNC_8(VAR_22,
     VAR_18)->ocd_data;


 VAR_28 = FUNC_4(VAR_22, 0, "emmcclk", &VAR_21->clk);
 if (VAR_28 != 0) {
  FUNC_7(VAR_22, "cannot get emmcclk clock, continue\n");
  VAR_21->clk = ((void*)0);
 } else
  FUNC_7(VAR_22, "got emmcclk clock\n");

 if (VAR_21->clk) {
  VAR_28 = FUNC_5(VAR_21->clk, &VAR_24);
  if (VAR_28 != 0) {
   FUNC_7(VAR_22, "cannot get clock frequency\n");
   return (VAR_0);
  }
 } else
  VAR_24 = 0;

 if (VAR_24 != 0) {
  if (VAR_24 < 75000000)
   VAR_25 = VAR_13;
  else if (VAR_24 < 125000000)
   VAR_25 = VAR_10;
  else if (VAR_24 < 175000000)
   VAR_25 = VAR_11;
  else
   VAR_25 = VAR_12;
 } else
  VAR_25 = VAR_12;

 FUNC_0(3);


 VAR_26 = VAR_16;
 VAR_27 = VAR_16;
 FUNC_3(VAR_21->syscon, VAR_3, (VAR_26 << 16) | VAR_27);


 FUNC_0(10);
 VAR_27 = FUNC_2(VAR_21->syscon, VAR_4);
 if ((VAR_27 & VAR_5) == 0) {
  FUNC_7(VAR_22, "PHY calibration did not complete\n");
  return (VAR_0);
 }


 VAR_26 = VAR_9;
 VAR_27 = FUNC_1(VAR_25, VAR_9);
 FUNC_3(VAR_21->syscon, VAR_2, (VAR_26 << 16) | VAR_27);


 VAR_26 = VAR_8;
 VAR_27 = VAR_8;
 FUNC_3(VAR_21->syscon, VAR_3, (VAR_26 << 16) | VAR_27);

 if (VAR_24 != 0) {
  FUNC_0(50000);
  VAR_27 = FUNC_2(VAR_21->syscon, VAR_4);
  if ((VAR_27 & VAR_6) == 0) {
   FUNC_7(VAR_22, "DLL loop failed to lock\n");
   return (VAR_0);
  }
 }

 return (0);
}
