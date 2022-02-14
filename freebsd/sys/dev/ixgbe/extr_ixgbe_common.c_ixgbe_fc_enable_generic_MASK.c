
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int pause_time; int current_mode; int* high_water; int* low_water; } ;
struct TYPE_4__ {int (* fc_autoneg ) (struct ixgbe_hw*) ;} ;
struct TYPE_5__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_3__ fc; TYPE_2__ mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 int VAR_7 ;
 int FUNC_4 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (struct ixgbe_hw*,int ) ;
 int FUNC_7 (int) ;
 int VAR_14 ;
 int FUNC_8 (struct ixgbe_hw*,int ,int) ;




 int FUNC_9 (struct ixgbe_hw*) ;

s32 FUNC_10(struct ixgbe_hw *VAR_15)
{
 s32 VAR_16 = VAR_14;
 u32 VAR_17, VAR_18;
 u32 VAR_19;
 u32 VAR_20, VAR_21;
 int VAR_22;

 FUNC_0("ixgbe_fc_enable_generic");


 if (!VAR_15->fc.pause_time) {
  VAR_16 = VAR_3;
  goto out;
 }


 for (VAR_22 = 0; VAR_22 < VAR_0; VAR_22++) {
  if ((VAR_15->fc.current_mode & 128) &&
      VAR_15->fc.high_water[VAR_22]) {
   if (!VAR_15->fc.low_water[VAR_22] ||
       VAR_15->fc.low_water[VAR_22] >= VAR_15->fc.high_water[VAR_22]) {
    FUNC_1("Invalid water mark configuration\n");
    VAR_16 = VAR_3;
    goto out;
   }
  }
 }


 VAR_15->mac.ops.fc_autoneg(VAR_15);


 VAR_17 = FUNC_6(VAR_15, VAR_10);
 VAR_17 &= ~(VAR_13 | VAR_12);

 VAR_18 = FUNC_6(VAR_15, VAR_4);
 VAR_18 &= ~(VAR_5 | VAR_6);
 switch (VAR_15->fc.current_mode) {
 case 130:




  break;
 case 129:
  VAR_17 |= VAR_12;
  break;
 case 128:




  VAR_18 |= VAR_5;
  break;
 case 131:

  VAR_17 |= VAR_12;
  VAR_18 |= VAR_5;
  break;
 default:
  FUNC_2(VAR_1,
        "Flow control param set incorrectly\n");
  VAR_16 = VAR_2;
  goto out;
  break;
 }


 VAR_17 |= VAR_11;
 FUNC_8(VAR_15, VAR_10, VAR_17);
 FUNC_8(VAR_15, VAR_4, VAR_18);



 for (VAR_22 = 0; VAR_22 < VAR_0; VAR_22++) {
  if ((VAR_15->fc.current_mode & 128) &&
      VAR_15->fc.high_water[VAR_22]) {
   VAR_20 = (VAR_15->fc.low_water[VAR_22] << 10) | VAR_8;
   FUNC_8(VAR_15, FUNC_4(VAR_22), VAR_20);
   VAR_21 = (VAR_15->fc.high_water[VAR_22] << 10) | VAR_7;
  } else {
   FUNC_8(VAR_15, FUNC_4(VAR_22), 0);







   VAR_21 = FUNC_6(VAR_15, FUNC_7(VAR_22)) - 24576;
  }

  FUNC_8(VAR_15, FUNC_3(VAR_22), VAR_21);
 }


 VAR_19 = VAR_15->fc.pause_time * 0x00010001;
 for (VAR_22 = 0; VAR_22 < (VAR_0 / 2); VAR_22++)
  FUNC_8(VAR_15, FUNC_5(VAR_22), VAR_19);


 FUNC_8(VAR_15, VAR_9, VAR_15->fc.pause_time / 2);

out:
 return VAR_16;
}
