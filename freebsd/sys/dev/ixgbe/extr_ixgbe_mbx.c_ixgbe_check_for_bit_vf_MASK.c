
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int v2p_mailbox; } ;
struct ixgbe_hw {TYPE_1__ mbx; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgbe_hw*) ;

__attribute__((used)) static s32 FUNC_1(struct ixgbe_hw *VAR_2, u32 VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_2);
 s32 VAR_5 = VAR_0;

 if (VAR_4 & VAR_3)
  VAR_5 = VAR_1;

 VAR_2->mbx.v2p_mailbox &= ~VAR_3;

 return VAR_5;
}
