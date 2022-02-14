
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ibv_sge {uintptr_t addr; int lkey; int length; } ;
struct TYPE_7__ {int remote_srqn; } ;
struct TYPE_8__ {TYPE_2__ xrc; } ;
struct ibv_send_wr {uintptr_t wr_id; int num_sge; int send_flags; TYPE_3__ qp_type; int opcode; struct ibv_sge* sg_list; int * next; } ;
struct TYPE_10__ {int num_clients; int num_tests; int * send_qp; TYPE_4__* rem_dest; TYPE_1__* mr; int size; scalar_t__ buf; } ;
struct TYPE_9__ {int pp_cnt; int srqn; } ;
struct TYPE_6__ {int lkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__ VAR_2 ;
 int FUNC_0 (int ,struct ibv_send_wr*,struct ibv_send_wr**) ;

__attribute__((used)) static int FUNC_1(int VAR_3)
{
 struct ibv_sge VAR_4;
 struct ibv_send_wr VAR_5, *VAR_6;
 int VAR_7;

 VAR_4.addr = (uintptr_t) VAR_2.buf;
 VAR_4.length = VAR_2.size;
 VAR_4.lkey = VAR_2.mr->lkey;

 VAR_5.wr_id = (uintptr_t) VAR_3;
 VAR_5.next = ((void*)0);
 VAR_5.sg_list = &VAR_4;
 VAR_5.num_sge = 1;
 VAR_5.opcode = VAR_1;
 VAR_5.qp_type.xrc.remote_srqn = VAR_2.rem_dest[VAR_3].srqn;

 VAR_7 = (VAR_3 + VAR_2.rem_dest[VAR_3].pp_cnt) % VAR_2.num_clients;
 VAR_5.send_flags = (++VAR_2.rem_dest[VAR_3].pp_cnt >= VAR_2.num_tests) ?
   VAR_0 : 0;

 return FUNC_0(VAR_2.send_qp[VAR_7], &VAR_5, &VAR_6);
}
