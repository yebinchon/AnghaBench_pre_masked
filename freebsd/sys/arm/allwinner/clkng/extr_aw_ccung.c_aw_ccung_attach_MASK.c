
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct aw_ccung_softc {int nclks; scalar_t__ resets; int * clkdom; scalar_t__ gates; TYPE_2__* clks; int mtx; int res; int dev; } ;
typedef int device_t ;
struct TYPE_3__ {int nmm; int np; int mipi; int frac; int prediv_mux; int m; int nm; int nkmp; int fixed; int div; int mux; } ;
struct TYPE_4__ {int type; TYPE_1__ clk; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct aw_ccung_softc*) ;
 int FUNC_1 (struct aw_ccung_softc*) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_10 (int ,int ,int *) ;
 int * FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int ) ;
 struct aw_ccung_softc* FUNC_20 (int ) ;
 int FUNC_21 (int ,char*) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int *,int ,int *,int ) ;
 int FUNC_24 (char*) ;

int
FUNC_25(device_t VAR_4)
{
 struct aw_ccung_softc *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_20(VAR_4);
 VAR_5->dev = VAR_4;

 if (FUNC_10(VAR_4, VAR_2, &VAR_5->res) != 0) {
  FUNC_21(VAR_4, "cannot allocate resources for device\n");
  return (VAR_0);
 }

 FUNC_23(&VAR_5->mtx, FUNC_19(VAR_4), ((void*)0), VAR_1);

 VAR_5->clkdom = FUNC_11(VAR_4);
 if (VAR_5->clkdom == ((void*)0))
  FUNC_24("Cannot create clkdom\n");

 for (VAR_6 = 0; VAR_6 < VAR_5->nclks; VAR_6++) {
  switch (VAR_5->clks[VAR_6].type) {
  case 128:
   break;
  case 134:
   FUNC_18(VAR_5->clkdom, VAR_5->clks[VAR_6].clk.mux);
   break;
  case 139:
   FUNC_16(VAR_5->clkdom, VAR_5->clks[VAR_6].clk.div);
   break;
  case 138:
   FUNC_17(VAR_5->clkdom,
       VAR_5->clks[VAR_6].clk.fixed);
   break;
  case 133:
   FUNC_5(VAR_5->clkdom, VAR_5->clks[VAR_6].clk.nkmp);
   break;
  case 132:
   FUNC_6(VAR_5->clkdom, VAR_5->clks[VAR_6].clk.nm);
   break;
  case 136:
   FUNC_3(VAR_5->clkdom, VAR_5->clks[VAR_6].clk.m);
   break;
  case 129:
   FUNC_9(VAR_5->clkdom,
       VAR_5->clks[VAR_6].clk.prediv_mux);
   break;
  case 137:
   FUNC_2(VAR_5->clkdom, VAR_5->clks[VAR_6].clk.frac);
   break;
  case 135:
   FUNC_4(VAR_5->clkdom, VAR_5->clks[VAR_6].clk.mipi);
   break;
  case 130:
   FUNC_8(VAR_5->clkdom, VAR_5->clks[VAR_6].clk.np);
   break;
  case 131:
   FUNC_7(VAR_5->clkdom, VAR_5->clks[VAR_6].clk.nmm);
   break;
  }
 }

 if (VAR_5->gates)
  FUNC_1(VAR_5);
 if (FUNC_13(VAR_5->clkdom) != 0)
  FUNC_24("cannot finalize clkdom initialization\n");

 FUNC_15(VAR_5->clkdom);
 FUNC_0(VAR_5);
 FUNC_14(VAR_5->clkdom);

 if (VAR_3)
  FUNC_12(VAR_5->clkdom);


 if (VAR_5->resets)
  FUNC_22(VAR_4);

 return (0);
}
