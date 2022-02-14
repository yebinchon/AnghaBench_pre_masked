
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct rsocket {scalar_t__ sq_inline; TYPE_5__* conn_dest; } ;
struct ibv_sge {scalar_t__ length; } ;
struct TYPE_6__ {int remote_qkey; int remote_qpn; int ah; } ;
struct TYPE_7__ {TYPE_1__ ud; } ;
struct ibv_send_wr {int num_sge; TYPE_2__ wr; int send_flags; int opcode; struct ibv_sge* sg_list; int * next; int wr_id; } ;
struct TYPE_10__ {TYPE_4__* qp; int qpn; int ah; } ;
struct TYPE_9__ {TYPE_3__* cm_id; } ;
struct TYPE_8__ {int qp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct ibv_send_wr*,struct ibv_send_wr**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct rsocket *VAR_3, struct ibv_sge *VAR_4,
   uint32_t VAR_5)
{
 struct ibv_send_wr VAR_6, *VAR_7;

 VAR_6.wr_id = FUNC_2(VAR_5);
 VAR_6.next = ((void*)0);
 VAR_6.sg_list = VAR_4;
 VAR_6.num_sge = 1;
 VAR_6.opcode = VAR_1;
 VAR_6.send_flags = (VAR_4->length <= VAR_3->sq_inline) ? VAR_0 : 0;
 VAR_6.wr.ud.ah = VAR_3->conn_dest->ah;
 VAR_6.wr.ud.remote_qpn = VAR_3->conn_dest->qpn;
 VAR_6.wr.ud.remote_qkey = VAR_2;

 return FUNC_1(FUNC_0(VAR_3->conn_dest->qp->cm_id->qp, &VAR_6, &VAR_7));
}
