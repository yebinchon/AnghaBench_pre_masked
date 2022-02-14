
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int get_cfg_done; } ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_3__ phy; TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct e1000_hw*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;

s32 FUNC_4(struct e1000_hw *VAR_3)
{
 s32 VAR_4;

 FUNC_0("e1000_init_hw_i210");
 if ((VAR_3->mac.type >= VAR_2) &&
     !(FUNC_1(VAR_3))) {
  VAR_4 = FUNC_3(VAR_3);
  if (VAR_4 != VAR_0)
   return VAR_4;
 }
 VAR_3->phy.ops.get_cfg_done = VAR_1;
 VAR_4 = FUNC_2(VAR_3);
 return VAR_4;
}
