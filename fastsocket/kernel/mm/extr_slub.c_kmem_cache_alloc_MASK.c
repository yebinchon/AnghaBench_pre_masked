
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {int size; int objsize; } ;
typedef int gfp_t ;


 int VAR_0 ;
 void* FUNC_0 (struct kmem_cache*,int ,int,int ) ;
 int FUNC_1 (int ,void*,int ,int ,int ) ;

void *FUNC_2(struct kmem_cache *VAR_1, gfp_t VAR_2)
{
 void *VAR_3 = FUNC_0(VAR_1, VAR_2, -1, VAR_0);

 FUNC_1(VAR_0, VAR_3, VAR_1->objsize, VAR_1->size, VAR_2);

 return VAR_3;
}
