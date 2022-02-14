
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;

 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_4(struct e1000_hw *VAR_0)
{
 s32 VAR_1;

 FUNC_0("e1000_acquire_nvm_82571");

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1)
  return VAR_1;

 switch (VAR_0->mac.type) {
 case 128:
  break;
 default:
  VAR_1 = FUNC_1(VAR_0);
  break;
 }

 if (VAR_1)
  FUNC_3(VAR_0);

 return VAR_1;
}
