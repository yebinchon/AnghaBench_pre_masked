
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ func; } ;
struct ixgbe_hw {int wol_enabled; TYPE_1__ bus; } ;
struct adapter {int wol_support; int wufc; struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct ixgbe_hw*,int*) ;

__attribute__((used)) static void
FUNC_2(struct adapter *VAR_3)
{
 struct ixgbe_hw *VAR_4 = &VAR_3->hw;
 u16 VAR_5 = 0;


 VAR_3->wol_support = VAR_4->wol_enabled = 0;
 FUNC_1(VAR_4, &VAR_5);
 if ((VAR_5 & VAR_1) ||
     ((VAR_5 & VAR_0) &&
      VAR_4->bus.func == 0))
  VAR_3->wol_support = VAR_4->wol_enabled = 1;


 VAR_3->wufc = FUNC_0(VAR_4, VAR_2);

 return;
}
