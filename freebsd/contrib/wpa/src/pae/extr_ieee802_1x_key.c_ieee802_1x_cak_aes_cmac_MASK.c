
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int context ;


 int VAR_0 ;
 int FUNC_0 (int const*,int,char*,int *,int,int,int *) ;
 int FUNC_1 (int const*,int const*,int *) ;

int FUNC_2(const u8 *VAR_1, size_t VAR_2, const u8 *VAR_3,
       const u8 *VAR_4, u8 *VAR_5, size_t VAR_6)
{
 u8 VAR_7[2 * VAR_0];

 FUNC_1(VAR_3, VAR_4, VAR_7);
 return FUNC_0(VAR_1, 8 * VAR_2, "IEEE8021 EAP CAK",
         VAR_7, sizeof(VAR_7) * 8, 8 * VAR_6, VAR_5);
}
