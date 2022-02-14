
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;


 int FUNC_0 (size_t*,int ,int ) ;
 size_t FUNC_1 (size_t,int,int ) ;
 size_t** VAR_0 ;

void FUNC_2(void *VAR_1, u16 VAR_2, u8 VAR_3, u32 VAR_4)
{
 u8 *VAR_5, *VAR_6;

 VAR_5 = (u8* const)VAR_1;
 VAR_6 = &VAR_5[VAR_0[0][VAR_3]];

 FUNC_0(VAR_5, 0, VAR_2);

 *VAR_6 = FUNC_1(VAR_3, 1, VAR_4);
}
