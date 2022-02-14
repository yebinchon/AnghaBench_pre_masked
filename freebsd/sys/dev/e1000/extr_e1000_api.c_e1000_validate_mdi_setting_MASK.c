
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* validate_mdi_setting ) (struct e1000_hw*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct e1000_hw*) ;

s32 FUNC_1(struct e1000_hw *VAR_1)
{
 if (VAR_1->mac.ops.validate_mdi_setting)
  return VAR_1->mac.ops.validate_mdi_setting(VAR_1);

 return VAR_0;
}
