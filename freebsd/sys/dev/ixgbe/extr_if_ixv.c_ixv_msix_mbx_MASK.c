
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
struct adapter {int ctx; int link_irq; struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(void *VAR_6)
{
 struct adapter *VAR_7 = VAR_6;
 struct ixgbe_hw *VAR_8 = &VAR_7->hw;
 u32 VAR_9;

 ++VAR_7->link_irq;


 VAR_9 = FUNC_0(VAR_8, VAR_4);

 FUNC_1(VAR_8, VAR_3, VAR_9);


 if (VAR_9 & VAR_1)
  FUNC_2(VAR_7->ctx);

 FUNC_1(VAR_8, VAR_5, VAR_2);

 return (VAR_0);
}
