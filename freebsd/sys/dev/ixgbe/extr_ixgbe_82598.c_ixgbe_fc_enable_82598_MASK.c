
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_6__ {int pause_time; int current_mode; int* high_water; int* low_water; int requested_mode; } ;
struct TYPE_4__ {int (* check_link ) (struct ixgbe_hw*,scalar_t__*,int*,int ) ;} ;
struct TYPE_5__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_3__ fc; TYPE_2__ mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*,int ) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_6 (struct ixgbe_hw*,int ,int) ;
 int FUNC_7 (struct ixgbe_hw*) ;




 int FUNC_8 (struct ixgbe_hw*,scalar_t__*,int*,int ) ;

s32 FUNC_9(struct ixgbe_hw *VAR_16)
{
 s32 VAR_17 = VAR_15;
 u32 VAR_18;
 u32 VAR_19;
 u32 VAR_20;
 u32 VAR_21, VAR_22;
 u32 VAR_23 = 0;
 int VAR_24;
 bool VAR_25;

 FUNC_0("ixgbe_fc_enable_82598");


 if (!VAR_16->fc.pause_time) {
  VAR_17 = VAR_3;
  goto out;
 }


 for (VAR_24 = 0; VAR_24 < VAR_1; VAR_24++) {
  if ((VAR_16->fc.current_mode & 128) &&
      VAR_16->fc.high_water[VAR_24]) {
   if (!VAR_16->fc.low_water[VAR_24] ||
       VAR_16->fc.low_water[VAR_24] >= VAR_16->fc.high_water[VAR_24]) {
    FUNC_1("Invalid water mark configuration\n");
    VAR_17 = VAR_3;
    goto out;
   }
  }
 }






 VAR_16->mac.ops.check_link(VAR_16, &VAR_23, &VAR_25, VAR_0);
 if (VAR_25 && VAR_23 == VAR_11) {
  switch (VAR_16->fc.requested_mode) {
  case 131:
   VAR_16->fc.requested_mode = 128;
   break;
  case 129:
   VAR_16->fc.requested_mode = 130;
   break;
  default:

   break;
  }
 }


 FUNC_7(VAR_16);


 VAR_18 = FUNC_5(VAR_16, VAR_7);
 VAR_18 &= ~(VAR_9 | VAR_10);

 VAR_19 = FUNC_5(VAR_16, VAR_12);
 VAR_19 &= ~(VAR_14 | VAR_13);
 switch (VAR_16->fc.current_mode) {
 case 130:




  break;
 case 129:
  VAR_18 |= VAR_9;
  break;
 case 128:




  VAR_19 |= VAR_13;
  break;
 case 131:

  VAR_18 |= VAR_9;
  VAR_19 |= VAR_13;
  break;
 default:
  FUNC_1("Flow control param set incorrectly\n");
  VAR_17 = VAR_2;
  goto out;
  break;
 }


 VAR_18 |= VAR_8;
 FUNC_6(VAR_16, VAR_7, VAR_18);
 FUNC_6(VAR_16, VAR_12, VAR_19);


 for (VAR_24 = 0; VAR_24 < VAR_1; VAR_24++) {
  if ((VAR_16->fc.current_mode & 128) &&
      VAR_16->fc.high_water[VAR_24]) {
   VAR_21 = (VAR_16->fc.low_water[VAR_24] << 10) | VAR_5;
   VAR_22 = (VAR_16->fc.high_water[VAR_24] << 10) | VAR_4;
   FUNC_6(VAR_16, FUNC_3(VAR_24), VAR_21);
   FUNC_6(VAR_16, FUNC_2(VAR_24), VAR_22);
  } else {
   FUNC_6(VAR_16, FUNC_3(VAR_24), 0);
   FUNC_6(VAR_16, FUNC_2(VAR_24), 0);
  }

 }


 VAR_20 = VAR_16->fc.pause_time * 0x00010001;
 for (VAR_24 = 0; VAR_24 < (VAR_1 / 2); VAR_24++)
  FUNC_6(VAR_16, FUNC_4(VAR_24), VAR_20);


 FUNC_6(VAR_16, VAR_6, VAR_16->fc.pause_time / 2);

out:
 return VAR_17;
}
