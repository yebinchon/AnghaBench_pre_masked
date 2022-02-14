
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int (* get_link_up_info ) (struct e1000_hw*,int*,int*) ;} ;
struct TYPE_4__ {scalar_t__ max_frame_size; TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ mac; } ;
typedef int s64 ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int,int) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_6 (struct e1000_hw*,int ,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct e1000_hw*,scalar_t__,int*) ;
 int FUNC_9 (struct e1000_hw*,int*,int*) ;

__attribute__((used)) static s32 FUNC_10(struct e1000_hw *VAR_17, bool VAR_18)
{
 u32 VAR_19 = VAR_18 << (VAR_3 + VAR_2) |
    VAR_18 << VAR_3 | VAR_6;
 u16 VAR_20 = 0;
 s32 VAR_21 = 0;

 FUNC_0("e1000_platform_pm_pch_lpt");

 if (VAR_18) {
  u16 VAR_22, VAR_23, VAR_24 = 0;
  u16 VAR_25, VAR_26;
  u16 VAR_27;
  s64 VAR_28;
  s64 VAR_29;
  u32 VAR_30;

  if (!VAR_17->mac.max_frame_size) {
   FUNC_1("max_frame_size not set.\n");
   return -VAR_0;
  }

  VAR_17->mac.ops.get_link_up_info(VAR_17, &VAR_22, &VAR_23);
  if (!VAR_22) {
   FUNC_1("Speed not set.\n");
   return -VAR_0;
  }


  VAR_30 = FUNC_5(VAR_17, VAR_8) & VAR_9;
  VAR_28 = ((s64)VAR_30 * 1024 -
     (2 * (s64)VAR_17->mac.max_frame_size)) * 8 * 1000;
  if (VAR_28 < 0)
   VAR_28 = 0;
  else
   VAR_28 /= VAR_22;
  VAR_29 = VAR_28;

  while (VAR_29 > VAR_7) {
   VAR_24++;
   VAR_29 = FUNC_3(VAR_29, (1 << 5));
  }
  if (VAR_24 > VAR_4) {
   FUNC_2("Invalid LTR latency scale %d\n", VAR_24);
   return -VAR_0;
  }
  VAR_20 = (u16)((VAR_24 << VAR_5) | VAR_29);


  FUNC_8(VAR_17, VAR_10, &VAR_25);
  FUNC_8(VAR_17, VAR_10 + 2, &VAR_26);
  VAR_27 = FUNC_4(VAR_25, VAR_26);

  if (VAR_20 > VAR_27) {
   VAR_20 = VAR_27;
   VAR_28 = FUNC_7(VAR_27);
  }

  if (VAR_28) {
   VAR_28 *= VAR_22 * 1000;
   VAR_28 /= 8;
   VAR_28 /= 1000000000;
   VAR_21 = (s32)(VAR_30 - VAR_28);
  }
  if ((VAR_21 < 0) || (VAR_21 > VAR_16)) {
   FUNC_2("Invalid high water mark %d\n", VAR_21);
   return -VAR_0;
  }
 }


 VAR_19 |= VAR_20 | (VAR_20 << VAR_2);
 FUNC_6(VAR_17, VAR_1, VAR_19);


 VAR_19 = FUNC_5(VAR_17, VAR_15) & ~VAR_16;
 VAR_19 |= VAR_21;
 FUNC_6(VAR_17, VAR_15, VAR_19);


 VAR_19 = FUNC_5(VAR_17, VAR_12);
 VAR_19 |= VAR_13;




 VAR_19 |= VAR_14;
 FUNC_6(VAR_17, VAR_12, VAR_19);

 return VAR_11;
}
