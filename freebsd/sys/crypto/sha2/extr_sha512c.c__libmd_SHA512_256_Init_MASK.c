
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


 VAR_0->state[0] = 0x22312194fc2bf72cULL;
 VAR_0->state[1] = 0x9f555fa3c84c64c2ULL;
 VAR_0->state[2] = 0x2393b86b6f53b151ULL;
 VAR_0->state[3] = 0x963877195940eabdULL;
 VAR_0->state[4] = 0x96283ee2a88effe3ULL;
 VAR_0->state[5] = 0xbe5e1e2553863992ULL;
 VAR_0->state[6] = 0x2b0199fc2c85b8aaULL;
 VAR_0->state[7] = 0x0eb72ddc81c52ca2ULL;
}
