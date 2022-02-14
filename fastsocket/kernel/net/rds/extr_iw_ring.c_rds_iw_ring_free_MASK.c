
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rds_iw_work_ring {int w_free_ptr; int w_nr; int w_free_ctr; } ;


 scalar_t__ FUNC_0 (struct rds_iw_work_ring*) ;
 int FUNC_1 (int,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct rds_iw_work_ring *VAR_1, u32 VAR_2)
{
 VAR_1->w_free_ptr = (VAR_1->w_free_ptr + VAR_2) % VAR_1->w_nr;
 FUNC_1(VAR_2, &VAR_1->w_free_ctr);

 if (FUNC_0(VAR_1) &&
     FUNC_2(&VAR_0))
  FUNC_3(&VAR_0);
}
