
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int op_bytes; scalar_t__ op_write; scalar_t__ op_active; } ;
struct TYPE_5__ {int op_nents; int op_sg; } ;
struct rds_message {TYPE_3__ rdma; TYPE_2__ data; } ;
struct rds_iw_send_work {struct rds_message* s_rm; } ;
struct rds_iw_connection {TYPE_1__* i_cm_id; } ;
struct TYPE_4__ {int device; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct rds_message*,int) ;
 int FUNC_2 (struct rds_iw_connection*,TYPE_3__*) ;
 int FUNC_3 (struct rds_message*) ;
 int FUNC_4 (struct rds_message*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*,struct rds_iw_connection*,struct rds_iw_send_work*,struct rds_message*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_7(struct rds_iw_connection *VAR_3,
     struct rds_iw_send_work *VAR_4,
     int VAR_5)
{
 struct rds_message *VAR_6 = VAR_4->s_rm;

 FUNC_6("ic %p send %p rm %p\n", VAR_3, VAR_4, VAR_6);

 FUNC_0(VAR_3->i_cm_id->device,
       VAR_6->data.op_sg, VAR_6->data.op_nents,
       VAR_0);

 if (VAR_6->rdma.op_active) {
  FUNC_2(VAR_3, &VAR_6->rdma);
  FUNC_1(VAR_6, VAR_5);

  if (VAR_6->rdma.op_write)
   FUNC_5(VAR_2, VAR_6->rdma.op_bytes);
  else
   FUNC_5(VAR_1, VAR_6->rdma.op_bytes);
 }



 FUNC_4(VAR_6);

 FUNC_3(VAR_6);
 VAR_4->s_rm = ((void*)0);
}
