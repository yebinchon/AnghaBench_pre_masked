
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {int cpu_slab; } ;
typedef int gfp_t ;


 int FUNC_0 (struct kmem_cache*,int *) ;

__attribute__((used)) static inline int FUNC_1(struct kmem_cache *VAR_0, gfp_t VAR_1)
{
 FUNC_0(VAR_0, &VAR_0->cpu_slab);
 return 1;
}
