
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_iw_connection {scalar_t__ i_ack_recv; int i_recv_ring; int i_recv_cq; struct rds_connection* conn; } ;
struct rds_iw_ack_state {scalar_t__ ack_recv; scalar_t__ ack_recv_valid; int ack_required; int ack_next; scalar_t__ ack_next_valid; int member_0; } ;
struct rds_connection {int c_recv_w; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *,int ) ;
 scalar_t__ FUNC_2 (struct rds_connection*) ;
 int FUNC_3 (struct rds_iw_connection*) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct rds_iw_connection*,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct rds_iw_connection*,struct rds_iw_ack_state*) ;
 int FUNC_9 (struct rds_connection*,scalar_t__,int *) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_10(unsigned long VAR_3)
{
 struct rds_iw_connection *VAR_4 = (struct rds_iw_connection *) VAR_3;
 struct rds_connection *VAR_5 = VAR_4->conn;
 struct rds_iw_ack_state VAR_6 = { 0, };

 FUNC_8(VAR_4, &VAR_6);
 FUNC_0(VAR_4->i_recv_cq, VAR_0);
 FUNC_8(VAR_4, &VAR_6);

 if (VAR_6.ack_next_valid)
  FUNC_6(VAR_4, VAR_6.ack_next, VAR_6.ack_required);
 if (VAR_6.ack_recv_valid && VAR_6.ack_recv > VAR_4->i_ack_recv) {
  FUNC_9(VAR_5, VAR_6.ack_recv, ((void*)0));
  VAR_4->i_ack_recv = VAR_6.ack_recv;
 }
 if (FUNC_2(VAR_5))
  FUNC_3(VAR_4);




 if (FUNC_4(&VAR_4->i_recv_ring))
  FUNC_7(VAR_2);




 if (FUNC_5(&VAR_4->i_recv_ring))
  FUNC_1(VAR_1, &VAR_5->c_recv_w, 0);
}
