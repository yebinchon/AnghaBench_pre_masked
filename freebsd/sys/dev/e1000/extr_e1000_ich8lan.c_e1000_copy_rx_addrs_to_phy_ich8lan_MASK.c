
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_5__ {int (* release ) (struct e1000_hw*) ;int (* write_reg_page ) (struct e1000_hw*,int ,scalar_t__) ;scalar_t__ (* acquire ) (struct e1000_hw*) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {scalar_t__ rar_entry_count; } ;
struct e1000_hw {TYPE_3__ phy; TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct e1000_hw*,int ) ;
 int FUNC_8 (struct e1000_hw*,scalar_t__*) ;
 scalar_t__ FUNC_9 (struct e1000_hw*,scalar_t__*) ;
 scalar_t__ FUNC_10 (struct e1000_hw*) ;
 int FUNC_11 (struct e1000_hw*,int ,scalar_t__) ;
 int FUNC_12 (struct e1000_hw*,int ,scalar_t__) ;
 int FUNC_13 (struct e1000_hw*,int ,scalar_t__) ;
 int FUNC_14 (struct e1000_hw*,int ,scalar_t__) ;
 int FUNC_15 (struct e1000_hw*) ;

void FUNC_16(struct e1000_hw *VAR_1)
{
 u32 VAR_2;
 u16 VAR_3, VAR_4 = 0;
 s32 VAR_5;

 FUNC_4("e1000_copy_rx_addrs_to_phy_ich8lan");

 VAR_5 = VAR_1->phy.ops.acquire(VAR_1);
 if (VAR_5)
  return;
 VAR_5 = FUNC_9(VAR_1, &VAR_4);
 if (VAR_5)
  goto release;


 for (VAR_3 = 0; VAR_3 < (VAR_1->mac.rar_entry_count); VAR_3++) {
  VAR_2 = FUNC_7(VAR_1, FUNC_6(VAR_3));
  VAR_1->phy.ops.write_reg_page(VAR_1, FUNC_2(VAR_3),
        (u16)(VAR_2 & 0xFFFF));
  VAR_1->phy.ops.write_reg_page(VAR_1, FUNC_3(VAR_3),
        (u16)((VAR_2 >> 16) & 0xFFFF));

  VAR_2 = FUNC_7(VAR_1, FUNC_5(VAR_3));
  VAR_1->phy.ops.write_reg_page(VAR_1, FUNC_1(VAR_3),
        (u16)(VAR_2 & 0xFFFF));
  VAR_1->phy.ops.write_reg_page(VAR_1, FUNC_0(VAR_3),
        (u16)((VAR_2 & VAR_0)
       >> 16));
 }

 FUNC_8(VAR_1, &VAR_4);

release:
 VAR_1->phy.ops.release(VAR_1);
}
