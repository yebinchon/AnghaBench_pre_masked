
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rkey; int bind_info; struct ibv_mw* mw; } ;
struct ibv_send_wr {TYPE_1__ bind_mw; int send_flags; int wr_id; int * next; int opcode; } ;
struct ibv_qp {int dummy; } ;
struct ibv_mw_bind {int bind_info; int send_flags; int wr_id; } ;
struct ibv_mw {int rkey; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ibv_qp*,struct ibv_send_wr*,struct ibv_send_wr**) ;

int FUNC_2(struct ibv_qp *VAR_1, struct ibv_mw *VAR_2,
   struct ibv_mw_bind *VAR_3)
{
 struct ibv_send_wr *VAR_4 = ((void*)0);
 struct ibv_send_wr VAR_5 = { };
 int VAR_6;


 VAR_5.opcode = VAR_0;
 VAR_5.next = ((void*)0);

 VAR_5.wr_id = VAR_3->wr_id;
 VAR_5.send_flags = VAR_3->send_flags;

 VAR_5.bind_mw.mw = VAR_2;
 VAR_5.bind_mw.rkey = FUNC_0(VAR_2->rkey);
 VAR_5.bind_mw.bind_info = VAR_3->bind_info;

 VAR_6 = FUNC_1(VAR_1, &VAR_5, &VAR_4);

 if (VAR_6)
  return VAR_6;


 VAR_2->rkey = VAR_5.bind_mw.rkey;

 return 0;
}
