
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_5__ {int (* release ) (struct e1000_hw*) ;int (* write_reg_page ) (struct e1000_hw*,scalar_t__,int ) ;scalar_t__ (* acquire ) (struct e1000_hw*) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {int mta_reg_count; int* mta_shadow; } ;
struct e1000_hw {TYPE_3__ phy; TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct e1000_hw*,int *) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int *) ;
 int FUNC_4 (struct e1000_hw*,int *,int ) ;
 scalar_t__ FUNC_5 (struct e1000_hw*) ;
 int FUNC_6 (struct e1000_hw*,scalar_t__,int ) ;
 int FUNC_7 (struct e1000_hw*,scalar_t__,int ) ;
 int FUNC_8 (struct e1000_hw*) ;

__attribute__((used)) static void FUNC_9(struct e1000_hw *VAR_0,
           u8 *VAR_1,
           u32 VAR_2)
{
 u16 VAR_3 = 0;
 int VAR_4;
 s32 VAR_5;

 FUNC_1("e1000_update_mc_addr_list_pch2lan");

 FUNC_4(VAR_0, VAR_1, VAR_2);

 VAR_5 = VAR_0->phy.ops.acquire(VAR_0);
 if (VAR_5)
  return;

 VAR_5 = FUNC_3(VAR_0, &VAR_3);
 if (VAR_5)
  goto release;

 for (VAR_4 = 0; VAR_4 < VAR_0->mac.mta_reg_count; VAR_4++) {
  VAR_0->phy.ops.write_reg_page(VAR_0, FUNC_0(VAR_4),
        (u16)(VAR_0->mac.mta_shadow[VAR_4] &
       0xFFFF));
  VAR_0->phy.ops.write_reg_page(VAR_0, (FUNC_0(VAR_4) + 1),
        (u16)((VAR_0->mac.mta_shadow[VAR_4] >> 16) &
       0xFFFF));
 }

 FUNC_2(VAR_0, &VAR_3);

release:
 VAR_0->phy.ops.release(VAR_0);
}
