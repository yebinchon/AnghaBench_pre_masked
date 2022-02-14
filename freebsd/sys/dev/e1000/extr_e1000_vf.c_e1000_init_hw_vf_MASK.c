
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; } ;
struct e1000_hw {TYPE_1__ mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct e1000_hw*,int ,int ) ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_1)
{
 FUNC_0("e1000_init_hw_vf");


 FUNC_1(VAR_1, VAR_1->mac.addr, 0);

 return VAR_0;
}
