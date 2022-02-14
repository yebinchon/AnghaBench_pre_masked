
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int (* get_cfg_done ) (struct e1000_hw*) ;} ;
struct TYPE_3__ {TYPE_2__ ops; } ;
struct e1000_hw {TYPE_1__ phy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (struct e1000_hw*,int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct e1000_hw*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static s32 FUNC_7(struct e1000_hw *VAR_4)
{
 u32 VAR_5;
 s32 VAR_6;

 FUNC_0("e1000_phy_hw_reset_82543");





 VAR_5 = FUNC_1(VAR_4, VAR_0);
 VAR_5 |= VAR_2;
 VAR_5 &= ~VAR_1;
 FUNC_3(VAR_4, VAR_0, VAR_5);
 FUNC_2(VAR_4);

 FUNC_4(10);


 VAR_5 |= VAR_1;
 FUNC_3(VAR_4, VAR_0, VAR_5);
 FUNC_2(VAR_4);

 FUNC_6(150);

 if (!(VAR_4->phy.ops.get_cfg_done))
  return VAR_3;

 VAR_6 = VAR_4->phy.ops.get_cfg_done(VAR_4);

 return VAR_6;
}
