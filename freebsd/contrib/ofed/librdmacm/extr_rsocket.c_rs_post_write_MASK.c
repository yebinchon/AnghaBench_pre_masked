
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct rsocket {TYPE_3__* cm_id; } ;
struct ibv_sge {int dummy; } ;
struct TYPE_4__ {int rkey; int remote_addr; } ;
struct TYPE_5__ {TYPE_1__ rdma; } ;
struct ibv_send_wr {int num_sge; int send_flags; TYPE_2__ wr; int opcode; struct ibv_sge* sg_list; int * next; int wr_id; } ;
struct TYPE_6__ {int qp; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ibv_send_wr*,struct ibv_send_wr**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct rsocket *VAR_1,
    struct ibv_sge *VAR_2, int VAR_3,
    uint32_t VAR_4, int VAR_5,
    uint64_t VAR_6, uint32_t VAR_7)
{
 struct ibv_send_wr VAR_8, *VAR_9;

 VAR_8.wr_id = FUNC_2(VAR_4);
 VAR_8.next = ((void*)0);
 VAR_8.sg_list = VAR_2;
 VAR_8.num_sge = VAR_3;
 VAR_8.opcode = VAR_0;
 VAR_8.send_flags = VAR_5;
 VAR_8.wr.rdma.remote_addr = VAR_6;
 VAR_8.wr.rdma.rkey = VAR_7;

 return FUNC_1(FUNC_0(VAR_1->cm_id->qp, &VAR_8, &VAR_9));
}
