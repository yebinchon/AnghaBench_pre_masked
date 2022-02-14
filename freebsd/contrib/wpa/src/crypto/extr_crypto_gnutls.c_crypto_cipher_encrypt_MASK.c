
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_cipher {int enc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *,size_t,int const*,size_t) ;

int FUNC_1(struct crypto_cipher *VAR_1, const u8 *VAR_2,
     u8 *VAR_3, size_t VAR_4)
{
 if (FUNC_0(VAR_1->enc, VAR_3, VAR_4, VAR_2, VAR_4) !=
     VAR_0)
  return -1;
 return 0;
}
