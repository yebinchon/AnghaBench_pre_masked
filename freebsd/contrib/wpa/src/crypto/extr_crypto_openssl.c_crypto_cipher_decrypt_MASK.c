
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_cipher {int dec; } ;


 int FUNC_0 (int ,int *,int*,int const*,size_t) ;

int FUNC_1(struct crypto_cipher *VAR_0, const u8 *VAR_1,
     u8 *VAR_2, size_t VAR_3)
{
 int VAR_4;
 VAR_4 = VAR_3;
 if (!FUNC_0(VAR_0->dec, VAR_2, &VAR_4, VAR_1, VAR_3))
  return -1;
 return 0;
}
