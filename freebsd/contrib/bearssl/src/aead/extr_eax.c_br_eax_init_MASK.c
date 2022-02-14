
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned char* L2; unsigned char* L4; TYPE_2__ const** bctx; int * vtable; } ;
typedef TYPE_1__ br_eax_context ;
struct TYPE_7__ {int (* ctr ) (TYPE_2__ const**,unsigned char*,unsigned char*,int) ;} ;
typedef TYPE_2__ br_block_ctrcbc_class ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned char*) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 int FUNC_2 (TYPE_2__ const**,unsigned char*,unsigned char*,int) ;

void
FUNC_3(br_eax_context *VAR_1, const br_block_ctrcbc_class **VAR_2)
{
 unsigned char VAR_3[16], VAR_4[16];

 VAR_1->vtable = &VAR_0;
 VAR_1->bctx = VAR_2;




 FUNC_1(VAR_3, 0, sizeof VAR_3);
 FUNC_1(VAR_4, 0, sizeof VAR_4);
 (*VAR_2)->ctr(VAR_2, VAR_4, VAR_3, sizeof VAR_3);
 FUNC_0(VAR_1->L2, VAR_3);
 FUNC_0(VAR_1->L4, VAR_1->L2);
}
