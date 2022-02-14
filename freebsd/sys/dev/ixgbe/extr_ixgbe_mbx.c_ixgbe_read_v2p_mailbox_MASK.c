
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int v2p_mailbox; } ;
struct ixgbe_hw {TYPE_1__ mbx; } ;


 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u32 FUNC_1(struct ixgbe_hw *VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_2, VAR_0);

 VAR_3 |= VAR_2->mbx.v2p_mailbox;
 VAR_2->mbx.v2p_mailbox |= VAR_3 & VAR_1;

 return VAR_3;
}
