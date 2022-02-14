
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_5(struct e1000_hw *VAR_5)
{
 s32 VAR_6 = VAR_2;

 FUNC_0("e1000_phy_hw_reset_ich8lan");


 if ((VAR_5->mac.type == VAR_4) &&
     !(FUNC_1(VAR_5, VAR_0) & VAR_1))
  FUNC_2(VAR_5, VAR_3);

 VAR_6 = FUNC_3(VAR_5);
 if (VAR_6)
  return VAR_6;

 return FUNC_4(VAR_5);
}
