
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rds_iw_work_ring {int w_alloc_ptr; int w_nr; int w_alloc_ctr; } ;



void FUNC_0(struct rds_iw_work_ring *VAR_0, u32 VAR_1)
{
 VAR_0->w_alloc_ptr = (VAR_0->w_alloc_ptr - VAR_1) % VAR_0->w_nr;
 VAR_0->w_alloc_ctr -= VAR_1;
}
