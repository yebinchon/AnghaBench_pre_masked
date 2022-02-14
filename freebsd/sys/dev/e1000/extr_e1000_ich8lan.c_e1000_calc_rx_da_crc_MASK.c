
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (char*) ;

__attribute__((used)) static u32 FUNC_1(u8 VAR_0[])
{
 u32 VAR_1 = 0xEDB88320;
 u32 VAR_2, VAR_3, VAR_4, VAR_5;

 FUNC_0("e1000_calc_rx_da_crc");

 VAR_5 = 0xffffffff;
 for (VAR_2 = 0; VAR_2 < 6; VAR_2++) {
  VAR_5 = VAR_5 ^ VAR_0[VAR_2];
  for (VAR_3 = 8; VAR_3 > 0; VAR_3--) {
   VAR_4 = (VAR_5 & 1) * (-1);
   VAR_5 = (VAR_5 >> 1) ^ (VAR_1 & VAR_4);
  }
 }
 return ~VAR_5;
}
