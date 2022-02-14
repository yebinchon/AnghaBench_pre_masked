
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int vtable; } ;
typedef TYPE_1__ gen_hash_context ;
struct TYPE_6__ {int count; int buf; TYPE_3__** impl; } ;
typedef TYPE_2__ br_multihash_context ;
struct TYPE_7__ {size_t desc; int (* out ) (int *,void*) ;int (* update ) (int *,int ,int) ;int (* set_state ) (int *,unsigned char const*,int) ;} ;
typedef TYPE_3__ br_hash_class ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned char const*,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,void*) ;

size_t
FUNC_4(const br_multihash_context *VAR_2, int VAR_3, void *VAR_4)
{
 const br_hash_class *VAR_5;
 gen_hash_context VAR_6;
 const unsigned char *VAR_7;

 VAR_5 = VAR_2->impl[VAR_3 - 1];
 if (VAR_5 == ((void*)0)) {
  return 0;
 }
 VAR_7 = (const unsigned char *)VAR_2 + FUNC_0(VAR_3);
 VAR_5->set_state(&VAR_6.vtable, VAR_7, VAR_2->count & ~(uint64_t)127);
 VAR_5->update(&VAR_6.vtable, VAR_2->buf, VAR_2->count & (uint64_t)127);
 VAR_5->out(&VAR_6.vtable, VAR_4);
 return (VAR_5->desc >> VAR_1) & VAR_0;
}
