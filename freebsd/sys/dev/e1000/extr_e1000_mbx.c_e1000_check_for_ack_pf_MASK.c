
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int acks; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;
struct e1000_hw {TYPE_2__ mbx; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct e1000_hw*,int) ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_3, u16 VAR_4)
{
 s32 VAR_5 = -VAR_0;

 FUNC_0("e1000_check_for_ack_pf");

 if (!FUNC_1(VAR_3, VAR_1 << VAR_4)) {
  VAR_5 = VAR_2;
  VAR_3->mbx.stats.acks++;
 }

 return VAR_5;
}
