
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clknode_init_def {int id; int parent_cnt; int * parent_names; int name; } ;
struct clknode {int dummy; } ;
struct clkdom {int dummy; } ;
struct aw_gmacclk_sc {int tx_delay; int rx_delay; int clkdev; int reg; } ;
typedef int phandle_t ;
typedef int device_t ;
typedef int def ;
typedef int clk_t ;
typedef int bus_size_t ;
typedef int bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int*,int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,int ,int,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ) ;
 struct clkdom* FUNC_5 (int ) ;
 int FUNC_6 (struct clkdom*) ;
 scalar_t__ FUNC_7 (struct clkdom*) ;
 struct clknode* FUNC_8 (struct clkdom*,int *,struct clknode_init_def*) ;
 struct aw_gmacclk_sc* FUNC_9 (struct clknode*) ;
 int FUNC_10 (struct clkdom*,struct clknode*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*,...) ;
 int * FUNC_13 (int,int ,int ) ;
 int FUNC_14 (struct clknode_init_def*,int ,int) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,char*,char*,int*) ;
 scalar_t__ FUNC_17 (int ,int ,int *,int *,int *) ;

__attribute__((used)) static int
FUNC_18(device_t VAR_6)
{
 struct clknode_init_def VAR_7;
 struct aw_gmacclk_sc *VAR_8;
 struct clkdom *VAR_9;
 struct clknode *VAR_10;
 clk_t VAR_11;
 bus_addr_t VAR_12;
 bus_size_t VAR_13;
 phandle_t VAR_14;
 int VAR_15, VAR_16, VAR_17;

 VAR_14 = FUNC_15(VAR_6);

 if (FUNC_17(VAR_14, 0, &VAR_12, &VAR_13, ((void*)0)) != 0) {
  FUNC_12(VAR_6, "cannot parse 'reg' property\n");
  return (VAR_1);
 }

 VAR_15 = FUNC_16(VAR_14, "clocks",
     "#clock-cells", &VAR_16);
 if (VAR_15 != 0 || VAR_16 != VAR_0) {
  FUNC_12(VAR_6, "couldn't find parent clocks\n");
  return (VAR_1);
 }

 VAR_9 = FUNC_5(VAR_6);

 FUNC_14(&VAR_7, 0, sizeof(VAR_7));
 VAR_15 = FUNC_3(VAR_6, VAR_14, &VAR_7.name);
 if (VAR_15 != 0) {
  FUNC_12(VAR_6, "cannot parse clock name\n");
  VAR_15 = VAR_1;
  goto fail;
 }
 VAR_7.id = 1;
 VAR_7.parent_names = FUNC_13(sizeof(char *) * VAR_16, VAR_2, VAR_3);
 for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++) {
  VAR_15 = FUNC_1(VAR_6, 0, VAR_17, &VAR_11);
  if (VAR_15 != 0) {
   FUNC_12(VAR_6, "cannot get clock %d\n", VAR_15);
   goto fail;
  }
  VAR_7.parent_names[VAR_17] = FUNC_2(VAR_11);
  FUNC_4(VAR_11);
 }
 VAR_7.parent_cnt = VAR_16;

 VAR_10 = FUNC_8(VAR_9, &VAR_4, &VAR_7);
 if (VAR_10 == ((void*)0)) {
  FUNC_12(VAR_6, "cannot create clknode\n");
  VAR_15 = VAR_1;
  goto fail;
 }

 VAR_8 = FUNC_9(VAR_10);
 VAR_8->reg = VAR_12;
 VAR_8->clkdev = FUNC_11(VAR_6);
 VAR_8->tx_delay = VAR_8->rx_delay = -1;
 FUNC_0(VAR_14, "tx-delay", &VAR_8->tx_delay, sizeof(VAR_8->tx_delay));
 FUNC_0(VAR_14, "rx-delay", &VAR_8->rx_delay, sizeof(VAR_8->rx_delay));

 FUNC_10(VAR_9, VAR_10);

 if (FUNC_7(VAR_9) != 0) {
  FUNC_12(VAR_6, "cannot finalize clkdom initialization\n");
  VAR_15 = VAR_1;
  goto fail;
 }

 if (VAR_5)
  FUNC_6(VAR_9);

 return (0);

fail:
 return (VAR_15);
}
