
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;


 int FUNC_0 (size_t*,int ,int ) ;
 size_t** VAR_0 ;
 size_t FUNC_1 (size_t,int,int ) ;

void FUNC_2(void *VAR_1, u16 VAR_2, u8 VAR_3, u32 VAR_4)
{
 u8 *VAR_5, *VAR_6, *VAR_7, *VAR_8;

 VAR_8 = (u8* const)VAR_1;
 VAR_5 = &VAR_8[VAR_0[0][VAR_3]];
 VAR_6 = &VAR_8[VAR_0[1][VAR_3]];
 VAR_7 = &VAR_8[VAR_0[2][VAR_3]];

 FUNC_0(VAR_8, 0, VAR_2);

 *VAR_5 = FUNC_1(VAR_3, 3, VAR_4);
 *VAR_6 = FUNC_1(VAR_3, 4, VAR_4);
 *VAR_7 = FUNC_1(VAR_3, 5, VAR_4);
}
