
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* state; scalar_t__ count; } ;
typedef TYPE_1__ SHA224_CTX ;



void
FUNC_0(SHA224_CTX * VAR_0)
{


 VAR_0->count = 0;


 VAR_0->state[0] = 0xC1059ED8;
 VAR_0->state[1] = 0x367CD507;
 VAR_0->state[2] = 0x3070DD17;
 VAR_0->state[3] = 0xF70E5939;
 VAR_0->state[4] = 0xFFC00B31;
 VAR_0->state[5] = 0x68581511;
 VAR_0->state[6] = 0x64f98FA7;
 VAR_0->state[7] = 0xBEFA4FA4;
}
