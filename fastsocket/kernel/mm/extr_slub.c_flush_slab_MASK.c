
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache_cpu {int page; } ;
struct kmem_cache {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct kmem_cache*,struct kmem_cache_cpu*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct kmem_cache_cpu*,int ) ;

__attribute__((used)) static inline void FUNC_3(struct kmem_cache *VAR_1, struct kmem_cache_cpu *VAR_2)
{
 FUNC_2(VAR_2, VAR_0);
 FUNC_1(VAR_2->page);
 FUNC_0(VAR_1, VAR_2);
}
