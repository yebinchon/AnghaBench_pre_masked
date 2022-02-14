
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_hw {int dummy; } ;
struct adapter {scalar_t__ link_irq; struct ixgbe_hw hw; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 long FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (int ,char*,long) ;

__attribute__((used)) static void
FUNC_2(struct adapter *VAR_1)
{
 device_t VAR_2 = VAR_1->dev;
 struct ixgbe_hw *VAR_3 = &VAR_1->hw;

 FUNC_1(VAR_2, "Error Byte Count = %u \n",
     FUNC_0(VAR_3, VAR_0));

 FUNC_1(VAR_2, "MBX IRQ Handled: %lu\n", (long)VAR_1->link_irq);
}
