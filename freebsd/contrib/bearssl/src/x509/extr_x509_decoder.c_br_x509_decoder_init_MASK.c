
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * rp; int * dp; } ;
struct TYPE_6__ {void (* append_dn ) (void*,void const*,size_t) ;TYPE_3__ cpu; int * rp_stack; int * dp_stack; void* append_dn_ctx; } ;
typedef TYPE_1__ br_x509_decoder_context ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

void
FUNC_3(br_x509_decoder_context *VAR_0,
 void (*VAR_1)(void *VAR_2, const void *VAR_3, size_t VAR_4),
 void *VAR_5)
{
 FUNC_2(VAR_0, 0, sizeof *VAR_0);





 VAR_0->append_dn = VAR_1;
 VAR_0->append_dn_ctx = VAR_5;
 VAR_0->cpu.dp = &VAR_0->dp_stack[0];
 VAR_0->cpu.rp = &VAR_0->rp_stack[0];
 FUNC_0(&VAR_0->cpu);
 FUNC_1(&VAR_0->cpu);
}
