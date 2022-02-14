
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gen_pool_chunk {unsigned long start_addr; unsigned long end_addr; int next_chunk; int avail; int phys_addr; } ;
struct gen_pool {size_t min_alloc_order; int lock; int chunks; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,size_t) ;
 struct gen_pool_chunk* FUNC_1 (int,int,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;

int FUNC_6(struct gen_pool *VAR_4, unsigned long VAR_5, phys_addr_t VAR_6,
   size_t VAR_7, int VAR_8)
{
 struct gen_pool_chunk *VAR_9;
 int VAR_10 = VAR_7 >> VAR_4->min_alloc_order;
 int VAR_11 = sizeof(struct gen_pool_chunk) +
    (VAR_10 + VAR_0 - 1) / VAR_0;

 VAR_9 = FUNC_1(VAR_11, VAR_2 | VAR_3, VAR_8);
 if (FUNC_5(VAR_9 == ((void*)0)))
  return -VAR_1;

 VAR_9->phys_addr = VAR_6;
 VAR_9->start_addr = VAR_5;
 VAR_9->end_addr = VAR_5 + VAR_7;
 FUNC_0(&VAR_9->avail, VAR_7);

 FUNC_3(&VAR_4->lock);
 FUNC_2(&VAR_9->next_chunk, &VAR_4->chunks);
 FUNC_4(&VAR_4->lock);

 return 0;
}
