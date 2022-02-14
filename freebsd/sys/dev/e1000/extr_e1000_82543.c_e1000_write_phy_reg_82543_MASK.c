
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {int addr; } ;
struct e1000_hw {TYPE_1__ phy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct e1000_hw*,int,int) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_8, u32 VAR_9, u16 VAR_10)
{
 u32 VAR_11;
 s32 VAR_12 = VAR_1;

 FUNC_0("e1000_write_phy_reg_82543");

 if (VAR_9 > VAR_2) {
  FUNC_1("PHY Address %d is out of range\n", VAR_9);
  VAR_12 = -VAR_0;
  goto out;
 }







 FUNC_2(VAR_8, VAR_4, VAR_5);
 VAR_11 = ((VAR_7) | (VAR_9 << 2) | (VAR_8->phy.addr << 7) |
  (VAR_3 << 12) | (VAR_6 << 14));
 VAR_11 <<= 16;
 VAR_11 |= (u32)VAR_10;

 FUNC_2(VAR_8, VAR_11, 32);

out:
 return VAR_12;
}
