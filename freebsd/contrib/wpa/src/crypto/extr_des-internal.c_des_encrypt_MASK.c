
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int pkey ;
typedef int ek ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int*,int*) ;
 int FUNC_3 (int*,int ,int*) ;
 int FUNC_4 (int*,int ,int) ;

int FUNC_5(const u8 *VAR_0, const u8 *VAR_1, u8 *VAR_2)
{
 u8 VAR_3[8], VAR_4, VAR_5;
 int VAR_6;
 u32 VAR_7[32], VAR_8[2];


 VAR_4 = 0;
 for (VAR_6 = 0; VAR_6 < 7; VAR_6++) {
  VAR_5 = VAR_1[VAR_6];
  VAR_3[VAR_6] = (VAR_5 >> VAR_6) | VAR_4 | 1;
  VAR_4 = VAR_5 << (7 - VAR_6);
 }
 VAR_3[VAR_6] = VAR_4 | 1;

 FUNC_3(VAR_3, 0, VAR_7);

 VAR_8[0] = FUNC_0(VAR_0);
 VAR_8[1] = FUNC_0(VAR_0 + 4);
 FUNC_2(VAR_8, VAR_7);
 FUNC_1(VAR_2, VAR_8[0]);
 FUNC_1(VAR_2 + 4, VAR_8[1]);

 FUNC_4(VAR_3, 0, sizeof(VAR_3));
 FUNC_4(VAR_7, 0, sizeof(VAR_7));
 return 0;
}
