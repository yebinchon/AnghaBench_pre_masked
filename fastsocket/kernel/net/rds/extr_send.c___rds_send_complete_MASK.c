
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rm_rdma_op {TYPE_1__* op_notifier; scalar_t__ op_notify; scalar_t__ op_active; } ;
struct rm_atomic_op {TYPE_2__* op_notifier; scalar_t__ op_notify; scalar_t__ op_active; } ;
struct rds_sock {int rs_notify_queue; } ;
struct rds_message {struct rm_atomic_op atomic; struct rm_rdma_op rdma; } ;
struct TYPE_4__ {int n_status; int n_list; } ;
struct TYPE_3__ {int n_status; int n_list; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static inline void
FUNC_1(struct rds_sock *VAR_0, struct rds_message *VAR_1, int VAR_2)
{
 struct rm_rdma_op *VAR_3;
 struct rm_atomic_op *VAR_4;

 VAR_3 = &VAR_1->rdma;
 if (VAR_3->op_active && VAR_3->op_notify && VAR_3->op_notifier) {
  VAR_3->op_notifier->n_status = VAR_2;
  FUNC_0(&VAR_3->op_notifier->n_list, &VAR_0->rs_notify_queue);
  VAR_3->op_notifier = ((void*)0);
 }

 VAR_4 = &VAR_1->atomic;
 if (VAR_4->op_active && VAR_4->op_notify && VAR_4->op_notifier) {
  VAR_4->op_notifier->n_status = VAR_2;
  FUNC_0(&VAR_4->op_notifier->n_list, &VAR_0->rs_notify_queue);
  VAR_4->op_notifier = ((void*)0);
 }


}
