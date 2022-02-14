
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {struct array_cache** array; } ;
struct array_cache {int dummy; } ;


 size_t FUNC_0 () ;

__attribute__((used)) static inline struct array_cache *FUNC_1(struct kmem_cache *VAR_0)
{
 return VAR_0->array[FUNC_0()];
}
