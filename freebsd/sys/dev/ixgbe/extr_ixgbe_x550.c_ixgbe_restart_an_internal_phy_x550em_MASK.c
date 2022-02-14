
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int lan_id; } ;
struct TYPE_4__ {scalar_t__ (* write_iosf_sb_reg ) (struct ixgbe_hw*,int ,int ,int ) ;scalar_t__ (* read_iosf_sb_reg ) (struct ixgbe_hw*,int ,int ,int *) ;} ;
struct TYPE_5__ {scalar_t__ type; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_3__ bus; TYPE_2__ mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int ,int ,int *) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*,int ,int ,int ) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*,int ,int ,int *) ;
 scalar_t__ FUNC_6 (struct ixgbe_hw*,int ,int ,int ) ;

__attribute__((used)) static s32 FUNC_7(struct ixgbe_hw *VAR_4)
{
 s32 VAR_5;
 u32 VAR_6;


 VAR_5 = VAR_4->mac.ops.read_iosf_sb_reg(VAR_4,
           FUNC_1(VAR_4->bus.lan_id),
           VAR_2, &VAR_6);

 if (VAR_5) {
  FUNC_0("Auto-negotiation did not complete\n");
  return VAR_5;
 }

 VAR_6 |= VAR_0;
 VAR_5 = VAR_4->mac.ops.write_iosf_sb_reg(VAR_4,
     FUNC_1(VAR_4->bus.lan_id),
     VAR_2, VAR_6);

 if (VAR_4->mac.type == VAR_3) {
  u32 VAR_7;


  VAR_5 = VAR_4->mac.ops.read_iosf_sb_reg(VAR_4,
    FUNC_2(VAR_4->bus.lan_id),
    VAR_2, &VAR_7);

  if (VAR_5) {
   FUNC_0("Auto-negotiation did not complete\n");
   return VAR_5;
  }

  VAR_7 |= VAR_1;
  VAR_5 = VAR_4->mac.ops.write_iosf_sb_reg(VAR_4,
    FUNC_2(VAR_4->bus.lan_id),
    VAR_2, VAR_7);
 }

 return VAR_5;
}
