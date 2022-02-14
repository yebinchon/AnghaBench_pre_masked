
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int vtable; } ;
struct TYPE_7__ {size_t tag_len; int iv; TYPE_1__ bc; scalar_t__ seq; } ;
typedef TYPE_2__ br_sslrec_ccm_context ;
struct TYPE_8__ {int (* init ) (int *,void const*,size_t) ;} ;
typedef TYPE_3__ br_block_ctrcbc_class ;


 int FUNC_0 (int ,void const*,int) ;
 int FUNC_1 (int *,void const*,size_t) ;

__attribute__((used)) static void
FUNC_2(br_sslrec_ccm_context *VAR_0,
 const br_block_ctrcbc_class *VAR_1,
 const void *VAR_2, size_t VAR_3,
 const void *VAR_4, size_t VAR_5)
{
 VAR_0->seq = 0;
 VAR_1->init(&VAR_0->bc.vtable, VAR_2, VAR_3);
 FUNC_0(VAR_0->iv, VAR_4, sizeof VAR_0->iv);
 VAR_0->tag_len = VAR_5;
}
