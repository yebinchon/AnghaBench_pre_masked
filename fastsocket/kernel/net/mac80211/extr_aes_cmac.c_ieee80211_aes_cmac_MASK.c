
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_cipher {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct crypto_cipher*,int,int const**,size_t*,int *) ;
 int FUNC_1 (int *,int ,int) ;

void FUNC_2(struct crypto_cipher *VAR_2, const u8 *VAR_3,
   const u8 *VAR_4, size_t VAR_5, u8 *VAR_6)
{
 const u8 *VAR_7[3];
 size_t VAR_8[3];
 u8 VAR_9[VAR_1];

 FUNC_1(VAR_9, 0, VAR_1);
 VAR_7[0] = VAR_3;
 VAR_8[0] = VAR_0;
 VAR_7[1] = VAR_4;
 VAR_8[1] = VAR_5 - VAR_1;
 VAR_7[2] = VAR_9;
 VAR_8[2] = VAR_1;

 FUNC_0(VAR_2, 3, VAR_7, VAR_8, VAR_6);
}
