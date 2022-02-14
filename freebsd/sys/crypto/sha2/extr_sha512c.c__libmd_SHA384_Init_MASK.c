
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* state; scalar_t__* count; } ;
typedef TYPE_1__ SHA384_CTX ;



void
FUNC_0(SHA384_CTX * VAR_0)
{


 VAR_0->count[0] = VAR_0->count[1] = 0;


 VAR_0->state[0] = 0xcbbb9d5dc1059ed8ULL;
 VAR_0->state[1] = 0x629a292a367cd507ULL;
 VAR_0->state[2] = 0x9159015a3070dd17ULL;
 VAR_0->state[3] = 0x152fecd8f70e5939ULL;
 VAR_0->state[4] = 0x67332667ffc00b31ULL;
 VAR_0->state[5] = 0x8eb44a8768581511ULL;
 VAR_0->state[6] = 0xdb0c2e0d64f98fa7ULL;
 VAR_0->state[7] = 0x47b5481dbefa4fa4ULL;
}
