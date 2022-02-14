
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_3__ {int (* read_reg ) (struct ixgbe_hw*,int ,int ,scalar_t__*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ phy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ixgbe_hw*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct ixgbe_hw*,int ,int ,scalar_t__*) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int ,scalar_t__*) ;

__attribute__((used)) static s32 FUNC_3(struct ixgbe_hw *VAR_5)
{
 u16 VAR_6 = 0;
 u16 VAR_7 = 0;

 VAR_5->phy.ops.read_reg(VAR_5, VAR_0,
        VAR_1,
        &VAR_6);
 VAR_5->phy.ops.read_reg(VAR_5, VAR_2,
        VAR_1,
        &VAR_7);

 return FUNC_0(VAR_5, (u32)VAR_6,
      (u32)VAR_7,
      VAR_4, VAR_3,
      VAR_4, VAR_3);
}
