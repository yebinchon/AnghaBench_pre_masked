
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tp_rdma_stats {int rqe_dfr_pkt; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*,int *,int,int ,int) ;

void FUNC_1(struct adapter *VAR_1, struct tp_rdma_stats *VAR_2,
     bool VAR_3)
{
 FUNC_0(VAR_1, &VAR_2->rqe_dfr_pkt, 2, VAR_0,
         VAR_3);
}
