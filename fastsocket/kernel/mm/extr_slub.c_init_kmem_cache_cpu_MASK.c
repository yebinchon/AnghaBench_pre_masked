
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache_cpu {int offset; int stat; int objsize; scalar_t__ node; int * freelist; int * page; } ;
struct kmem_cache {int offset; int objsize; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct kmem_cache *VAR_1,
   struct kmem_cache_cpu *VAR_2)
{
 VAR_2->page = ((void*)0);
 VAR_2->freelist = ((void*)0);
 VAR_2->node = 0;
 VAR_2->offset = VAR_1->offset / sizeof(void *);
 VAR_2->objsize = VAR_1->objsize;



}
