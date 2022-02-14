
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* read_i2c_byte ) (struct ixgbe_hw*,scalar_t__,int ,int *) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ phy; } ;
struct ifi2creq {int len; int * data; int dev_addr; scalar_t__ offset; } ;
struct adapter {struct ixgbe_hw hw; } ;
typedef int if_ctx_t ;


 int VAR_0 ;
 struct adapter* FUNC_0 (int ) ;
 int FUNC_1 (struct ixgbe_hw*,scalar_t__,int ,int *) ;

__attribute__((used)) static int
FUNC_2(if_ctx_t VAR_1, struct ifi2creq *VAR_2)
{
 struct adapter *VAR_3 = FUNC_0(VAR_1);
 struct ixgbe_hw *VAR_4 = &VAR_3->hw;
 int VAR_5;


 if (VAR_4->phy.ops.read_i2c_byte == ((void*)0))
  return (VAR_0);
 for (VAR_5 = 0; VAR_5 < VAR_2->len; VAR_5++)
  VAR_4->phy.ops.read_i2c_byte(VAR_4, VAR_2->offset + VAR_5,
      VAR_2->dev_addr, &VAR_2->data[VAR_5]);
 return (0);
}
