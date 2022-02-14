
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int context ;


 int FUNC_0 (int const*,int,char*,int *,int,int,int *) ;
 int FUNC_1 (int *,int const*,size_t) ;
 int FUNC_2 (int *,int ,int) ;

int FUNC_3(const u8 *VAR_0, size_t VAR_1, const u8 *VAR_2,
       size_t VAR_3, u8 *VAR_4, size_t VAR_5)
{
 u8 VAR_6[16];


 FUNC_2(VAR_6, 0, sizeof(VAR_6));
 FUNC_1(VAR_6, VAR_2, (VAR_3 < 16) ? VAR_3 : 16);

 return FUNC_0(VAR_0, 8 * VAR_1, "IEEE8021 KEK",
         VAR_6, sizeof(VAR_6) * 8,
         8 * VAR_5, VAR_4);
}
