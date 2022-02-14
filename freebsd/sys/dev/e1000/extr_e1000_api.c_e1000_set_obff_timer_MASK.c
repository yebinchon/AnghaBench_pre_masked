
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int (* set_obff_timer ) (struct e1000_hw*,int ) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct e1000_hw*,int ) ;

s32 FUNC_1(struct e1000_hw *VAR_1, u32 VAR_2)
{
 if (VAR_1->mac.ops.set_obff_timer)
  return VAR_1->mac.ops.set_obff_timer(VAR_1, VAR_2);

 return VAR_0;
}
