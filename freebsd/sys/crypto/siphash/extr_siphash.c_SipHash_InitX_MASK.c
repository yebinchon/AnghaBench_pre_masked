
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ b64; } ;
struct TYPE_5__ {int* v; int rounds_compr; int rounds_final; int initialized; scalar_t__ buflen; scalar_t__ bytes; TYPE_1__ buf; } ;
typedef TYPE_2__ SIPHASH_CTX ;



void
FUNC_0(SIPHASH_CTX *VAR_0, int VAR_1, int VAR_2)
{

 VAR_0->v[0] = 0x736f6d6570736575ull;
 VAR_0->v[1] = 0x646f72616e646f6dull;
 VAR_0->v[2] = 0x6c7967656e657261ull;
 VAR_0->v[3] = 0x7465646279746573ull;
 VAR_0->buf.b64 = 0;
 VAR_0->bytes = 0;
 VAR_0->buflen = 0;
 VAR_0->rounds_compr = VAR_1;
 VAR_0->rounds_final = VAR_2;
 VAR_0->initialized = 1;
}
