
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u32 ;
struct rds_iw_work_ring {int w_nr; } ;


 int FUNC_0 (char*,struct rds_iw_work_ring*,unsigned long long,unsigned long long,unsigned long long) ;

u32 FUNC_1(struct rds_iw_work_ring *VAR_0, u32 VAR_1, u32 VAR_2)
{
 u32 VAR_3;

 if (VAR_2 <= (unsigned long long)VAR_1)
  VAR_3 = (unsigned long long)VAR_1 - VAR_2 + 1;
 else
  VAR_3 = VAR_0->w_nr - VAR_2 + (unsigned long long)VAR_1 + 1;

 FUNC_0("ring %p ret %u wr_id %u oldest %u\n", VAR_0, VAR_3,
   VAR_1, VAR_2);
 return VAR_3;
}
