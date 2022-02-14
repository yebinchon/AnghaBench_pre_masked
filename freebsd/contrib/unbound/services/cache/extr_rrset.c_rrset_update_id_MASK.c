
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint64_t ;
struct rrset_ref {TYPE_2__* key; void* id; } ;
struct alloc_cache {int dummy; } ;
struct TYPE_3__ {int lock; } ;
struct TYPE_4__ {TYPE_1__ entry; void* id; } ;


 void* FUNC_0 (struct alloc_cache*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct rrset_ref* VAR_0, struct alloc_cache* VAR_1)
{

 uint64_t VAR_2 = FUNC_0(VAR_1);

 FUNC_2(&VAR_0->key->entry.lock);

 if(VAR_0->key->id == VAR_0->id) {
  VAR_0->key->id = VAR_2;
  VAR_0->id = VAR_2;
 }
 FUNC_1(&VAR_0->key->entry.lock);
}
