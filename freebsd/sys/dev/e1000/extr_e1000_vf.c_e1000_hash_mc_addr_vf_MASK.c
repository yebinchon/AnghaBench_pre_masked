
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int mta_reg_count; } ;
struct e1000_hw {TYPE_1__ mac; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static u32 FUNC_1(struct e1000_hw *VAR_0, u8 *VAR_1)
{
 u32 VAR_2, VAR_3;
 u8 VAR_4 = 0;

 FUNC_0("e1000_hash_mc_addr_generic");


 VAR_3 = (VAR_0->mac.mta_reg_count * 32) - 1;





 while (VAR_3 >> VAR_4 != 0xFF)
  VAR_4++;

 VAR_2 = VAR_3 & (((VAR_1[4] >> (8 - VAR_4)) |
      (((u16) VAR_1[5]) << VAR_4)));

 return VAR_2;
}
