
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct slab {int s_mem; } ;
struct kmem_cache {int reciprocal_buffer_size; } ;


 unsigned int FUNC_0 (void*,int ) ;

__attribute__((used)) static inline unsigned int FUNC_1(const struct kmem_cache *VAR_0,
     const struct slab *VAR_1, void *VAR_2)
{
 u32 VAR_3 = (VAR_2 - VAR_1->s_mem);
 return FUNC_0(VAR_3, VAR_0->reciprocal_buffer_size);
}
