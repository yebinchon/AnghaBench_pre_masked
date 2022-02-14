
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct rsocket {int opts; TYPE_1__* cm_id; } ;
struct ibv_sge {uintptr_t addr; int length; scalar_t__ lkey; } ;
struct ibv_send_wr {int num_sge; scalar_t__ send_flags; int opcode; struct ibv_sge* sg_list; int imm_data; int * next; int wr_id; } ;
struct TYPE_2__ {int qp; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct ibv_send_wr*,struct ibv_send_wr**) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct rsocket *VAR_4, uint32_t VAR_5)
{
 struct ibv_send_wr VAR_6, *VAR_7;
 struct ibv_sge VAR_8;

 VAR_6.wr_id = FUNC_3(VAR_5);
 VAR_6.next = ((void*)0);
 if (!(VAR_4->opts & VAR_3)) {
  VAR_6.sg_list = ((void*)0);
  VAR_6.num_sge = 0;
  VAR_6.opcode = VAR_1;
  VAR_6.send_flags = 0;
  VAR_6.imm_data = FUNC_0(VAR_5);
 } else {
  VAR_8.addr = (uintptr_t) &VAR_5;
  VAR_8.lkey = 0;
  VAR_8.length = sizeof VAR_5;
  VAR_6.sg_list = &VAR_8;
  VAR_6.num_sge = 1;
  VAR_6.opcode = VAR_2;
  VAR_6.send_flags = VAR_0;
 }

 return FUNC_2(FUNC_1(VAR_4->cm_id->qp, &VAR_6, &VAR_7));
}
