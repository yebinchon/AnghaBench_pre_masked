
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* state; scalar_t__* count; } ;
typedef TYPE_1__ SHA512_CTX ;



void
FUNC_0(SHA512_CTX * VAR_0)
{


 VAR_0->count[0] = VAR_0->count[1] = 0;


 VAR_0->state[0] = 0x8c3d37c819544da2ULL;
 VAR_0->state[1] = 0x73e1996689dcd4d6ULL;
 VAR_0->state[2] = 0x1dfab7ae32ff9c82ULL;
 VAR_0->state[3] = 0x679dd514582f9fcfULL;
 VAR_0->state[4] = 0x0f6d2b697bd44da8ULL;
 VAR_0->state[5] = 0x77e36f7304c48942ULL;
 VAR_0->state[6] = 0x3f9d85a86a1d36c8ULL;
 VAR_0->state[7] = 0x1112e6ad91d692a1ULL;
}
