
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int kso; int ksi; TYPE_3__ const* dig_vtable; } ;
typedef TYPE_1__ br_hmac_key_context ;
struct TYPE_13__ {TYPE_3__ const* vtable; } ;
typedef TYPE_2__ br_hash_compat_context ;
struct TYPE_14__ {int (* out ) (TYPE_3__ const**,unsigned char*) ;int (* update ) (TYPE_3__ const**,void const*,size_t) ;int (* init ) (TYPE_3__ const**) ;} ;
typedef TYPE_3__ br_hash_class ;


 size_t FUNC_0 (TYPE_3__ const*) ;
 size_t FUNC_1 (TYPE_3__ const*) ;
 int FUNC_2 (TYPE_3__ const**,int ,void const*,size_t,int) ;
 int FUNC_3 (TYPE_3__ const**) ;
 int FUNC_4 (TYPE_3__ const**,void const*,size_t) ;
 int FUNC_5 (TYPE_3__ const**,unsigned char*) ;

void
FUNC_6(br_hmac_key_context *VAR_0,
 const br_hash_class *VAR_1, const void *VAR_2, size_t VAR_3)
{
 br_hash_compat_context VAR_4;
 unsigned char VAR_5[64];

 VAR_0->dig_vtable = VAR_1;
 VAR_4.vtable = VAR_1;
 if (VAR_3 > FUNC_0(VAR_1)) {
  VAR_1->init(&VAR_4.vtable);
  VAR_1->update(&VAR_4.vtable, VAR_2, VAR_3);
  VAR_1->out(&VAR_4.vtable, VAR_5);
  VAR_2 = VAR_5;
  VAR_3 = FUNC_1(VAR_1);
 }
 FUNC_2(&VAR_4.vtable, VAR_0->ksi, VAR_2, VAR_3, 0x36);
 FUNC_2(&VAR_4.vtable, VAR_0->kso, VAR_2, VAR_3, 0x5C);
}
