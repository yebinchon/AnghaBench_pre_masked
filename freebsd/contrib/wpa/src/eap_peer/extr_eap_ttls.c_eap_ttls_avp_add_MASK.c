
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int ,int ,int,size_t) ;
 int FUNC_2 (int *,int const*,size_t) ;

__attribute__((used)) static u8 * FUNC_3(u8 *VAR_0, u8 *VAR_1, u32 VAR_2,
        u32 VAR_3, int VAR_4,
        const u8 *VAR_5, size_t VAR_6)
{
 u8 *VAR_7;
 VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_6);
 FUNC_2(VAR_7, VAR_5, VAR_6);
 VAR_7 += VAR_6;
 FUNC_0(VAR_0, VAR_7);
 return VAR_7;
}
