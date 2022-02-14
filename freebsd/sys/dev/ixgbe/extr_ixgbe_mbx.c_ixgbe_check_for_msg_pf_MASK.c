
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int reqs; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;
struct ixgbe_hw {TYPE_2__ mbx; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct ixgbe_hw*,int,int ) ;

__attribute__((used)) static s32 FUNC_3(struct ixgbe_hw *VAR_3, u16 VAR_4)
{
 s32 VAR_5 = VAR_0;
 s32 VAR_6 = FUNC_1(VAR_4);
 u32 VAR_7 = VAR_4 % 16;

 FUNC_0("ixgbe_check_for_msg_pf");

 if (!FUNC_2(VAR_3, VAR_1 << VAR_7,
        VAR_6)) {
  VAR_5 = VAR_2;
  VAR_3->mbx.stats.reqs++;
 }

 return VAR_5;
}
