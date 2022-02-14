
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mthca_srq {int wqe_shift; int last_free; int lock; } ;
struct mthca_next_seg {int nda_op; } ;


 struct mthca_next_seg* FUNC_0 (struct mthca_srq*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int* FUNC_4 (struct mthca_next_seg*) ;

void FUNC_5(struct mthca_srq *VAR_0, u32 VAR_1)
{
 int VAR_2;
 struct mthca_next_seg *VAR_3;

 VAR_2 = VAR_1 >> VAR_0->wqe_shift;

 FUNC_2(&VAR_0->lock);

 VAR_3 = FUNC_0(VAR_0, VAR_0->last_free);
 *FUNC_4(VAR_3) = VAR_2;
 VAR_3->nda_op = FUNC_1((VAR_2 << VAR_0->wqe_shift) | 1);
 *FUNC_4(FUNC_0(VAR_0, VAR_2)) = -1;
 VAR_0->last_free = VAR_2;

 FUNC_3(&VAR_0->lock);
}
