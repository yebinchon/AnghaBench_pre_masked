
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct des_ctx {int dummy; } ;
typedef int ctx ;


 int VAR_0 ;
 int FUNC_0 (struct des_ctx*,int ,int*,int const*) ;
 int FUNC_1 (struct des_ctx*,int*) ;
 int FUNC_2 (struct des_ctx*,int ,int) ;

int FUNC_3(const u8 *VAR_1, const u8 *VAR_2, u8 *VAR_3)
{
 struct des_ctx VAR_4;
 u8 VAR_5[8], VAR_6, VAR_7;
 int VAR_8;


 VAR_6 = 0;
 for (VAR_8 = 0; VAR_8 < 7; VAR_8++) {
  VAR_7 = VAR_2[VAR_8];
  VAR_5[VAR_8] = (VAR_7 >> VAR_8) | VAR_6 | 1;
  VAR_6 = VAR_7 << (7 - VAR_8);
 }
 VAR_5[VAR_8] = VAR_6 | 1;

 FUNC_1(&VAR_4, VAR_5);
 FUNC_0(&VAR_4, VAR_0, VAR_3, VAR_1);
 FUNC_2(&VAR_4, 0, sizeof(VAR_4));
 return 0;
}
