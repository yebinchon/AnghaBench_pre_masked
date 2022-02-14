
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtx_pool {int mtx_pool_size; int mtx_pool_mask; int * mtx_pool_ary; scalar_t__ mtx_pool_next; scalar_t__ mtx_pool_shift; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char const*,int *,int) ;

__attribute__((used)) static void
FUNC_1(struct mtx_pool *VAR_1, const char *VAR_2, int VAR_3,
    int VAR_4)
{
 int VAR_5, VAR_6;

 VAR_1->mtx_pool_size = VAR_3;
 VAR_1->mtx_pool_mask = VAR_3 - 1;
 for (VAR_5 = 1, VAR_6 = 0; (VAR_5 & VAR_3) == 0; VAR_5 = VAR_5 << 1)
  VAR_6++;
 VAR_1->mtx_pool_shift = VAR_0 - VAR_6;
 VAR_1->mtx_pool_next = 0;
 for (VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5)
  FUNC_0(&VAR_1->mtx_pool_ary[VAR_5], VAR_2, ((void*)0), VAR_4);
}
