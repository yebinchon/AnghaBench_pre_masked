
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptr_heap {size_t max; int (* gt ) (void*,void*) ;scalar_t__ size; int ptrs; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (size_t,int ) ;

int FUNC_1(struct ptr_heap *VAR_1, size_t VAR_2, gfp_t VAR_3,
       int (*VAR_4)(void *, void *))
{
 VAR_1->ptrs = FUNC_0(VAR_2, VAR_3);
 if (!VAR_1->ptrs)
  return -VAR_0;
 VAR_1->size = 0;
 VAR_1->max = VAR_2 / sizeof(void *);
 VAR_1->gt = VAR_4;
 return 0;
}
