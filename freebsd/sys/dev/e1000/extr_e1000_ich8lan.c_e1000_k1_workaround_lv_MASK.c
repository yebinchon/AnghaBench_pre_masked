
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_5__ {scalar_t__ (* write_reg ) (struct e1000_hw*,int ,int) ;scalar_t__ (* read_reg ) (struct e1000_hw*,int ,int*) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_3__ phy; TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct e1000_hw*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ,int) ;

__attribute__((used)) static s32 FUNC_6(struct e1000_hw *VAR_12)
{
 s32 VAR_13 = VAR_3;
 u16 VAR_14 = 0;

 FUNC_0("e1000_k1_workaround_lv");

 if (VAR_12->mac.type != VAR_11)
  return VAR_3;


 VAR_13 = VAR_12->phy.ops.read_reg(VAR_12, VAR_4, &VAR_14);
 if (VAR_13)
  return VAR_13;

 if ((VAR_14 & (VAR_6 | VAR_5))
     == (VAR_6 | VAR_5)) {
  if (VAR_14 &
      (VAR_8 | VAR_7)) {
   u16 VAR_15;


   VAR_13 = VAR_12->phy.ops.read_reg(VAR_12, VAR_9,
             &VAR_15);
   if (VAR_13)
    return VAR_13;
   VAR_15 &= ~VAR_10;
   VAR_13 = VAR_12->phy.ops.write_reg(VAR_12, VAR_9,
       VAR_15);
   if (VAR_13)
    return VAR_13;
  } else {
   u32 VAR_16;
   VAR_16 = FUNC_1(VAR_12, VAR_0);
   VAR_16 &= ~VAR_2;
   VAR_16 |= VAR_1;
   FUNC_2(VAR_12, VAR_0, VAR_16);
  }
 }

 return VAR_13;
}
