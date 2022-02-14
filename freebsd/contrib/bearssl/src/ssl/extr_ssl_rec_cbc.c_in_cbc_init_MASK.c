
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int vtable; } ;
struct TYPE_7__ {size_t mac_len; int explicit_IV; int iv; int mac; TYPE_1__ bc; scalar_t__ seq; int * vtable; } ;
typedef TYPE_2__ br_sslrec_in_cbc_context ;
typedef int br_hash_class ;
struct TYPE_8__ {int block_size; int (* init ) (int *,void const*,size_t) ;} ;
typedef TYPE_3__ br_block_cbcdec_class ;


 int FUNC_0 (int *,int const*,void const*,size_t) ;
 int VAR_0 ;
 int FUNC_1 (int ,void const*,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *,void const*,size_t) ;

__attribute__((used)) static void
FUNC_4(br_sslrec_in_cbc_context *VAR_1,
 const br_block_cbcdec_class *VAR_2,
 const void *VAR_3, size_t VAR_4,
 const br_hash_class *VAR_5,
 const void *VAR_6, size_t VAR_7, size_t VAR_8,
 const void *VAR_9)
{
 VAR_1->vtable = &VAR_0;
 VAR_1->seq = 0;
 VAR_2->init(&VAR_1->bc.vtable, VAR_3, VAR_4);
 FUNC_0(&VAR_1->mac, VAR_5, VAR_6, VAR_7);
 VAR_1->mac_len = VAR_8;
 if (VAR_9 == ((void*)0)) {
  FUNC_2(VAR_1->iv, 0, sizeof VAR_1->iv);
  VAR_1->explicit_IV = 1;
 } else {
  FUNC_1(VAR_1->iv, VAR_9, VAR_2->block_size);
  VAR_1->explicit_IV = 0;
 }
}
