
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ (* get_cfg_done ) (struct e1000_hw*) ;int (* release ) (struct e1000_hw*) ;scalar_t__ (* acquire ) (struct e1000_hw*) ;scalar_t__ (* check_reset_block ) (struct e1000_hw*) ;} ;
struct e1000_phy_info {int reset_delay_us; TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*) ;
 int FUNC_6 (struct e1000_hw*) ;
 scalar_t__ FUNC_7 (struct e1000_hw*) ;
 int FUNC_8 (int) ;

s32 FUNC_9(struct e1000_hw *VAR_3)
{
 struct e1000_phy_info *VAR_4 = &VAR_3->phy;
 s32 VAR_5;
 u32 VAR_6;

 FUNC_0("e1000_phy_hw_reset_generic");

 if (VAR_4->ops.check_reset_block) {
  VAR_5 = VAR_4->ops.check_reset_block(VAR_3);
  if (VAR_5)
   return VAR_2;
 }

 VAR_5 = VAR_4->ops.acquire(VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_6 = FUNC_1(VAR_3, VAR_0);
 FUNC_3(VAR_3, VAR_0, VAR_6 | VAR_1);
 FUNC_2(VAR_3);

 FUNC_8(VAR_4->reset_delay_us);

 FUNC_3(VAR_3, VAR_0, VAR_6);
 FUNC_2(VAR_3);

 FUNC_8(150);

 VAR_4->ops.release(VAR_3);

 return VAR_4->ops.get_cfg_done(VAR_3);
}
