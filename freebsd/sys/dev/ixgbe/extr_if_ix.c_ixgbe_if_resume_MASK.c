
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ixgbe_hw {int dummy; } ;
struct ifnet {int if_flags; } ;
struct adapter {struct ixgbe_hw hw; } ;
typedef int if_ctx_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int ) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,scalar_t__) ;
 int FUNC_4 (int ) ;
 struct ifnet* FUNC_5 (int ) ;
 struct adapter* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(if_ctx_t VAR_3)
{
 struct adapter *VAR_4 = FUNC_6(VAR_3);
 device_t VAR_5 = FUNC_4(VAR_3);
 struct ifnet *VAR_6 = FUNC_5(VAR_3);
 struct ixgbe_hw *VAR_7 = &VAR_4->hw;
 u32 VAR_8;

 FUNC_0("ixgbe_resume: begin");


 VAR_8 = FUNC_1(VAR_7, VAR_2);
 if (VAR_8)
  FUNC_3(VAR_5, "Woken up by (WUS): %#010x\n",
      FUNC_1(VAR_7, VAR_2));
 FUNC_2(VAR_7, VAR_2, 0xffffffff);

 FUNC_2(VAR_7, VAR_1, 0);





 if (VAR_6->if_flags & VAR_0)
  FUNC_7(VAR_3);

 return (0);
}
