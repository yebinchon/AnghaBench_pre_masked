
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtx {int dummy; } ;
struct malloc_type {int dummy; } ;
struct buf_ring {int br_prod_size; int br_cons_size; int br_prod_mask; int br_cons_mask; scalar_t__ br_cons_tail; scalar_t__ br_prod_tail; scalar_t__ br_cons_head; scalar_t__ br_prod_head; struct mtx* br_lock; } ;
typedef int caddr_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 struct buf_ring* FUNC_1 (int,struct malloc_type*,int) ;
 int FUNC_2 (int) ;

struct buf_ring *
FUNC_3(int VAR_1, struct malloc_type *VAR_2, int VAR_3, struct mtx *VAR_4)
{
 struct buf_ring *VAR_5;

 FUNC_0(FUNC_2(VAR_1), ("buf ring must be size power of 2"));

 VAR_5 = FUNC_1(sizeof(struct buf_ring) + VAR_1*sizeof(caddr_t),
     VAR_2, VAR_3|VAR_0);
 if (VAR_5 == ((void*)0))
  return (((void*)0));



 VAR_5->br_prod_size = VAR_5->br_cons_size = VAR_1;
 VAR_5->br_prod_mask = VAR_5->br_cons_mask = VAR_1-1;
 VAR_5->br_prod_head = VAR_5->br_cons_head = 0;
 VAR_5->br_prod_tail = VAR_5->br_cons_tail = 0;

 return (VAR_5);
}
