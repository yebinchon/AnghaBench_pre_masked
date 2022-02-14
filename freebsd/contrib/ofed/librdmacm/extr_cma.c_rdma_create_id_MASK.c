
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_event_channel {int dummy; } ;
struct rdma_cm_id {int dummy; } ;
typedef enum rdma_port_space { ____Placeholder_rdma_port_space } rdma_port_space ;
typedef enum ibv_qp_type { ____Placeholder_ibv_qp_type } ibv_qp_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rdma_event_channel*,struct rdma_cm_id**,void*,int,int) ;

int FUNC_1(struct rdma_event_channel *VAR_4,
     struct rdma_cm_id **VAR_5, void *VAR_6,
     enum rdma_port_space VAR_7)
{
 enum ibv_qp_type VAR_8;

 VAR_8 = (VAR_7 == VAR_2 || VAR_7 == VAR_3) ?
    VAR_1 : VAR_0;
 return FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
}
