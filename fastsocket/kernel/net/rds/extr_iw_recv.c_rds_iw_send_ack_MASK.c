
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct rds_iw_connection {int conn; int i_ack_flags; int i_ack_wr; TYPE_1__* i_cm_id; int i_ack_queued; struct rds_header* i_ack; } ;
struct rds_header {unsigned int h_credit; int h_ack; } ;
struct ib_send_wr {int dummy; } ;
struct TYPE_2__ {int qp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int *,struct ib_send_wr**) ;
 int VAR_2 ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (struct rds_iw_connection*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct rds_header*) ;
 int FUNC_7 (struct rds_header*,int ,int ,int ) ;
 int FUNC_8 (char*,struct rds_iw_connection*,unsigned long long) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct rds_iw_connection *VAR_5, unsigned int VAR_6)
{
 struct rds_header *VAR_7 = VAR_5->i_ack;
 struct ib_send_wr *VAR_8;
 u64 VAR_9;
 int VAR_10;

 VAR_9 = FUNC_4(VAR_5);

 FUNC_8("send_ack: ic %p ack %llu\n", VAR_5, (unsigned long long) VAR_9);
 FUNC_7(VAR_7, 0, 0, 0);
 VAR_7->h_ack = FUNC_1(VAR_9);
 VAR_7->h_credit = VAR_6;
 FUNC_6(VAR_7);
 VAR_5->i_ack_queued = VAR_2;

 VAR_10 = FUNC_2(VAR_5->i_cm_id->qp, &VAR_5->i_ack_wr, &VAR_8);
 if (FUNC_10(VAR_10)) {



  FUNC_0(VAR_0, &VAR_5->i_ack_flags);
  FUNC_9(VAR_1, &VAR_5->i_ack_flags);

  FUNC_5(VAR_3);

  FUNC_3(VAR_5->conn, "sending ack failed\n");
 } else
  FUNC_5(VAR_4);
}
