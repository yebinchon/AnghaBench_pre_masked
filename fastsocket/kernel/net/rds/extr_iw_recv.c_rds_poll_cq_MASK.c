
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rds_iw_recv_work {int dummy; } ;
struct rds_iw_connection {int i_recv_ring; struct rds_iw_recv_work* i_recvs; int i_recv_cq; struct rds_connection* conn; } ;
struct rds_iw_ack_state {int dummy; } ;
struct rds_connection {int c_faddr; } ;
struct TYPE_2__ {int imm_data; } ;
struct ib_wc {scalar_t__ status; int byte_len; TYPE_1__ ex; scalar_t__ wr_id; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int,struct ib_wc*) ;
 scalar_t__ FUNC_2 (struct rds_connection*) ;
 scalar_t__ FUNC_3 (struct rds_connection*) ;
 int FUNC_4 (struct rds_connection*,char*,int *,scalar_t__) ;
 int FUNC_5 (struct rds_connection*,struct rds_iw_recv_work*,int ,struct rds_iw_ack_state*) ;
 int FUNC_6 (struct rds_iw_connection*,struct rds_iw_recv_work*) ;
 int FUNC_7 (int *,int) ;
 size_t FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,unsigned long long,scalar_t__,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_11(struct rds_iw_connection *VAR_2,
          struct rds_iw_ack_state *VAR_3)
{
 struct rds_connection *VAR_4 = VAR_2->conn;
 struct ib_wc VAR_5;
 struct rds_iw_recv_work *VAR_6;

 while (FUNC_1(VAR_2->i_recv_cq, 1, &VAR_5) > 0) {
  FUNC_10("wc wr_id 0x%llx status %u byte_len %u imm_data %u\n",
    (unsigned long long)VAR_5.wr_id, VAR_5.status, VAR_5.byte_len,
    FUNC_0(VAR_5.ex.imm_data));
  FUNC_9(VAR_1);

  VAR_6 = &VAR_2->i_recvs[FUNC_8(&VAR_2->i_recv_ring)];

  FUNC_6(VAR_2, VAR_6);






  if (FUNC_3(VAR_4) || FUNC_2(VAR_4)) {

   if (VAR_5.status == VAR_0) {
    FUNC_5(VAR_4, VAR_6, VAR_5.byte_len, VAR_3);
   } else {
    FUNC_4(VAR_4, "recv completion on "
           "%pI4 had status %u, disconnecting and "
           "reconnecting\n", &VAR_4->c_faddr,
           VAR_5.status);
   }
  }

  FUNC_7(&VAR_2->i_recv_ring, 1);
 }
}
