
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sha384_state {void** state; scalar_t__ length; scalar_t__ curlen; } ;


 void* FUNC_0 (int) ;

void FUNC_1(struct sha384_state *VAR_0)
{
 VAR_0->curlen = 0;
 VAR_0->length = 0;
 VAR_0->state[0] = FUNC_0(0xcbbb9d5dc1059ed8);
 VAR_0->state[1] = FUNC_0(0x629a292a367cd507);
 VAR_0->state[2] = FUNC_0(0x9159015a3070dd17);
 VAR_0->state[3] = FUNC_0(0x152fecd8f70e5939);
 VAR_0->state[4] = FUNC_0(0x67332667ffc00b31);
 VAR_0->state[5] = FUNC_0(0x8eb44a8768581511);
 VAR_0->state[6] = FUNC_0(0xdb0c2e0d64f98fa7);
 VAR_0->state[7] = FUNC_0(0x47b5481dbefa4fa4);
}
