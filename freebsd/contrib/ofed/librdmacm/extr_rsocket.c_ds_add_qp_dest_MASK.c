
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union socket_addr {int dummy; } socket_addr ;
struct ibv_port_attr {int lid; } ;
struct ibv_ah_attr {int port_num; int dlid; } ;
struct TYPE_7__ {int addr; int ah; int qpn; struct ds_qp* qp; } ;
struct ds_qp {TYPE_4__* rs; TYPE_3__ dest; TYPE_2__* cm_id; } ;
typedef int socklen_t ;
struct TYPE_8__ {int dest_map; } ;
struct TYPE_6__ {int pd; int port_num; int verbs; TYPE_1__* qp; } ;
struct TYPE_5__ {int qp_num; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,struct ibv_ah_attr*) ;
 int FUNC_2 (int ,int ,struct ibv_port_attr*) ;
 int FUNC_3 (int *,union socket_addr*,int ) ;
 int FUNC_4 (struct ibv_ah_attr*,int ,int) ;
 int FUNC_5 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_6(struct ds_qp *VAR_2, union socket_addr *VAR_3,
     socklen_t VAR_4)
{
 struct ibv_port_attr VAR_5;
 struct ibv_ah_attr VAR_6;
 int VAR_7;

 FUNC_3(&VAR_2->dest.addr, VAR_3, VAR_4);
 VAR_2->dest.qp = VAR_2;
 VAR_2->dest.qpn = VAR_2->cm_id->qp->qp_num;

 VAR_7 = FUNC_2(VAR_2->cm_id->verbs, VAR_2->cm_id->port_num, &VAR_5);
 if (VAR_7)
  return VAR_7;

 FUNC_4(&VAR_6, 0, sizeof VAR_6);
 VAR_6.dlid = VAR_5.lid;
 VAR_6.port_num = VAR_2->cm_id->port_num;
 VAR_2->dest.ah = FUNC_1(VAR_2->cm_id->pd, &VAR_6);
 if (!VAR_2->dest.ah)
  return FUNC_0(VAR_0);

 FUNC_5(&VAR_2->dest.addr, &VAR_2->rs->dest_map, VAR_1);
 return 0;
}
