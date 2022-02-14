
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
typedef int len_buf ;


 int VAR_0 ;
 int FUNC_0 (int const*,size_t) ;
 int FUNC_1 (int const*,int const*,int,int const*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int ,char*,int const*,int) ;

__attribute__((used)) static void FUNC_4(const u8 *VAR_1, const u8 *VAR_2, size_t VAR_3,
     const u8 *VAR_4, size_t VAR_5, u8 *VAR_6)
{
 u8 VAR_7[16];







 FUNC_2(VAR_6);
 FUNC_1(VAR_1, VAR_2, VAR_3, VAR_6);
 FUNC_1(VAR_1, VAR_4, VAR_5, VAR_6);
 FUNC_0(VAR_7, VAR_3 * 8);
 FUNC_0(VAR_7 + 8, VAR_5 * 8);
 FUNC_1(VAR_1, VAR_7, sizeof(VAR_7), VAR_6);

 FUNC_3(VAR_0, "S = GHASH_H(...)", VAR_6, 16);
}
