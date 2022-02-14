
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {int flags; int ctor; } ;


 int VAR_0 ;
 int FUNC_0 (void*,size_t) ;

void FUNC_1(struct kmem_cache *VAR_1, void *VAR_2, size_t VAR_3)
{

 if (!VAR_1->ctor && !(VAR_1->flags & VAR_0))
  FUNC_0(VAR_2, VAR_3);
}
