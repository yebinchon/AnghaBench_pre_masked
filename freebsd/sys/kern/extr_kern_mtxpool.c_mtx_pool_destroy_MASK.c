
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtx_pool {int mtx_pool_size; int * mtx_pool_ary; } ;


 int VAR_0 ;
 int FUNC_0 (struct mtx_pool*,int ) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct mtx_pool **VAR_1)
{
 int VAR_2;
 struct mtx_pool *VAR_3 = *VAR_1;

 for (VAR_2 = VAR_3->mtx_pool_size - 1; VAR_2 >= 0; --VAR_2)
  FUNC_1(&VAR_3->mtx_pool_ary[VAR_2]);
 FUNC_0(VAR_3, VAR_0);
 *VAR_1 = ((void*)0);
}
