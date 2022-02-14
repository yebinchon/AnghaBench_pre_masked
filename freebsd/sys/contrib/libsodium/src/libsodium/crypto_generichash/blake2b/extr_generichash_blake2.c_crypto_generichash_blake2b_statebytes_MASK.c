
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int crypto_generichash_blake2b_state ;



size_t
FUNC_0(void)
{
    return (sizeof(crypto_generichash_blake2b_state) + (size_t) 63U)
        & ~(size_t) 63U;
}
