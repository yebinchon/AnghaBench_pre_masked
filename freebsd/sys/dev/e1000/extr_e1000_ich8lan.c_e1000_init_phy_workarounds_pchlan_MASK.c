
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
struct TYPE_10__ {int type; } ;
struct TYPE_8__ {scalar_t__ (* check_reset_block ) (struct e1000_hw*) ;int (* release ) (struct e1000_hw*) ;scalar_t__ (* acquire ) (struct e1000_hw*) ;} ;
struct TYPE_9__ {TYPE_3__ ops; } ;
struct TYPE_6__ {int ulp_state; } ;
struct TYPE_7__ {TYPE_1__ ich8lan; } ;
struct e1000_hw {TYPE_5__ mac; TYPE_4__ phy; TYPE_2__ dev_spec; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 int FUNC_3 (struct e1000_hw*,int ,int) ;
 int FUNC_4 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct e1000_hw*,int ) ;
 int FUNC_6 (struct e1000_hw*,int ) ;





 scalar_t__ FUNC_7 (struct e1000_hw*) ;
 int FUNC_8 (struct e1000_hw*) ;
 int FUNC_9 (struct e1000_hw*) ;
 int VAR_7 ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (struct e1000_hw*) ;
 scalar_t__ FUNC_12 (struct e1000_hw*) ;
 int FUNC_13 (struct e1000_hw*) ;
 scalar_t__ FUNC_14 (struct e1000_hw*) ;
 scalar_t__ FUNC_15 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_16(struct e1000_hw *VAR_8)
{
 u32 VAR_9, VAR_10 = FUNC_2(VAR_8, VAR_3);
 s32 VAR_11;

 FUNC_0("e1000_init_phy_workarounds_pchlan");




 FUNC_6(VAR_8, VAR_6);




 VAR_8->dev_spec.ich8lan.ulp_state = VAR_7;
 FUNC_5(VAR_8, VAR_6);

 VAR_11 = VAR_8->phy.ops.acquire(VAR_8);
 if (VAR_11) {
  FUNC_1("Failed to initialize PHY flow\n");
  goto out;
 }





 switch (VAR_8->mac.type) {
 case 130:
 case 129:
 case 131:
  if (FUNC_8(VAR_8))
   break;




  VAR_9 = FUNC_2(VAR_8, VAR_0);
  VAR_9 |= VAR_1;
  FUNC_3(VAR_8, VAR_0, VAR_9);





   FUNC_10(50);


 case 132:
  if (FUNC_8(VAR_8))
   break;


 case 128:
  if ((VAR_8->mac.type == 128) &&
      (VAR_10 & VAR_4))
   break;

  if (VAR_8->phy.ops.check_reset_block(VAR_8)) {
   FUNC_1("Required LANPHYPC toggle blocked by ME\n");
   VAR_11 = -VAR_2;
   break;
  }


  FUNC_9(VAR_8);
  if (VAR_8->mac.type >= 130) {
   if (FUNC_8(VAR_8))
    break;




   VAR_9 = FUNC_2(VAR_8, VAR_0);
   VAR_9 &= ~VAR_1;
   FUNC_3(VAR_8, VAR_0, VAR_9);

   if (FUNC_8(VAR_8))
    break;

   VAR_11 = -VAR_2;
  }
  break;
 default:
  break;
 }

 VAR_8->phy.ops.release(VAR_8);
 if (!VAR_11) {


  if (VAR_8->phy.ops.check_reset_block(VAR_8)) {
   FUNC_4("Reset blocked by ME\n");
   goto out;
  }






  VAR_11 = FUNC_7(VAR_8);
  if (VAR_11)
   goto out;







  VAR_11 = VAR_8->phy.ops.check_reset_block(VAR_8);
  if (VAR_11)
   FUNC_4("ME blocked access to PHY after reset\n");
 }

out:

 if ((VAR_8->mac.type == 132) &&
     !(VAR_10 & VAR_4)) {
  FUNC_10(10);
  FUNC_6(VAR_8, VAR_5);
 }

 return VAR_11;
}
