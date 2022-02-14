
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_7__ {int (* write_reg ) (struct ixgbe_hw*,int,int ,int) ;int (* read_reg ) (struct ixgbe_hw*,int,int ,int*) ;} ;
struct TYPE_8__ {TYPE_3__ ops; } ;
struct TYPE_5__ {scalar_t__ (* read ) (struct ixgbe_hw*,int,int*) ;} ;
struct TYPE_6__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_4__ phy; TYPE_2__ eeprom; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_6 (struct ixgbe_hw*,int*,int*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct ixgbe_hw*,int,int ,int*) ;
 int FUNC_9 (struct ixgbe_hw*,int,int ,int) ;
 int FUNC_10 (struct ixgbe_hw*,int,int ,int*) ;
 scalar_t__ FUNC_11 (struct ixgbe_hw*,int,int*) ;
 scalar_t__ FUNC_12 (struct ixgbe_hw*,int,int*) ;
 scalar_t__ FUNC_13 (struct ixgbe_hw*,int,int*) ;
 scalar_t__ FUNC_14 (struct ixgbe_hw*,int,int*) ;
 int FUNC_15 (struct ixgbe_hw*,int,int ,int) ;

s32 FUNC_16(struct ixgbe_hw *VAR_14)
{
 u16 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 bool VAR_20 = VAR_0;
 u16 VAR_21, VAR_22;
 u16 VAR_23 = 0;
 s32 VAR_24 = VAR_11;
 u32 VAR_25;

 FUNC_0("ixgbe_reset_phy_nl");


 if (FUNC_5(VAR_14))
  goto out;

 VAR_14->phy.ops.read_reg(VAR_14, VAR_8,
        VAR_9, &VAR_23);


 VAR_14->phy.ops.write_reg(VAR_14, VAR_8,
         VAR_9,
         (VAR_23 | VAR_10));

 for (VAR_25 = 0; VAR_25 < 100; VAR_25++) {
  VAR_14->phy.ops.read_reg(VAR_14, VAR_8,
         VAR_9, &VAR_23);
  if ((VAR_23 & VAR_10) == 0)
   break;
  FUNC_7(10);
 }

 if ((VAR_23 & VAR_10) != 0) {
  FUNC_1("PHY reset did not complete.\n");
  VAR_24 = VAR_7;
  goto out;
 }


 VAR_24 = FUNC_6(VAR_14, &VAR_21,
            &VAR_22);
 if (VAR_24 != VAR_11)
  goto out;

 VAR_24 = VAR_14->eeprom.ops.read(VAR_14, VAR_22, &VAR_19);
 VAR_22++;
 while (!VAR_20) {



  VAR_24 = VAR_14->eeprom.ops.read(VAR_14, VAR_22, &VAR_17);
  if (VAR_24)
   goto err_eeprom;
  VAR_16 = (VAR_17 & VAR_2) >>
      VAR_3;
  VAR_18 = VAR_17 & VAR_5;
  switch (VAR_16) {
  case 128:
   VAR_22++;
   FUNC_2("DELAY: %d MS\n", VAR_18);
   FUNC_7(VAR_18);
   break;
  case 129:
   FUNC_1("DATA:\n");
   VAR_22++;
   VAR_24 = VAR_14->eeprom.ops.read(VAR_14, VAR_22,
            &VAR_15);
   if (VAR_24)
    goto err_eeprom;
   VAR_22++;
   for (VAR_25 = 0; VAR_25 < VAR_18; VAR_25++) {
    VAR_24 = VAR_14->eeprom.ops.read(VAR_14, VAR_22,
             &VAR_17);
    if (VAR_24)
     goto err_eeprom;
    VAR_14->phy.ops.write_reg(VAR_14, VAR_15,
            VAR_12, VAR_17);
    FUNC_3("Wrote %4.4x to %4.4x\n", VAR_17,
       VAR_15);
    VAR_22++;
    VAR_15++;
   }
   break;
  case 130:
   VAR_22++;
   FUNC_1("CONTROL:\n");
   if (VAR_18 == VAR_1) {
    FUNC_1("EOL\n");
    VAR_20 = VAR_13;
   } else if (VAR_18 == VAR_4) {
    FUNC_1("SOL\n");
   } else {
    FUNC_1("Bad control value\n");
    VAR_24 = VAR_7;
    goto out;
   }
   break;
  default:
   FUNC_1("Bad control type\n");
   VAR_24 = VAR_7;
   goto out;
  }
 }

out:
 return VAR_24;

err_eeprom:
 FUNC_4(VAR_6,
        "eeprom read at offset %d failed", VAR_22);
 return VAR_7;
}
