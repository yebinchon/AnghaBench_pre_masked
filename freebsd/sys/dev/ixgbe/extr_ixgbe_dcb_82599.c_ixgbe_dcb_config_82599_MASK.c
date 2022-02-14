
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
struct TYPE_2__ {int pg_tcs; } ;
struct ixgbe_dcb_config {scalar_t__ vt_mode; TYPE_1__ num_tcs; } ;
typedef int s32 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;

s32 FUNC_3(struct ixgbe_hw *VAR_18,
      struct ixgbe_dcb_config *VAR_19)
{
 u32 VAR_20;
 u32 VAR_21;


 VAR_20 = FUNC_1(VAR_18, VAR_13);
 VAR_20 |= VAR_14;
 FUNC_2(VAR_18, VAR_13, VAR_20);

 VAR_20 = FUNC_1(VAR_18, VAR_0);
 if (VAR_19->num_tcs.pg_tcs == 8) {

  switch (VAR_20 & VAR_1) {
  case 0:
  case 129:

   VAR_20 = (VAR_20 & ~VAR_1) |
         VAR_2;
   break;
  case 130:
  case 128:

   VAR_20 = (VAR_20 & ~VAR_1) |
         VAR_3;
   break;
  default:




   FUNC_0(0);
   VAR_20 = (VAR_20 & ~VAR_1) |
         VAR_2;
  }
 }
 if (VAR_19->num_tcs.pg_tcs == 4) {

  if (VAR_19->vt_mode)
   VAR_20 = (VAR_20 & ~VAR_1) |
         VAR_4;
  else
   VAR_20 = (VAR_20 & ~VAR_1) |
         128;
 }
 FUNC_2(VAR_18, VAR_0, VAR_20);


 if (VAR_19->num_tcs.pg_tcs == 8)
  VAR_20 = VAR_8 | VAR_7;
 else {

  VAR_20 = VAR_8 | VAR_6;
  if (VAR_19->vt_mode)
   VAR_20 |= VAR_9;
 }
 FUNC_2(VAR_18, VAR_5, VAR_20);


 for (VAR_21 = 0; VAR_21 < 128; VAR_21++)
  FUNC_2(VAR_18, VAR_10,
    (VAR_12 | (VAR_21 << VAR_11)));


 VAR_20 = FUNC_1(VAR_18, VAR_13);
 VAR_20 &= ~VAR_14;
 FUNC_2(VAR_18, VAR_13, VAR_20);


 VAR_20 = FUNC_1(VAR_18, VAR_15);
 VAR_20 |= VAR_16;
 FUNC_2(VAR_18, VAR_15, VAR_20);

 return VAR_17;
}
