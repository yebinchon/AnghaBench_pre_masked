
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slab {size_t free; int nodeid; int inuse; } ;
struct kmem_cache {int dummy; } ;
typedef size_t kmem_bufctl_t ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (struct kmem_cache*,struct slab*,size_t) ;
 size_t* FUNC_2 (struct slab*) ;

__attribute__((used)) static void *FUNC_3(struct kmem_cache *VAR_1, struct slab *VAR_2,
    int VAR_3)
{
 void *VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_2->free);
 kmem_bufctl_t VAR_5;

 VAR_2->inuse++;
 VAR_5 = FUNC_2(VAR_2)[VAR_2->free];




 VAR_2->free = VAR_5;

 return VAR_4;
}
