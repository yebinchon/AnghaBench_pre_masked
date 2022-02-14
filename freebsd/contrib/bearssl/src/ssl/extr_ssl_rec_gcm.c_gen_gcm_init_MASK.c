
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int vtable; } ;
struct TYPE_7__ {unsigned char* h; TYPE_1__ bc; int iv; int gh; scalar_t__ seq; } ;
typedef TYPE_2__ br_sslrec_gcm_context ;
typedef int br_ghash ;
struct TYPE_8__ {int (* run ) (int *,unsigned char*,int ,unsigned char*,int) ;int (* init ) (int *,void const*,size_t) ;} ;
typedef TYPE_3__ br_block_ctr_class ;


 int FUNC_0 (int ,void const*,int) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 int FUNC_2 (int *,void const*,size_t) ;
 int FUNC_3 (int *,unsigned char*,int ,unsigned char*,int) ;

__attribute__((used)) static void
FUNC_4(br_sslrec_gcm_context *VAR_0,
 const br_block_ctr_class *VAR_1,
 const void *VAR_2, size_t VAR_3,
 br_ghash VAR_4,
 const void *VAR_5)
{
 unsigned char VAR_6[12];

 VAR_0->seq = 0;
 VAR_1->init(&VAR_0->bc.vtable, VAR_2, VAR_3);
 VAR_0->gh = VAR_4;
 FUNC_0(VAR_0->iv, VAR_5, sizeof VAR_0->iv);
 FUNC_1(VAR_0->h, 0, sizeof VAR_0->h);
 FUNC_1(VAR_6, 0, sizeof VAR_6);
 VAR_1->run(&VAR_0->bc.vtable, VAR_6, 0, VAR_0->h, sizeof VAR_0->h);
}
