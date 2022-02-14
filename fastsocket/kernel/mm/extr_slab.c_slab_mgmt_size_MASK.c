
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slab {int dummy; } ;
typedef int kmem_bufctl_t ;


 size_t FUNC_0 (int,size_t) ;

__attribute__((used)) static size_t FUNC_1(size_t VAR_0, size_t VAR_1)
{
 return FUNC_0(sizeof(struct slab)+VAR_0*sizeof(kmem_bufctl_t), VAR_1);
}
