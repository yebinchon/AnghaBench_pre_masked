
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_hw {int dummy; } ;
struct adapter {struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,int) ;

__attribute__((used)) static int
FUNC_1(struct adapter *VAR_4)
{
 struct ixgbe_hw *VAR_5 = &VAR_4->hw;
 int VAR_6[] = { VAR_2,
                               VAR_1,
                               VAR_3 };
 int VAR_7 = 0;

 while (VAR_6[VAR_7] != VAR_3) {
  if (FUNC_0(VAR_5, VAR_6[VAR_7]) == 0)
   return (0);
  VAR_7++;
 }

 return (VAR_0);
}
