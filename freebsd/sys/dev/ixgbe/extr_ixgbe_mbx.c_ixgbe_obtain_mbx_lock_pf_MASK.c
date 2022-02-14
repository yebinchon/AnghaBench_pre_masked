
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (struct ixgbe_hw*,int ) ;
 int VAR_3 ;
 int FUNC_4 (struct ixgbe_hw*,int ,int) ;

__attribute__((used)) static s32 FUNC_5(struct ixgbe_hw *VAR_4, u16 VAR_5)
{
 s32 VAR_6 = VAR_1;
 u32 VAR_7;

 FUNC_0("ixgbe_obtain_mbx_lock_pf");


 FUNC_4(VAR_4, FUNC_2(VAR_5), VAR_2);


 VAR_7 = FUNC_3(VAR_4, FUNC_2(VAR_5));
 if (VAR_7 & VAR_2)
  VAR_6 = VAR_3;
 else
  FUNC_1(VAR_0,
      "Failed to obtain mailbox lock for VF%d", VAR_5);


 return VAR_6;
}
