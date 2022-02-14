
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bkt_hash; } ;
union ixgbe_atr_input {int* dword_stream; TYPE_1__ formatted; } ;
typedef int u32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

void FUNC_2(union ixgbe_atr_input *VAR_0,
       union ixgbe_atr_input *VAR_1)
{

 u32 VAR_2, VAR_3, VAR_4;
 u32 VAR_5 = 0;
 u32 VAR_6 = 0;
 u32 VAR_7 = 0;


 for (VAR_7 = 0; VAR_7 < 14; VAR_7++)
  VAR_0->dword_stream[VAR_7] &= VAR_1->dword_stream[VAR_7];


 VAR_4 = FUNC_1(VAR_0->dword_stream[0]);


 for (VAR_7 = 1; VAR_7 <= 13; VAR_7++)
  VAR_6 ^= VAR_0->dword_stream[VAR_7];
 VAR_2 = FUNC_1(VAR_6);


 VAR_3 = (VAR_2 >> 16) | (VAR_2 << 16);


 VAR_2 ^= VAR_4 ^ (VAR_4 >> 16);


 FUNC_0(0);






 VAR_3 ^= VAR_4 ^ (VAR_4 << 16);


 for (VAR_7 = 1; VAR_7 <= 15; VAR_7++)
  FUNC_0(VAR_7);





 VAR_0->formatted.bkt_hash = VAR_5 & 0x1FFF;
}
