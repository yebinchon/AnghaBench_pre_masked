
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* state; scalar_t__ count; } ;
typedef TYPE_1__ SHA256_CTX ;



void
FUNC_0(SHA256_CTX * VAR_0)
{


 VAR_0->count = 0;


 VAR_0->state[0] = 0x6A09E667;
 VAR_0->state[1] = 0xBB67AE85;
 VAR_0->state[2] = 0x3C6EF372;
 VAR_0->state[3] = 0xA54FF53A;
 VAR_0->state[4] = 0x510E527F;
 VAR_0->state[5] = 0x9B05688C;
 VAR_0->state[6] = 0x1F83D9AB;
 VAR_0->state[7] = 0x5BE0CD19;
}
