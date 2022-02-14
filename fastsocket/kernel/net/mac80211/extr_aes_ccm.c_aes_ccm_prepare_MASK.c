
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_cipher {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct crypto_cipher*,int*,int*) ;

__attribute__((used)) static void FUNC_1(struct crypto_cipher *VAR_1, u8 *VAR_2, u8 *VAR_3)
{
 int VAR_4;
 u8 *VAR_5, *VAR_6, *VAR_7, *VAR_8;

 VAR_5 = VAR_2 + 3 * VAR_0;
 VAR_6 = VAR_2 + 4 * VAR_0;
 VAR_7 = VAR_2;
 VAR_8 = VAR_2 + VAR_0;

 FUNC_0(VAR_1, VAR_7, VAR_5);


 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_6[VAR_4] ^= VAR_7[VAR_4];
 FUNC_0(VAR_1, VAR_7, VAR_6);

 VAR_6 += VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_6[VAR_4] ^= VAR_7[VAR_4];
 FUNC_0(VAR_1, VAR_3, VAR_6);


 VAR_5[0] &= 0x07;


 VAR_5[14] = 0;
 VAR_5[15] = 0;
 FUNC_0(VAR_1, VAR_8, VAR_5);
}
