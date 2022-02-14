
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache_cpu {scalar_t__ page; } ;
struct kmem_cache {int dummy; } ;


 int FUNC_0 (struct kmem_cache*,struct kmem_cache_cpu*) ;
 struct kmem_cache_cpu* FUNC_1 (struct kmem_cache*,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline void FUNC_3(struct kmem_cache *VAR_0, int VAR_1)
{
 struct kmem_cache_cpu *VAR_2 = FUNC_1(VAR_0, VAR_1);

 if (FUNC_2(VAR_2 && VAR_2->page))
  FUNC_0(VAR_0, VAR_2);
}
