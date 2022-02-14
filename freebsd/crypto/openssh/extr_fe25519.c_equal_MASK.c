
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int crypto_uint32 ;



__attribute__((used)) static crypto_uint32 FUNC_0(crypto_uint32 VAR_0,crypto_uint32 VAR_1)
{
  crypto_uint32 VAR_2 = VAR_0 ^ VAR_1;
  VAR_2 -= 1;
  VAR_2 >>= 31;
  return VAR_2;
}
