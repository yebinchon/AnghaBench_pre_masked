
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int (* init ) (int *,unsigned char*,int) ;} ;
typedef TYPE_2__ br_block_ctr_class ;
struct TYPE_7__ {int vtable; } ;
struct TYPE_9__ {scalar_t__ cc; TYPE_1__ sk; int * vtable; } ;
typedef TYPE_3__ br_aesctr_drbg_context ;


 int FUNC_0 (TYPE_3__*,void const*,size_t) ;
 int VAR_0 ;
 int FUNC_1 (unsigned char*,int ,int) ;
 int FUNC_2 (int *,unsigned char*,int) ;

void
FUNC_3(br_aesctr_drbg_context *VAR_1,
 const br_block_ctr_class *VAR_2,
 const void *VAR_3, size_t VAR_4)
{
 unsigned char VAR_5[16];

 VAR_1->vtable = &VAR_0;
 FUNC_1(VAR_5, 0, sizeof VAR_5);
 VAR_2->init(&VAR_1->sk.vtable, VAR_5, 16);
 VAR_1->cc = 0;
 FUNC_0(VAR_1, VAR_3, VAR_4);
}
