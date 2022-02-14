
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct kmem_cache*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct kmem_cache*,int) ;

void FUNC_3(struct kmem_cache *VAR_1)
{
 FUNC_0(VAR_1);
 if (VAR_1->flags & VAR_0)
  FUNC_1();
 FUNC_2(VAR_1, sizeof(struct kmem_cache));
}
