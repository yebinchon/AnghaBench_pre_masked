
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(u8 *VAR_1)
{
 u64 VAR_2, VAR_3, VAR_4;
 VAR_2 = ((u64) FUNC_1(VAR_1) << 16) | ((u64) FUNC_0(VAR_1 + 4));
 VAR_3 = (VAR_2 >> VAR_0) + 1;
 VAR_4 = (VAR_2 + 1) & ((1 << VAR_0) - 1);
 VAR_2 = (VAR_3 << VAR_0) | VAR_4;
 FUNC_3(VAR_1, VAR_2 >> 16);
 FUNC_2(VAR_1 + 4, VAR_2 & 0xffff);
}
