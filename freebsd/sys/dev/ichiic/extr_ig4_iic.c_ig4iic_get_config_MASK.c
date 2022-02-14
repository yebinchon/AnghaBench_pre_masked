
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct ig4_hw {scalar_t__ txfifo_depth; scalar_t__ rxfifo_depth; } ;
struct TYPE_6__ {int version; int bus_speed; int ss_scl_hcnt; int ss_scl_lcnt; int fs_scl_hcnt; int fs_scl_lcnt; int ss_sda_hold; int fs_sda_hold; int txfifo_depth; int rxfifo_depth; } ;
struct TYPE_7__ {size_t version; TYPE_1__ cfg; int dev; } ;
typedef TYPE_2__ ig4iic_softc_t ;
typedef int * ACPI_HANDLE ;


 size_t VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
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
 int VAR_17 ;
 size_t VAR_18 ;
 int * FUNC_2 (int ) ;
 scalar_t__ VAR_19 ;
 int FUNC_3 (int ,char*) ;
 int VAR_20 ;
 int FUNC_4 (int *,char*,int*,int*,int*) ;
 int FUNC_5 (struct ig4_hw const*,void*,int*,int*,int*) ;
 struct ig4_hw* VAR_21 ;
 size_t FUNC_6 (struct ig4_hw*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void
FUNC_10(ig4iic_softc_t *VAR_22)
{
 const struct ig4_hw *VAR_23;
 uint32_t VAR_24;




 VAR_22->cfg.version = FUNC_8(VAR_22, VAR_7);
 VAR_22->cfg.bus_speed = FUNC_8(VAR_22, VAR_8) & VAR_2;
 VAR_22->cfg.ss_scl_hcnt =
     FUNC_8(VAR_22, VAR_13) & VAR_16;
 VAR_22->cfg.ss_scl_lcnt =
     FUNC_8(VAR_22, VAR_14) & VAR_16;
 VAR_22->cfg.fs_scl_hcnt =
     FUNC_8(VAR_22, VAR_9) & VAR_16;
 VAR_22->cfg.fs_scl_lcnt =
     FUNC_8(VAR_22, VAR_10) & VAR_16;
 VAR_22->cfg.ss_sda_hold = VAR_22->cfg.fs_sda_hold =
     FUNC_8(VAR_22, VAR_12) & VAR_17;

 if (VAR_22->cfg.bus_speed != VAR_3)
  VAR_22->cfg.bus_speed = VAR_1;


 if (VAR_22->version == VAR_5 || VAR_22->version == VAR_0) {
  VAR_24 = FUNC_8(VAR_22, VAR_6);
  if (FUNC_1(VAR_24) != 0)
   VAR_22->cfg.txfifo_depth = FUNC_1(VAR_24);
  if (FUNC_0(VAR_24) != 0)
   VAR_22->cfg.rxfifo_depth = FUNC_0(VAR_24);
 } else {






  VAR_24 = FUNC_8(VAR_22, VAR_15);
  FUNC_9(VAR_22, VAR_15, VAR_24 | VAR_4);
  VAR_22->cfg.txfifo_depth =
      (FUNC_8(VAR_22, VAR_15) & VAR_4) + 1;
  FUNC_9(VAR_22, VAR_15, VAR_24);
  VAR_24 = FUNC_8(VAR_22, VAR_11);
  FUNC_9(VAR_22, VAR_11, VAR_24 | VAR_4);
  VAR_22->cfg.rxfifo_depth =
      (FUNC_8(VAR_22, VAR_11) & VAR_4) + 1;
  FUNC_9(VAR_22, VAR_11, VAR_24);
 }


 if (VAR_20 < 2 && VAR_22->version < FUNC_6(VAR_21)) {
  VAR_23 = &VAR_21[VAR_22->version];
  VAR_22->cfg.bus_speed = VAR_1;
  FUNC_5(VAR_23, VAR_3, &VAR_22->cfg.ss_scl_hcnt,
      &VAR_22->cfg.ss_scl_lcnt, &VAR_22->cfg.ss_sda_hold);
  FUNC_5(VAR_23, VAR_1, &VAR_22->cfg.fs_scl_hcnt,
      &VAR_22->cfg.fs_scl_lcnt, &VAR_22->cfg.fs_sda_hold);
  if (VAR_23->txfifo_depth != 0)
   VAR_22->cfg.txfifo_depth = VAR_23->txfifo_depth;
  if (VAR_23->rxfifo_depth != 0)
   VAR_22->cfg.rxfifo_depth = VAR_23->rxfifo_depth;
 } else if (VAR_20 == 2) {
  VAR_22->cfg.bus_speed = VAR_3;
  VAR_22->cfg.ss_scl_hcnt = VAR_22->cfg.fs_scl_hcnt = 100;
  VAR_22->cfg.ss_scl_lcnt = VAR_22->cfg.fs_scl_lcnt = 125;
  if (VAR_22->version == VAR_18)
   VAR_22->cfg.ss_sda_hold = VAR_22->cfg.fs_sda_hold = 28;
 }
 if (VAR_19) {
  FUNC_3(VAR_22->dev, "Controller parameters:\n");
  FUNC_7("  Speed: %s\n",
      VAR_22->cfg.bus_speed == VAR_3 ? "Std" : "Fast");
  FUNC_7("  Regs:  HCNT  :LCNT  :SDAHLD\n");
  FUNC_7("  Std:   0x%04hx:0x%04hx:0x%04hx\n",
      VAR_22->cfg.ss_scl_hcnt, VAR_22->cfg.ss_scl_lcnt,
      VAR_22->cfg.ss_sda_hold);
  FUNC_7("  Fast:  0x%04hx:0x%04hx:0x%04hx\n",
      VAR_22->cfg.fs_scl_hcnt, VAR_22->cfg.fs_scl_lcnt,
      VAR_22->cfg.fs_sda_hold);
  FUNC_7("  FIFO:  RX:0x%04x: TX:0x%04x\n",
      VAR_22->cfg.rxfifo_depth, VAR_22->cfg.txfifo_depth);
 }
}
