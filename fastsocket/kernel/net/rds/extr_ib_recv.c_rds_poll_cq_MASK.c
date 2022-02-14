
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rds_ib_recv_work {TYPE_3__* r_frag; } ;
struct rds_ib_connection {int i_recv_ring; TYPE_2__* i_cm_id; struct rds_ib_recv_work* i_recvs; int i_recv_cq; struct rds_connection* conn; } ;
struct rds_ib_ack_state {int dummy; } ;
struct rds_connection {int c_faddr; } ;
struct TYPE_4__ {int imm_data; } ;
struct ib_wc {scalar_t__ status; int byte_len; TYPE_1__ ex; scalar_t__ wr_id; } ;
struct TYPE_6__ {int f_sg; } ;
struct TYPE_5__ {int device; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int,int ) ;
 scalar_t__ FUNC_2 (int ,int,struct ib_wc*) ;
 scalar_t__ FUNC_3 (struct rds_connection*) ;
 scalar_t__ FUNC_4 (struct rds_connection*) ;
 int FUNC_5 (struct rds_connection*,char*,int *,scalar_t__,int ) ;
 int FUNC_6 (struct rds_connection*,struct rds_ib_recv_work*,int ,struct rds_ib_ack_state*) ;
 int FUNC_7 (int *,int) ;
 size_t FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (char*,unsigned long long,scalar_t__,int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static inline void FUNC_12(struct rds_ib_connection *VAR_3,
          struct rds_ib_ack_state *VAR_4)
{
 struct rds_connection *VAR_5 = VAR_3->conn;
 struct ib_wc VAR_6;
 struct rds_ib_recv_work *VAR_7;

 while (FUNC_2(VAR_3->i_recv_cq, 1, &VAR_6) > 0) {
  FUNC_11("wc wr_id 0x%llx status %u (%s) byte_len %u imm_data %u\n",
    (unsigned long long)VAR_6.wr_id, VAR_6.status,
    FUNC_10(VAR_6.status), VAR_6.byte_len,
    FUNC_0(VAR_6.ex.imm_data));
  FUNC_9(VAR_2);

  VAR_7 = &VAR_3->i_recvs[FUNC_8(&VAR_3->i_recv_ring)];

  FUNC_1(VAR_3->i_cm_id->device, &VAR_7->r_frag->f_sg, 1, VAR_0);






  if (VAR_6.status == VAR_1) {
   FUNC_6(VAR_5, VAR_7, VAR_6.byte_len, VAR_4);
  } else {

   if (FUNC_4(VAR_5) || FUNC_3(VAR_5))
    FUNC_5(VAR_5, "recv completion on %pI4 had "
        "status %u (%s), disconnecting and "
        "reconnecting\n", &VAR_5->c_faddr,
        VAR_6.status,
        FUNC_10(VAR_6.status));
  }






  FUNC_7(&VAR_3->i_recv_ring, 1);
 }
}
