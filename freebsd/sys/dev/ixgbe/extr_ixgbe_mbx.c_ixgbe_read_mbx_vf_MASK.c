
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
 int FUNC_1 (struct ixgbe_hw*,int ,size_t) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct ixgbe_hw*,int ,int ) ;
 int FUNC_3 (size_t) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*) ;

__attribute__((used)) static s32 FUNC_5(struct ixgbe_hw *VAR_4, u32 *VAR_5, u16 VAR_6,
        u16 VAR_7)
{
 s32 VAR_8 = VAR_0;
 u16 VAR_9;

 FUNC_0("ixgbe_read_mbx_vf");
 FUNC_3(VAR_7);


 VAR_8 = FUNC_4(VAR_4);
 if (VAR_8)
  goto out_no_read;


 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
  VAR_5[VAR_9] = FUNC_1(VAR_4, VAR_3, VAR_9);


 FUNC_2(VAR_4, VAR_1, VAR_2);


 VAR_4->mbx.stats.msgs_rx++;

out_no_read:
 return VAR_8;
}
