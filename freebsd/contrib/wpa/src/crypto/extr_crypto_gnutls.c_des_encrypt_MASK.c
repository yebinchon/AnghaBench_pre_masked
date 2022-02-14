
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int gcry_cipher_hd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int*,int,int const*,int) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int ,int*,int) ;
 int FUNC_4 (int ) ;

int FUNC_5(const u8 *VAR_2, const u8 *VAR_3, u8 *VAR_4)
{
 gcry_cipher_hd_t VAR_5;
 u8 VAR_6[8], VAR_7, VAR_8;
 int VAR_9;


 VAR_7 = 0;
 for (VAR_9 = 0; VAR_9 < 7; VAR_9++) {
  VAR_8 = VAR_3[VAR_9];
  VAR_6[VAR_9] = (VAR_8 >> VAR_9) | VAR_7 | 1;
  VAR_7 = VAR_8 << (7 - VAR_9);
 }
 VAR_6[VAR_9] = VAR_7 | 1;

 FUNC_2(&VAR_5, VAR_0, VAR_1, 0);
 FUNC_4(FUNC_3(VAR_5, VAR_6, 8));
 FUNC_1(VAR_5, VAR_4, 8, VAR_2, 8);
 FUNC_0(VAR_5);
 return 0;
}
