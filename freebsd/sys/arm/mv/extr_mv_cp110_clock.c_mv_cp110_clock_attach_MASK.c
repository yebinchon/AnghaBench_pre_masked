
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct mv_cp110_clock_softc {int mtx; int * syscon; int dev; } ;
struct clkdom {int dummy; } ;
struct TYPE_11__ {int parent_cnt; char** parent_names; void* name; scalar_t__ id; } ;
struct clk_gate_def {int mask; int on_value; TYPE_1__ clkdef; scalar_t__ off_value; int shift; int offset; } ;
typedef int device_t ;
typedef int def ;
struct TYPE_12__ {char* name; void* parent_names; } ;
struct TYPE_14__ {TYPE_2__ clkdef; } ;
struct TYPE_13__ {char* name; int shift; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int **) ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 struct clkdom* FUNC_1 (int ) ;
 int FUNC_2 (struct clkdom*) ;
 int FUNC_3 (struct clkdom*) ;
 int FUNC_4 (struct clkdom*,int ) ;
 int FUNC_5 (struct clkdom*,TYPE_5__*) ;
 int FUNC_6 (struct clkdom*,struct clk_gate_def*) ;
 void* VAR_7 ;
 void* VAR_8 ;
 TYPE_5__ VAR_9 ;
 TYPE_5__ VAR_10 ;
 TYPE_5__ VAR_11 ;
 TYPE_5__ VAR_12 ;
 TYPE_5__ VAR_13 ;
 TYPE_3__* VAR_14 ;
 int VAR_15 ;
 int FUNC_7 (int ) ;
 struct mv_cp110_clock_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (struct clk_gate_def*,int ,int) ;
 int FUNC_12 (int *,int ,int *,int ) ;
 void* FUNC_13 (int ,char*) ;
 int FUNC_14 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_15(device_t VAR_16)
{
 struct mv_cp110_clock_softc *VAR_17;
 struct clkdom *VAR_18;
 struct clk_gate_def VAR_19;
 char *VAR_20;
 int VAR_21, VAR_22;

 VAR_17 = FUNC_8(VAR_16);
 VAR_17->dev = VAR_16;

 if (FUNC_0(VAR_17->dev, &VAR_17->syscon) != 0 ||
     VAR_17->syscon == ((void*)0)) {
  FUNC_10(VAR_16, "cannot get syscon for device\n");
  return (VAR_2);
 }

 VAR_21 = FUNC_9(VAR_16);
 if (VAR_21 > 1) {
  FUNC_10(VAR_16, "Bogus cp110-system-controller unit %d\n", VAR_21);
  return (VAR_2);
 }

 FUNC_12(&VAR_17->mtx, FUNC_7(VAR_16), ((void*)0), VAR_3);

 VAR_18 = FUNC_1(VAR_16);
 FUNC_4(VAR_18, VAR_15);

 VAR_20 = FUNC_13(VAR_16, "cp110-pll0");
 VAR_10 = VAR_20;
 FUNC_5(VAR_18, &VAR_10);

 VAR_11.clkdef.name = FUNC_13(VAR_16, "cp110-ppv2");
 VAR_11.clkdef.parent_names = (VAR_21 == 0) ? VAR_5 : VAR_6;
 FUNC_5(VAR_18, &VAR_11);

 VAR_13.clkdef.name = FUNC_13(VAR_16, "cp110-x2core");
 VAR_13.clkdef.parent_names = (VAR_21 == 0) ? VAR_5 : VAR_6;
 FUNC_5(VAR_18, &VAR_13);

 VAR_9.clkdef.name = FUNC_13(VAR_16, "cp110-core");
 VAR_9.clkdef.parent_names = (VAR_21 == 0) ? VAR_7 : VAR_8;
 FUNC_5(VAR_18, &VAR_9);



 VAR_12.clkdef.name = FUNC_13(VAR_16, "cp110-sdio");
 VAR_12.clkdef.parent_names = (VAR_21 == 0) ? VAR_5 : VAR_6;
 FUNC_5(VAR_18, &VAR_12);

 for (VAR_22 = 0; VAR_22 < FUNC_14(VAR_14); VAR_22++) {
  if (VAR_14[VAR_22].name == ((void*)0))
   continue;

  FUNC_11(&VAR_19, 0, sizeof(VAR_19));
  VAR_19.clkdef.id = VAR_1 + VAR_22;
  VAR_19.clkdef.name = FUNC_13(VAR_16, VAR_14[VAR_22].name);
  VAR_19.clkdef.parent_cnt = 1;
  VAR_19.offset = VAR_0;
  VAR_19.shift = VAR_14[VAR_22].shift;
  VAR_19.mask = 1;
  VAR_19.on_value = 1;
  VAR_19.off_value = 0;

  switch (VAR_22) {
  case 132:
  case 134:
  case 129:
   VAR_19.clkdef.parent_names = &VAR_11.clkdef.name;
   break;
  case 128:
   VAR_19.clkdef.parent_names = &VAR_12.clkdef.name;
   break;
  case 133:
  case 130:
  case 131:
  case 136:
  case 135:
   VAR_19.clkdef.parent_names = &VAR_13.clkdef.name;
   break;
  default:
   VAR_19.clkdef.parent_names = &VAR_9.clkdef.name;
   break;
  }

  FUNC_6(VAR_18, &VAR_19);
 }

 FUNC_3(VAR_18);

 if (VAR_4)
  FUNC_2(VAR_18);

 return (0);
}
