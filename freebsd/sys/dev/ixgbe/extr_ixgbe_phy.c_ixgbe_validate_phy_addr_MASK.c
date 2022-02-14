
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int (* read_reg ) (struct ixgbe_hw*,int ,int ,int*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; int addr; } ;
struct ixgbe_hw {TYPE_2__ phy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct ixgbe_hw*,int ,int ,int*) ;

bool FUNC_3(struct ixgbe_hw *VAR_4, u32 VAR_5)
{
 u16 VAR_6 = 0;
 bool VAR_7 = VAR_0;

 FUNC_0("ixgbe_validate_phy_addr");

 VAR_4->phy.addr = VAR_5;
 VAR_4->phy.ops.read_reg(VAR_4, VAR_1,
        VAR_2, &VAR_6);

 if (VAR_6 != 0xFFFF && VAR_6 != 0x0)
  VAR_7 = VAR_3;

 FUNC_1("PHY ID HIGH is 0x%04X\n", VAR_6);

 return VAR_7;
}
