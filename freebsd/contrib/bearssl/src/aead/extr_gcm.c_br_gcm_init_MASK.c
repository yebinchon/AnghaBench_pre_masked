
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int br_ghash ;
struct TYPE_6__ {unsigned char* h; int gh; TYPE_2__ const** bctx; int * vtable; } ;
typedef TYPE_1__ br_gcm_context ;
struct TYPE_7__ {int (* run ) (TYPE_2__ const**,unsigned char*,int ,unsigned char*,int) ;} ;
typedef TYPE_2__ br_block_ctr_class ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int ,int) ;
 int FUNC_1 (TYPE_2__ const**,unsigned char*,int ,unsigned char*,int) ;

void
FUNC_2(br_gcm_context *VAR_1, const br_block_ctr_class **VAR_2, br_ghash VAR_3)
{
 unsigned char VAR_4[12];

 VAR_1->vtable = &VAR_0;
 VAR_1->bctx = VAR_2;
 VAR_1->gh = VAR_3;







 FUNC_0(VAR_1->h, 0, sizeof VAR_1->h);
 FUNC_0(VAR_4, 0, sizeof VAR_4);
 (*VAR_2)->run(VAR_2, VAR_4, 0, VAR_1->h, sizeof VAR_1->h);
}
