
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_13__ {TYPE_4__* vtable; } ;
struct TYPE_14__ {size_t out_len; int kso; TYPE_1__ dig; } ;
typedef TYPE_2__ br_hmac_context ;
struct TYPE_15__ {TYPE_4__* vtable; } ;
typedef TYPE_3__ br_hash_compat_context ;
struct TYPE_16__ {int (* out ) (TYPE_4__**,unsigned char*) ;int (* update ) (TYPE_4__**,unsigned char*,size_t) ;int (* set_state ) (TYPE_4__**,int ,int ) ;int (* init ) (TYPE_4__**) ;} ;
typedef TYPE_4__ br_hash_class ;


 size_t FUNC_0 (TYPE_4__ const*) ;
 size_t FUNC_1 (TYPE_4__ const*) ;
 int FUNC_2 (void*,unsigned char*,size_t) ;
 int FUNC_3 (TYPE_4__**,unsigned char*) ;
 int FUNC_4 (TYPE_4__**) ;
 int FUNC_5 (TYPE_4__**,int ,int ) ;
 int FUNC_6 (TYPE_4__**,unsigned char*,size_t) ;
 int FUNC_7 (TYPE_4__**,unsigned char*) ;

size_t
FUNC_8(const br_hmac_context *VAR_0, void *VAR_1)
{
 const br_hash_class *VAR_2;
 br_hash_compat_context VAR_3;
 unsigned char VAR_4[64];
 size_t VAR_5, VAR_6;

 VAR_2 = VAR_0->dig.vtable;
 VAR_2->out(&VAR_0->dig.vtable, VAR_4);
 VAR_5 = FUNC_0(VAR_2);
 VAR_2->init(&VAR_3.vtable);
 VAR_2->set_state(&VAR_3.vtable, VAR_0->kso, (uint64_t)VAR_5);
 VAR_6 = FUNC_1(VAR_2);
 VAR_2->update(&VAR_3.vtable, VAR_4, VAR_6);
 VAR_2->out(&VAR_3.vtable, VAR_4);
 FUNC_2(VAR_1, VAR_4, VAR_0->out_len);
 return VAR_0->out_len;
}
