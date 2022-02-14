
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct e1000_hw {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct e1000_hw*,int *) ;
 int FUNC_3 (struct e1000_hw*,int*,int) ;

void FUNC_4(struct e1000_hw *VAR_5,
      u8 *VAR_6, u32 VAR_7)
{
 u32 VAR_8[VAR_0];
 u16 *VAR_9 = (u16 *)&VAR_8[1];
 u32 VAR_10;
 u32 VAR_11;

 FUNC_0("e1000_update_mc_addr_list_vf");
 FUNC_1("MC Addr Count = %d\n", VAR_7);

 if (VAR_7 > 30) {
  VAR_8[0] |= VAR_2;
  VAR_7 = 30;
 }

 VAR_8[0] = VAR_1;
 VAR_8[0] |= VAR_7 << VAR_3;

 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
  VAR_10 = FUNC_2(VAR_5, VAR_6);
  FUNC_1("Hash value = 0x%03X\n", VAR_10);
  VAR_9[VAR_11] = VAR_10 & 0x0FFF;
  VAR_6 += VAR_4;
 }

 FUNC_3(VAR_5, VAR_8, VAR_0);
}
