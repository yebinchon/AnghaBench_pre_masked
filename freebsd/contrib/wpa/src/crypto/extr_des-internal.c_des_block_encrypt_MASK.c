
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int const*) ;

void FUNC_3(const u8 *VAR_0, const u32 *VAR_1, u8 *VAR_2)
{
 u32 VAR_3[2];
 VAR_3[0] = FUNC_0(VAR_0);
 VAR_3[1] = FUNC_0(VAR_0 + 4);
 FUNC_2(VAR_3, VAR_1);
 FUNC_1(VAR_2, VAR_3[0]);
 FUNC_1(VAR_2 + 4, VAR_3[1]);
}
