
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gen_pool {int min_alloc_order; int chunks; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct gen_pool* FUNC_1 (int,int ,int) ;
 int FUNC_2 (int *) ;

struct gen_pool *FUNC_3(int VAR_1, int VAR_2)
{
 struct gen_pool *VAR_3;

 VAR_3 = FUNC_1(sizeof(struct gen_pool), VAR_0, VAR_2);
 if (VAR_3 != ((void*)0)) {
  FUNC_2(&VAR_3->lock);
  FUNC_0(&VAR_3->chunks);
  VAR_3->min_alloc_order = VAR_1;
 }
 return VAR_3;
}
