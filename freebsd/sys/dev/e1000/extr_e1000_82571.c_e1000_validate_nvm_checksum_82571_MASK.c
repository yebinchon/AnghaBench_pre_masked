
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ nvm; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct e1000_hw*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_1)
{
 FUNC_0("e1000_validate_nvm_checksum_82571");

 if (VAR_1->nvm.type == VAR_0)
  FUNC_1(VAR_1);

 return FUNC_2(VAR_1);
}
