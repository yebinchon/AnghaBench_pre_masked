
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slab {int dummy; } ;
typedef int kmem_bufctl_t ;



__attribute__((used)) static inline kmem_bufctl_t *FUNC_0(struct slab *VAR_0)
{
 return (kmem_bufctl_t *) (VAR_0 + 1);
}
