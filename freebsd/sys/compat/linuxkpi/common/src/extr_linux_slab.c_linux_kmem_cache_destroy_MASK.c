
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linux_kmem_cache {int cache_flags; int cache_zone; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct linux_kmem_cache*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;

void
FUNC_4(struct linux_kmem_cache *VAR_2)
{
 if (FUNC_3(VAR_2->cache_flags & VAR_1)) {

  FUNC_1();
 }

 FUNC_2(VAR_2->cache_zone);
 FUNC_0(VAR_2, VAR_0);
}
