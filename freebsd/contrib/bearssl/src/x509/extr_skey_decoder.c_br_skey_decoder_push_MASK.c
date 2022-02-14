
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t hlen; int cpu; void const* hbuf; } ;
typedef TYPE_1__ br_skey_decoder_context ;


 int FUNC_0 (int *) ;

void
FUNC_1(br_skey_decoder_context *VAR_0,
 const void *VAR_1, size_t VAR_2)
{
 VAR_0->hbuf = VAR_1;
 VAR_0->hlen = VAR_2;
 FUNC_0(&VAR_0->cpu);
}
