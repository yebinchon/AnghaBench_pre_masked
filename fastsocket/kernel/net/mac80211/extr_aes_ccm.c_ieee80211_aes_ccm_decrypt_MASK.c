
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_cipher {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t,int) ;
 int FUNC_1 (struct crypto_cipher*,int*,int*) ;
 int FUNC_2 (struct crypto_cipher*,int*,int*) ;

int FUNC_3(struct crypto_cipher *VAR_2, u8 *VAR_3,
         u8 *VAR_4, size_t VAR_5, u8 *VAR_6, u8 *VAR_7)
{
 int VAR_8, VAR_9, VAR_10, VAR_11;
 u8 *VAR_12, *VAR_13, *VAR_14, *VAR_15, *VAR_16, *VAR_17;

 VAR_14 = VAR_3;
 VAR_15 = VAR_3 + VAR_0;
 VAR_16 = VAR_3 + 2 * VAR_0;
 VAR_17 = VAR_3 + 3 * VAR_0;

 VAR_11 = FUNC_0(VAR_5, VAR_0);
 VAR_10 = VAR_5 % VAR_0;
 FUNC_1(VAR_2, VAR_3, VAR_16);


 VAR_13 = VAR_4;
 VAR_12 = VAR_7;
 for (VAR_9 = 1; VAR_9 <= VAR_11; VAR_9++) {
  int VAR_18 = (VAR_9 == VAR_11 && VAR_10) ?
   VAR_10 : VAR_0;


  VAR_17[14] = (VAR_9 >> 8) & 0xff;
  VAR_17[15] = VAR_9 & 0xff;
  FUNC_2(VAR_2, VAR_14, VAR_17);
  for (VAR_8 = 0; VAR_8 < VAR_18; VAR_8++) {
   *VAR_12 = *VAR_13++ ^ VAR_14[VAR_8];
   VAR_16[VAR_8] ^= *VAR_12++;
  }
  FUNC_2(VAR_2, VAR_16, VAR_16);
 }

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  if ((VAR_6[VAR_8] ^ VAR_15[VAR_8]) != VAR_16[VAR_8])
   return -1;
 }

 return 0;
}
