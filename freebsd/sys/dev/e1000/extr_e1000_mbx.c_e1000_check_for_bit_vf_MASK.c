
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int v2p_mailbox; } ;
struct TYPE_4__ {TYPE_1__ vf; } ;
struct e1000_hw {TYPE_2__ dev_spec; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_1(struct e1000_hw *VAR_2, u32 VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_2);
 s32 VAR_5 = -VAR_0;

 if (VAR_4 & VAR_3)
  VAR_5 = VAR_1;

 VAR_2->dev_spec.vf.v2p_mailbox &= ~VAR_3;

 return VAR_5;
}
