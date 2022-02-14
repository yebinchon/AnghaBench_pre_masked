
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ) ;
 int FUNC_3 (struct e1000_hw*,int ) ;

__attribute__((used)) static s32 FUNC_4(struct e1000_hw *VAR_1)
{
 s32 VAR_2;

 FUNC_0("e1000_acquire_nvm_80003es2lan");

 VAR_2 = FUNC_2(VAR_1, VAR_0);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_1(VAR_1);

 if (VAR_2)
  FUNC_3(VAR_1, VAR_0);

 return VAR_2;
}
