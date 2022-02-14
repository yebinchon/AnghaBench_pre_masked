
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_5__ {int (* reset ) (struct e1000_hw*) ;scalar_t__ (* read_reg ) (struct e1000_hw*,int ,int*) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct e1000_dev_spec_ich8lan {int kmrn_lock_loss_workaround_enabled; } ;
struct TYPE_4__ {struct e1000_dev_spec_ich8lan ich8lan; } ;
struct e1000_hw {TYPE_3__ phy; TYPE_1__ dev_spec; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct e1000_hw*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct e1000_hw*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int,int ,int*) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_7 (struct e1000_hw*,int ,int*) ;
 int FUNC_8 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_9(struct e1000_hw *VAR_7)
{
 struct e1000_dev_spec_ich8lan *VAR_8 = &VAR_7->dev_spec.ich8lan;
 u32 VAR_9;
 s32 VAR_10;
 u16 VAR_11, VAR_12;
 bool VAR_13;

 FUNC_0("e1000_kmrn_lock_loss_workaround_ich8lan");

 if (!VAR_8->kmrn_lock_loss_workaround_enabled)
  return VAR_4;





 VAR_10 = FUNC_4(VAR_7, 1, 0, &VAR_13);
 if (!VAR_13)
  return VAR_4;

 for (VAR_11 = 0; VAR_11 < 10; VAR_11++) {

  VAR_10 = VAR_7->phy.ops.read_reg(VAR_7, VAR_5, &VAR_12);
  if (VAR_10)
   return VAR_10;

  VAR_10 = VAR_7->phy.ops.read_reg(VAR_7, VAR_5, &VAR_12);
  if (VAR_10)
   return VAR_10;


  if (!(VAR_12 & VAR_6))
   return VAR_4;


  VAR_7->phy.ops.reset(VAR_7);
  FUNC_5(5);
 }

 VAR_9 = FUNC_1(VAR_7, VAR_1);
 VAR_9 |= (VAR_2 |
       VAR_3);
 FUNC_2(VAR_7, VAR_1, VAR_9);




 FUNC_3(VAR_7);


 return -VAR_0;
}
