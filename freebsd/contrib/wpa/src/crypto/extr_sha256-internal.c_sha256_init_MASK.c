
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sha256_state {int* state; scalar_t__ length; scalar_t__ curlen; } ;



void FUNC_0(struct sha256_state *VAR_0)
{
 VAR_0->curlen = 0;
 VAR_0->length = 0;
 VAR_0->state[0] = 0x6A09E667UL;
 VAR_0->state[1] = 0xBB67AE85UL;
 VAR_0->state[2] = 0x3C6EF372UL;
 VAR_0->state[3] = 0xA54FF53AUL;
 VAR_0->state[4] = 0x510E527FUL;
 VAR_0->state[5] = 0x9B05688CUL;
 VAR_0->state[6] = 0x1F83D9ABUL;
 VAR_0->state[7] = 0x5BE0CD19UL;
}
