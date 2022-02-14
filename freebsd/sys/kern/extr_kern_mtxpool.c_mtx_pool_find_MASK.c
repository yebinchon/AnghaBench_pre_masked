
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtx_pool {uintptr_t mtx_pool_shift; uintptr_t mtx_pool_mask; struct mtx* mtx_pool_ary; } ;
struct mtx {int dummy; } ;


 uintptr_t VAR_0 ;
 int FUNC_0 (int ,char*) ;

struct mtx *
FUNC_1(struct mtx_pool *VAR_1, void *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_1 != ((void*)0), ("_mtx_pool_find(): null pool"));




 VAR_3 = ((VAR_0 * (uintptr_t)VAR_2) >> VAR_1->mtx_pool_shift) &
     VAR_1->mtx_pool_mask;
 return (&VAR_1->mtx_pool_ary[VAR_3]);
}
