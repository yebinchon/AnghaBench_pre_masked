
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int vtable; } ;
struct TYPE_7__ {TYPE_2__ dn_hash; TYPE_1__* dn_hash_impl; } ;
typedef TYPE_3__ br_x509_minimal_context ;
struct TYPE_5__ {int (* out ) (int *,unsigned char*) ;int (* update ) (int *,void const*,size_t) ;int (* init ) (int *) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,void const*,size_t) ;
 int FUNC_2 (int *,unsigned char*) ;

__attribute__((used)) static void
FUNC_3(br_x509_minimal_context *VAR_0, const void *VAR_1, size_t VAR_2,
 unsigned char *VAR_3)
{
 VAR_0->dn_hash_impl->init(&VAR_0->dn_hash.vtable);
 VAR_0->dn_hash_impl->update(&VAR_0->dn_hash.vtable, VAR_1, VAR_2);
 VAR_0->dn_hash_impl->out(&VAR_0->dn_hash.vtable, VAR_3);
}
