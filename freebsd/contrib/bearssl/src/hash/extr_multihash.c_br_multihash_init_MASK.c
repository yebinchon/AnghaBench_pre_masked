
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int vtable; } ;
typedef TYPE_1__ gen_hash_context ;
struct TYPE_6__ {TYPE_3__** impl; scalar_t__ count; } ;
typedef TYPE_2__ br_multihash_context ;
struct TYPE_7__ {int (* state ) (int *,unsigned char*) ;int (* init ) (int *) ;} ;
typedef TYPE_3__ br_hash_class ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char*) ;

void
FUNC_3(br_multihash_context *VAR_0)
{
 int VAR_1;

 VAR_0->count = 0;
 for (VAR_1 = 1; VAR_1 <= 6; VAR_1 ++) {
  const br_hash_class *VAR_2;

  VAR_2 = VAR_0->impl[VAR_1 - 1];
  if (VAR_2 != ((void*)0)) {
   gen_hash_context VAR_3;

   VAR_2->init(&VAR_3.vtable);
   VAR_2->state(&VAR_3.vtable,
    (unsigned char *)VAR_0 + FUNC_0(VAR_1));
  }
 }
}
