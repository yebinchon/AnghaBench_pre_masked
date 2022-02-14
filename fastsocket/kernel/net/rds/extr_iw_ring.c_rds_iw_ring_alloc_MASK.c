
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rds_iw_work_ring {int w_nr; int w_alloc_ptr; int w_alloc_ctr; } ;


 int FUNC_0 (struct rds_iw_work_ring*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,struct rds_iw_work_ring*,int,int,int) ;

u32 FUNC_3(struct rds_iw_work_ring *VAR_0, u32 VAR_1, u32 *VAR_2)
{
 u32 VAR_3 = 0, VAR_4;

 VAR_4 = VAR_0->w_nr - FUNC_0(VAR_0);

 FUNC_2("ring %p val %u next %u free %u\n", VAR_0, VAR_1,
   VAR_0->w_alloc_ptr, VAR_4);

 if (VAR_1 && VAR_4) {
  VAR_3 = FUNC_1(VAR_1, VAR_4);
  *VAR_2 = VAR_0->w_alloc_ptr;

  VAR_0->w_alloc_ptr = (VAR_0->w_alloc_ptr + VAR_3) % VAR_0->w_nr;
  VAR_0->w_alloc_ctr += VAR_3;
 }

 return VAR_3;
}
