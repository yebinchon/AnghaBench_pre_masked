
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int ss_scl_hcnt; int ss_scl_lcnt; int fs_scl_hcnt; int fs_scl_lcnt; int bus_speed; int ss_sda_hold; int fs_sda_hold; } ;
struct TYPE_8__ {scalar_t__ version; scalar_t__ slave_valid; TYPE_1__ cfg; scalar_t__ intr_mask; int dev; } ;
typedef TYPE_2__ ig4iic_softc_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int ) ;

__attribute__((used)) static int
FUNC_6(ig4iic_softc_t *VAR_37, bool VAR_38)
{
 uint32_t VAR_39;

 VAR_39 = FUNC_3(VAR_37, VAR_18);
 if (FUNC_0(VAR_37->version) && (VAR_39 & VAR_36)) {
  FUNC_4(VAR_37, VAR_18, VAR_8 | VAR_36);
  FUNC_4(VAR_37, VAR_18, 0);
  FUNC_2("i2crst", 1);
  VAR_38 = 1;
 }

 if ((VAR_37->version == VAR_10 || VAR_37->version == VAR_1) && VAR_38) {
  FUNC_4(VAR_37, VAR_24, VAR_32);
  FUNC_4(VAR_37, VAR_24, VAR_34);
 } else if (FUNC_0(VAR_37->version) && VAR_38) {
  FUNC_4(VAR_37, VAR_25, VAR_33);
  FUNC_4(VAR_37, VAR_25, VAR_35);
 }

 if (VAR_37->version == VAR_1)
  VAR_39 = FUNC_3(VAR_37, VAR_15);

 if (VAR_37->version == VAR_10 || VAR_37->version == VAR_1) {
  VAR_39 = FUNC_3(VAR_37, VAR_14);
  VAR_39 = FUNC_3(VAR_37, VAR_21);




  if (VAR_37->version == VAR_10 &&
      (VAR_39 & VAR_9) == 0) {
   VAR_39 |= VAR_9;
   FUNC_4(VAR_37, VAR_21, VAR_39);
   VAR_39 = FUNC_3(VAR_37, VAR_21);
  }
 }

 if (VAR_37->version == VAR_10) {
  VAR_39 = FUNC_3(VAR_37, VAR_30);
  VAR_39 = FUNC_3(VAR_37, VAR_12);
 } else if (FUNC_0(VAR_37->version)) {
  VAR_39 = FUNC_3(VAR_37, VAR_11);
  VAR_39 = FUNC_3(VAR_37, VAR_22);
 }

 if (VAR_37->version == VAR_10 || VAR_37->version == VAR_1) {
  VAR_39 = FUNC_3(VAR_37, VAR_16);
  if (VAR_39 < VAR_2)
   return(VAR_0);
 }

 if (FUNC_5(VAR_37, 0)) {
  FUNC_1(VAR_37->dev, "controller error during attach-1\n");
  return (VAR_0);
 }

 FUNC_3(VAR_37, VAR_13);
 FUNC_4(VAR_37, VAR_23, 0);
 VAR_37->intr_mask = 0;

 FUNC_4(VAR_37, VAR_28, VAR_37->cfg.ss_scl_hcnt);
 FUNC_4(VAR_37, VAR_29, VAR_37->cfg.ss_scl_lcnt);
 FUNC_4(VAR_37, VAR_19, VAR_37->cfg.fs_scl_hcnt);
 FUNC_4(VAR_37, VAR_20, VAR_37->cfg.fs_scl_lcnt);
 FUNC_4(VAR_37, VAR_27,
     (VAR_37->cfg.bus_speed & VAR_6) == VAR_7 ?
       VAR_37->cfg.ss_sda_hold : VAR_37->cfg.fs_sda_hold);
 FUNC_4(VAR_37, VAR_26, 0);
 FUNC_4(VAR_37, VAR_31, 0);

 FUNC_4(VAR_37, VAR_17,
    VAR_3 |
    VAR_5 |
    VAR_4 |
    (VAR_37->cfg.bus_speed & VAR_6));


 VAR_37->slave_valid = 0;

 return (0);
}
