
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef void* u16 ;
struct ibv_qp_attr {void* rq_psn; void* sq_psn; } ;
struct ibv_modify_qp {int dummy; } ;
struct TYPE_3__ {scalar_t__ qid; } ;
struct TYPE_4__ {TYPE_1__ sq; } ;
struct c4iw_qp {int ibv_qp; TYPE_2__ wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct ibv_qp_attr*,int,struct ibv_modify_qp*,int) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct c4iw_qp *VAR_2, u32 VAR_3, u16 VAR_4)
{
 struct ibv_modify_qp VAR_5 = {};
 struct ibv_qp_attr VAR_6;
 int VAR_7;
 int __attribute__((unused)) VAR_8;



 FUNC_2();
 if (VAR_3 == VAR_2->wq.sq.qid) {
  VAR_6.sq_psn = VAR_4;
  VAR_7 = VAR_1;
 } else {
  VAR_6.rq_psn = VAR_4;
  VAR_7 = VAR_0;
 }
 VAR_8 = FUNC_1(&VAR_2->ibv_qp, &VAR_6, VAR_7, &VAR_5, sizeof VAR_5);
 FUNC_0(!VAR_8);
}
