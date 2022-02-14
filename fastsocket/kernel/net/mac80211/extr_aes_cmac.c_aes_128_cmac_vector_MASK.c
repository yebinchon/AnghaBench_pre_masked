
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_cipher {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct crypto_cipher*,int*,int*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*,int*,int ) ;
 int FUNC_3 (int*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct crypto_cipher *VAR_2, size_t VAR_3,
    const u8 *VAR_4[], const size_t *VAR_5, u8 *VAR_6)
{
 u8 VAR_7[VAR_0], VAR_8[VAR_0];
 const u8 *VAR_9, *VAR_10;
 size_t VAR_11, VAR_12, VAR_13, VAR_14;

 FUNC_3(VAR_7, 0, VAR_0);

 VAR_14 = 0;
 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++)
  VAR_14 += VAR_5[VAR_12];
 VAR_13 = VAR_14;

 VAR_12 = 0;
 VAR_9 = VAR_4[0];
 VAR_10 = VAR_9 + VAR_5[0];

 while (VAR_13 >= VAR_0) {
  for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
   VAR_7[VAR_11] ^= *VAR_9++;
   if (VAR_9 >= VAR_10) {
    VAR_12++;
    VAR_9 = VAR_4[VAR_12];
    VAR_10 = VAR_9 + VAR_5[VAR_12];
   }
  }
  if (VAR_13 > VAR_0)
   FUNC_0(VAR_2, VAR_7, VAR_7);
  VAR_13 -= VAR_0;
 }

 FUNC_3(VAR_8, 0, VAR_0);
 FUNC_0(VAR_2, VAR_8, VAR_8);
 FUNC_1(VAR_8);

 if (VAR_13 || VAR_14 == 0) {
  for (VAR_11 = 0; VAR_11 < VAR_13; VAR_11++) {
   VAR_7[VAR_11] ^= *VAR_9++;
   if (VAR_9 >= VAR_10) {
    VAR_12++;
    VAR_9 = VAR_4[VAR_12];
    VAR_10 = VAR_9 + VAR_5[VAR_12];
   }
  }
  VAR_7[VAR_13] ^= 0x80;
  FUNC_1(VAR_8);
 }

 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++)
  VAR_8[VAR_11] ^= VAR_7[VAR_11];
 FUNC_0(VAR_2, VAR_8, VAR_8);
 FUNC_2(VAR_6, VAR_8, VAR_1);
}
