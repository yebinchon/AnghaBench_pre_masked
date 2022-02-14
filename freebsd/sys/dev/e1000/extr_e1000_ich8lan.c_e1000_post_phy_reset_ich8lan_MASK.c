
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {int (* release ) (struct e1000_hw*) ;scalar_t__ (* acquire ) (struct e1000_hw*) ;int (* write_reg ) (struct e1000_hw*,int ,int ) ;int (* read_reg ) (struct e1000_hw*,int ,int *) ;scalar_t__ (* check_reset_block ) (struct e1000_hw*) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {int type; } ;
struct e1000_hw {TYPE_3__ phy; TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ) ;


 scalar_t__ FUNC_6 (struct e1000_hw*) ;
 scalar_t__ FUNC_7 (struct e1000_hw*,int ,int) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (struct e1000_hw*) ;
 int FUNC_10 (struct e1000_hw*,int ,int *) ;
 int FUNC_11 (struct e1000_hw*,int ,int ) ;
 scalar_t__ FUNC_12 (struct e1000_hw*) ;
 int FUNC_13 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_14(struct e1000_hw *VAR_8)
{
 s32 VAR_9 = VAR_4;
 u16 VAR_10;

 FUNC_0("e1000_post_phy_reset_ich8lan");

 if (VAR_8->phy.ops.check_reset_block(VAR_8))
  return VAR_4;


 FUNC_8(10);


 switch (VAR_8->mac.type) {
 case 128:
  VAR_9 = FUNC_3(VAR_8);
  if (VAR_9)
   return VAR_9;
  break;
 case 129:
  VAR_9 = FUNC_4(VAR_8);
  if (VAR_9)
   return VAR_9;
  break;
 default:
  break;
 }


 if (VAR_8->mac.type >= 128) {
  VAR_8->phy.ops.read_reg(VAR_8, VAR_0, &VAR_10);
  VAR_10 &= ~VAR_1;
  VAR_8->phy.ops.write_reg(VAR_8, VAR_0, VAR_10);
 }


 VAR_9 = FUNC_6(VAR_8);
 if (VAR_9)
  return VAR_9;


 VAR_9 = FUNC_5(VAR_8, VAR_7);

 if (VAR_8->mac.type == 129) {

  if (!(FUNC_1(VAR_8, VAR_2) &
      VAR_3)) {
   FUNC_8(10);
   FUNC_2(VAR_8, VAR_5);
  }


  VAR_9 = VAR_8->phy.ops.acquire(VAR_8);
  if (VAR_9)
   return VAR_9;
  VAR_9 = FUNC_7(VAR_8,
           VAR_6,
           0x1387);
  VAR_8->phy.ops.release(VAR_8);
 }

 return VAR_9;
}
