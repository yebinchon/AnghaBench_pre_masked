
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int (* get_link_up_info ) (struct e1000_hw*,int *,int *) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct e1000_hw*,int *,int *) ;

s32 FUNC_1(struct e1000_hw *VAR_1, u16 *VAR_2, u16 *VAR_3)
{
 if (VAR_1->mac.ops.get_link_up_info)
  return VAR_1->mac.ops.get_link_up_info(VAR_1, VAR_2, VAR_3);

 return -VAR_0;
}
