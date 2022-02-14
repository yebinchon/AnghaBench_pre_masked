
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kmem_cache {TYPE_1__** nodelists; } ;
struct array_cache {scalar_t__ avail; int entry; } ;
struct TYPE_2__ {int list_lock; } ;


 int FUNC_0 () ;
 struct array_cache* FUNC_1 (struct kmem_cache*) ;
 int FUNC_2 (struct kmem_cache*,int ,scalar_t__,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(void *VAR_0)
{
 struct kmem_cache *VAR_1 = VAR_0;
 struct array_cache *VAR_2;
 int VAR_3 = FUNC_3();

 FUNC_0();
 VAR_2 = FUNC_1(VAR_1);
 FUNC_4(&VAR_1->nodelists[VAR_3]->list_lock);
 FUNC_2(VAR_1, VAR_2->entry, VAR_2->avail, VAR_3);
 FUNC_5(&VAR_1->nodelists[VAR_3]->list_lock);
 VAR_2->avail = 0;
}
