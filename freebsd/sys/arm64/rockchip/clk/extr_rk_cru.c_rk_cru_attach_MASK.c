
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rk_cru_softc {int nclks; int * clkdom; scalar_t__ gates; TYPE_2__* clks; int mtx; int res; int dev; } ;
typedef int phandle_t ;
typedef int device_t ;
struct TYPE_3__ {int link; int fract; int fixed; int armclk; int mux; int composite; int pll; } ;
struct TYPE_4__ {int type; TYPE_1__ clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ) ;
 struct rk_cru_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,int ,int *,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (struct rk_cru_softc*) ;
 int VAR_3 ;

int
FUNC_21(device_t VAR_4)
{
 struct rk_cru_softc *VAR_5;
 phandle_t VAR_6;
 int VAR_7;

 VAR_5 = FUNC_8(VAR_4);
 VAR_5->dev = VAR_4;

 VAR_6 = FUNC_12(VAR_4);

 if (FUNC_0(VAR_4, VAR_3, &VAR_5->res) != 0) {
  FUNC_9(VAR_4, "cannot allocate resources for device\n");
  return (VAR_0);
 }

 FUNC_11(&VAR_5->mtx, FUNC_7(VAR_4), ((void*)0), VAR_1);

 VAR_5->clkdom = FUNC_2(VAR_4);
 if (VAR_5->clkdom == ((void*)0))
  FUNC_13("Cannot create clkdom\n");

 for (VAR_7 = 0; VAR_7 < VAR_5->nclks; VAR_7++) {
  switch (VAR_5->clks[VAR_7].type) {
  case 128:
   break;
  case 136:
   FUNC_14(VAR_5->clkdom,
       VAR_5->clks[VAR_7].clk.pll);
   break;
  case 135:
   FUNC_15(VAR_5->clkdom,
       VAR_5->clks[VAR_7].clk.pll);
   break;
  case 133:
   FUNC_17(VAR_5->clkdom,
       VAR_5->clks[VAR_7].clk.composite);
   break;
  case 129:
   FUNC_19(VAR_5->clkdom, VAR_5->clks[VAR_7].clk.mux);
   break;
  case 134:
   FUNC_16(VAR_5->clkdom,
       VAR_5->clks[VAR_7].clk.armclk);
   break;
  case 132:
   FUNC_5(VAR_5->clkdom,
       VAR_5->clks[VAR_7].clk.fixed);
   break;
  case 131:
   FUNC_18(VAR_5->clkdom,
       VAR_5->clks[VAR_7].clk.fract);
   break;
  case 130:
   FUNC_6(VAR_5->clkdom,
       VAR_5->clks[VAR_7].clk.link);
   break;
  default:
   FUNC_9(VAR_4, "Unknown clock type\n");
   return (VAR_0);
  }
 }

 if (VAR_5->gates)
  FUNC_20(VAR_5);

 if (FUNC_4(VAR_5->clkdom) != 0)
  FUNC_13("cannot finalize clkdom initialization\n");

 if (VAR_2)
  FUNC_3(VAR_5->clkdom);

 FUNC_1(VAR_4, VAR_6);


 FUNC_10(VAR_4);

 return (0);
}
