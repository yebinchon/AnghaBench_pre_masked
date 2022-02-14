
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 int FUNC_2 (struct e1000_hw*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_5(struct e1000_hw *VAR_6)
{
 s32 VAR_7;
 u32 VAR_8;

 FUNC_0("e1000_phy_hw_reset_82541");

 VAR_7 = FUNC_3(VAR_6);
 if (VAR_7)
  goto out;

 FUNC_4(VAR_6);

 if ((VAR_6->mac.type == VAR_4) || (VAR_6->mac.type == VAR_5)) {

  VAR_8 = FUNC_1(VAR_6, VAR_0);
  VAR_8 &= VAR_2;
  VAR_8 |= (VAR_1 | VAR_3);
  FUNC_2(VAR_6, VAR_0, VAR_8);
 }

out:
 return VAR_7;
}
