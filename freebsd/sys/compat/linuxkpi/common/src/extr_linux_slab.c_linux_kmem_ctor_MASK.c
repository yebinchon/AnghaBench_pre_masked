
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linux_kmem_rcu {struct linux_kmem_cache* cache; } ;
struct linux_kmem_cache {int cache_flags; int (* cache_ctor ) (void*) ;} ;


 struct linux_kmem_rcu* FUNC_0 (struct linux_kmem_cache*,void*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(void *VAR_1, int VAR_2, void *VAR_3, int VAR_4)
{
 struct linux_kmem_cache *VAR_5 = VAR_3;

 if (FUNC_3(VAR_5->cache_flags & VAR_0)) {
  struct linux_kmem_rcu *VAR_6 = FUNC_0(VAR_5, VAR_1);


  VAR_6->cache = VAR_5;
 }


 if (FUNC_1(VAR_5->cache_ctor != ((void*)0)))
  VAR_5->cache_ctor(VAR_1);

 return (0);
}
