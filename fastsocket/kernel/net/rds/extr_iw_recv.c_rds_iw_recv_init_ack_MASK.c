
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_sge {int length; int lkey; int addr; } ;
struct ib_send_wr {int num_sge; int send_flags; int wr_id; int opcode; struct ib_sge* sg_list; } ;
struct rds_iw_connection {int i_ack_dma; struct ib_sge i_ack_sge; struct ib_send_wr i_ack_wr; } ;
struct rds_header {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rds_iw_connection*) ;

void FUNC_1(struct rds_iw_connection *VAR_4)
{
 struct ib_send_wr *VAR_5 = &VAR_4->i_ack_wr;
 struct ib_sge *VAR_6 = &VAR_4->i_ack_sge;

 VAR_6->addr = VAR_4->i_ack_dma;
 VAR_6->length = sizeof(struct rds_header);
 VAR_6->lkey = FUNC_0(VAR_4);

 VAR_5->sg_list = VAR_6;
 VAR_5->num_sge = 1;
 VAR_5->opcode = VAR_2;
 VAR_5->wr_id = VAR_3;
 VAR_5->send_flags = VAR_0 | VAR_1;
}
