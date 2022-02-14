
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_9__ {int (* write_reg ) (struct ixgbe_hw*,int ,int ,int) ;int (* read_reg ) (struct ixgbe_hw*,int ,int ,int*) ;} ;
struct TYPE_10__ {int media_type; TYPE_4__ ops; } ;
struct TYPE_7__ {scalar_t__ (* prot_autoc_write ) (struct ixgbe_hw*,int,int) ;scalar_t__ (* prot_autoc_read ) (struct ixgbe_hw*,int*,int*) ;} ;
struct TYPE_8__ {scalar_t__ type; TYPE_2__ ops; } ;
struct TYPE_6__ {int requested_mode; scalar_t__ strict_ieee; } ;
struct ixgbe_hw {TYPE_5__ phy; TYPE_3__ mac; TYPE_1__ fc; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (struct ixgbe_hw*,int ) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_4 (struct ixgbe_hw*,int ,int) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*) ;
 int VAR_18 ;




 scalar_t__ VAR_19 ;





 scalar_t__ FUNC_6 (struct ixgbe_hw*,int*,int*) ;
 int FUNC_7 (struct ixgbe_hw*,int ,int ,int*) ;
 scalar_t__ FUNC_8 (struct ixgbe_hw*,int,int) ;
 int FUNC_9 (struct ixgbe_hw*,int ,int ,int) ;

s32 FUNC_10(struct ixgbe_hw *VAR_20)
{
 s32 VAR_21 = VAR_15;
 u32 VAR_22 = 0, VAR_23 = 0;
 u16 VAR_24 = 0;
 bool VAR_25 = VAR_0;

 FUNC_0("ixgbe_setup_fc_generic");


 if (VAR_20->fc.strict_ieee && VAR_20->fc.requested_mode == 134) {
  FUNC_2(VAR_5,
      "ixgbe_fc_rx_pause not valid in strict IEEE mode\n");
  VAR_21 = VAR_7;
  goto out;
 }





 if (VAR_20->fc.requested_mode == VAR_18)
  VAR_20->fc.requested_mode = 136;






 switch (VAR_20->phy.media_type) {
 case 132:

  VAR_21 = VAR_20->mac.ops.prot_autoc_read(VAR_20, &VAR_25, &VAR_23);
  if (VAR_21 != VAR_15)
   goto out;



 case 129:
 case 128:
 case 130:
  VAR_22 = FUNC_3(VAR_20, VAR_10);

  break;
 case 131:
  VAR_20->phy.ops.read_reg(VAR_20, VAR_8,
         VAR_9, &VAR_24);
  break;
 default:
  break;
 }
 switch (VAR_20->fc.requested_mode) {
 case 135:

  VAR_22 &= ~(VAR_12 | VAR_11);
  if (VAR_20->phy.media_type == 132)
   VAR_23 &= ~(VAR_3 |
        VAR_2);
  else if (VAR_20->phy.media_type == 131)
   VAR_24 &= ~(VAR_17 | VAR_16);
  break;
 case 133:




  VAR_22 |= VAR_11;
  VAR_22 &= ~VAR_12;
  if (VAR_20->phy.media_type == 132) {
   VAR_23 |= VAR_2;
   VAR_23 &= ~VAR_3;
  } else if (VAR_20->phy.media_type == 131) {
   VAR_24 |= VAR_16;
   VAR_24 &= ~VAR_17;
  }
  break;
 case 134:
 case 136:

  VAR_22 |= VAR_12 | VAR_11;
  if (VAR_20->phy.media_type == 132)
   VAR_23 |= VAR_3 |
      VAR_2;
  else if (VAR_20->phy.media_type == 131)
   VAR_24 |= VAR_17 | VAR_16;
  break;
 default:
  FUNC_2(VAR_4,
        "Flow control param set incorrectly\n");
  VAR_21 = VAR_6;
  goto out;
  break;
 }

 if (VAR_20->mac.type < VAR_19) {




  FUNC_4(VAR_20, VAR_10, VAR_22);
  VAR_22 = FUNC_3(VAR_20, VAR_13);


  if (VAR_20->fc.strict_ieee)
   VAR_22 &= ~VAR_14;

  FUNC_4(VAR_20, VAR_13, VAR_22);
  FUNC_1("Set up FC; PCS1GLCTL = 0x%08X\n", VAR_22);
 }






 if (VAR_20->phy.media_type == 132) {
  VAR_23 |= VAR_1;
  VAR_21 = VAR_20->mac.ops.prot_autoc_write(VAR_20, VAR_23, VAR_25);
  if (VAR_21)
   goto out;
 } else if ((VAR_20->phy.media_type == 131) &&
      (FUNC_5(VAR_20))) {
  VAR_20->phy.ops.write_reg(VAR_20, VAR_8,
          VAR_9, VAR_24);
 }

 FUNC_1("Set up FC; PCS1GLCTL = 0x%08X\n", VAR_22);
out:
 return VAR_21;
}
