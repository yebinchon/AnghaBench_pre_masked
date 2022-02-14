
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtx_pool {int mtx_pool_next; int mtx_pool_mask; struct mtx* mtx_pool_ary; } ;
struct mtx {int dummy; } ;


 int FUNC_0 (int ,char*) ;

struct mtx *
FUNC_1(struct mtx_pool *VAR_0)
{
 int VAR_1;

 FUNC_0(VAR_0 != ((void*)0), ("mtx_pool_alloc(): null pool"));





 VAR_1 = VAR_0->mtx_pool_next;
 VAR_0->mtx_pool_next = (VAR_1 + 1) & VAR_0->mtx_pool_mask;
 return (&VAR_0->mtx_pool_ary[VAR_1]);
}
