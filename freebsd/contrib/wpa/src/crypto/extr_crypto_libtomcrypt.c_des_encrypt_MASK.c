
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int symmetric_key ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int const*,int*,int *) ;
 int FUNC_2 (int*,int,int ,int *) ;

int FUNC_3(const u8 *VAR_0, const u8 *VAR_1, u8 *VAR_2)
{
 u8 VAR_3[8], VAR_4, VAR_5;
 int VAR_6;
 symmetric_key VAR_7;


 VAR_4 = 0;
 for (VAR_6 = 0; VAR_6 < 7; VAR_6++) {
  VAR_5 = VAR_1[VAR_6];
  VAR_3[VAR_6] = (VAR_5 >> VAR_6) | VAR_4 | 1;
  VAR_4 = VAR_5 << (7 - VAR_6);
 }
 VAR_3[VAR_6] = VAR_4 | 1;

 FUNC_2(VAR_3, 8, 0, &VAR_7);
 FUNC_1(VAR_0, VAR_2, &VAR_7);
 FUNC_0(&VAR_7);
 return 0;
}
