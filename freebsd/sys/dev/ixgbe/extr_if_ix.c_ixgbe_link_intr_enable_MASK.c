
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_hw {int dummy; } ;
struct adapter {struct ixgbe_hw hw; } ;
typedef int if_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixgbe_hw*,int ,int) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(if_ctx_t VAR_3)
{
 struct ixgbe_hw *VAR_4 = &((struct adapter *)FUNC_1(VAR_3))->hw;


 FUNC_0(VAR_4, VAR_0, VAR_2 | VAR_1);
}
