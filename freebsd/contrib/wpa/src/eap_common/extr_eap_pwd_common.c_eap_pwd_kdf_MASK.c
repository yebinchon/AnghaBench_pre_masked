
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct crypto_hash {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct crypto_hash*,int*,size_t*) ;
 struct crypto_hash* FUNC_1 (int ,int const*,size_t) ;
 int FUNC_2 (struct crypto_hash*,int const*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int*,int*,size_t) ;

__attribute__((used)) static int FUNC_5(const u8 *VAR_2, size_t VAR_3, const u8 *VAR_4,
         size_t VAR_5, u8 *VAR_6, size_t VAR_7)
{
 struct crypto_hash *VAR_8;
 u8 VAR_9[VAR_1];
 u16 VAR_10, VAR_11, VAR_12;
 size_t VAR_13, VAR_14 = 0, VAR_15;

 VAR_13 = (VAR_7 + 7) / 8;
 VAR_11 = 0;
 VAR_12 = FUNC_3(VAR_7);
 while (VAR_14 < VAR_13) {
  VAR_11++;
  VAR_10 = FUNC_3(VAR_11);
  VAR_8 = FUNC_1(VAR_0,
     VAR_2, VAR_3);
  if (VAR_8 == ((void*)0))
   return -1;
  if (VAR_11 > 1)
   FUNC_2(VAR_8, VAR_9, VAR_1);
  FUNC_2(VAR_8, (u8 *) &VAR_10, sizeof(u16));
  FUNC_2(VAR_8, VAR_4, VAR_5);
  FUNC_2(VAR_8, (u8 *) &VAR_12, sizeof(u16));
  VAR_15 = VAR_1;
  if (FUNC_0(VAR_8, VAR_9, &VAR_15) < 0)
   return -1;
  if ((VAR_14 + VAR_15) > VAR_13)
   FUNC_4(VAR_6 + VAR_14, VAR_9, VAR_13 - VAR_14);
  else
   FUNC_4(VAR_6 + VAR_14, VAR_9, VAR_15);
  VAR_14 += VAR_15;
 }


 if (VAR_7 % 8) {
  u8 VAR_16 = 0xff;
  VAR_16 <<= (8 - (VAR_7 % 8));
  VAR_6[VAR_13 - 1] &= VAR_16;
 }

 return 0;
}
