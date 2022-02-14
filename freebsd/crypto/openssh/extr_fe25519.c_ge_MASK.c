
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int crypto_uint32 ;



__attribute__((used)) static crypto_uint32 FUNC_0(crypto_uint32 VAR_0,crypto_uint32 VAR_1)
{
  unsigned int VAR_2 = VAR_0;
  VAR_2 -= (unsigned int) VAR_1;
  VAR_2 >>= 31;
  VAR_2 ^= 1;
  return VAR_2;
}
