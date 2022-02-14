
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct TYPE_3__ {int (* read_reg ) (struct ixgbe_hw*,int ,int ,int*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ phy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct ixgbe_hw*,int ,int ,int*) ;

u64 FUNC_2(struct ixgbe_hw *VAR_9)
{
 u64 VAR_10 = VAR_8;
 u16 VAR_11 = 0;

 FUNC_0("ixgbe_get_supported_physical_layer_X540");

 VAR_9->phy.ops.read_reg(VAR_9, VAR_3,
 VAR_4, &VAR_11);
 if (VAR_11 & VAR_2)
  VAR_10 |= VAR_7;
 if (VAR_11 & VAR_0)
  VAR_10 |= VAR_5;
 if (VAR_11 & VAR_1)
  VAR_10 |= VAR_6;

 return VAR_10;
}
