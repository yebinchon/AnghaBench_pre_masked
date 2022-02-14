
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int skey; int num_rounds; int * vtable; } ;
typedef TYPE_1__ br_aes_ct64_ctrcbc_keys ;


 int VAR_0 ;
 int FUNC_0 (int ,void const*,size_t) ;

void
FUNC_1(br_aes_ct64_ctrcbc_keys *VAR_1,
 const void *VAR_2, size_t VAR_3)
{
 VAR_1->vtable = &VAR_0;
 VAR_1->num_rounds = FUNC_0(VAR_1->skey, VAR_2, VAR_3);
}
