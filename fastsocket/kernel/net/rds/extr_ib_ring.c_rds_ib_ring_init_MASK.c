
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rds_ib_work_ring {int w_nr; } ;


 int FUNC_0 (struct rds_ib_work_ring*,int ,int) ;
 int FUNC_1 (char*,struct rds_ib_work_ring*,int ) ;

void FUNC_2(struct rds_ib_work_ring *VAR_0, u32 VAR_1)
{
 FUNC_0(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->w_nr = VAR_1;
 FUNC_1("ring %p nr %u\n", VAR_0, VAR_0->w_nr);
}
