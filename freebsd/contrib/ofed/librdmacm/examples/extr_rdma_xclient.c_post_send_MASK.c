
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct ibv_sge {scalar_t__ lkey; scalar_t__ length; scalar_t__ addr; } ;
struct TYPE_5__ {int remote_srqn; } ;
struct TYPE_6__ {TYPE_1__ xrc; } ;
struct ibv_send_wr {uintptr_t wr_id; int num_sge; TYPE_2__ qp_type; int send_flags; int opcode; struct ibv_sge* sg_list; int * next; } ;
struct TYPE_8__ {scalar_t__ ai_qp_type; } ;
struct TYPE_7__ {int qp; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__ VAR_3 ;
 int FUNC_0 (int ,struct ibv_send_wr*,struct ibv_send_wr**) ;
 TYPE_3__* VAR_4 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_2(void)
{
 struct ibv_send_wr VAR_7, *VAR_8;
 struct ibv_sge VAR_9;
 int VAR_10;

 VAR_9.addr = (uint64_t) (uintptr_t) VAR_5;
 VAR_9.length = (uint32_t) sizeof VAR_5;
 VAR_9.lkey = 0;
 VAR_7.wr_id = (uintptr_t) ((void*)0);
 VAR_7.next = ((void*)0);
 VAR_7.sg_list = &VAR_9;
 VAR_7.num_sge = 1;
 VAR_7.opcode = VAR_2;
 VAR_7.send_flags = VAR_1;
 if (VAR_3.ai_qp_type == VAR_0)
  VAR_7.qp_type.xrc.remote_srqn = VAR_6;

 VAR_10 = FUNC_0(VAR_4->qp, &VAR_7, &VAR_8);
 if (VAR_10)
  FUNC_1("rdma_post_send");

 return VAR_10;
}
