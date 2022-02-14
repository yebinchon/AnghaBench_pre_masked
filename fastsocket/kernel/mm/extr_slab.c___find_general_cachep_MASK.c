
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {int dummy; } ;
struct cache_sizes {size_t cs_size; struct kmem_cache* cs_cachep; struct kmem_cache* cs_dmacachep; } ;
typedef int gfp_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 struct kmem_cache* VAR_2 ;
 struct cache_sizes* VAR_3 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline struct kmem_cache *FUNC_2(size_t VAR_4,
       gfp_t VAR_5)
{
 struct cache_sizes *VAR_6 = VAR_3;
 if (!VAR_4)
  return VAR_2;

 while (VAR_4 > VAR_6->cs_size)
  VAR_6++;
 return VAR_6->cs_cachep;
}
