
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct TYPE_3__ {int msgs_rx; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;
struct ixgbe_hw {TYPE_2__ mbx; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (size_t) ;
 int VAR_0 ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (struct ixgbe_hw*,int ,size_t) ;
 int FUNC_4 (struct ixgbe_hw*,int ,int ) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*,size_t) ;

__attribute__((used)) static s32 FUNC_6(struct ixgbe_hw *VAR_1, u32 *VAR_2, u16 VAR_3,
        u16 VAR_4)
{
 s32 VAR_5;
 u16 VAR_6;

 FUNC_0("ixgbe_read_mbx_pf");


 VAR_5 = FUNC_5(VAR_1, VAR_4);
 if (VAR_5)
  goto out_no_read;


 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
  VAR_2[VAR_6] = FUNC_3(VAR_1, FUNC_2(VAR_4), VAR_6);


 FUNC_4(VAR_1, FUNC_1(VAR_4), VAR_0);


 VAR_1->mbx.stats.msgs_rx++;

out_no_read:
 return VAR_5;
}
