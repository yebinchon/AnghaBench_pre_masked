
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct qlnxr_qp {int rqe_wr_id; int wqe_wr_id; } ;
struct qlnxr_dev {TYPE_1__* ha; } ;
struct TYPE_3__ {int qlnxr_debug; } ;
typedef TYPE_1__ qlnx_host_t ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct qlnxr_qp*) ;
 scalar_t__ FUNC_3 (struct qlnxr_qp*) ;

__attribute__((used)) static void
FUNC_4(struct qlnxr_dev *VAR_0, struct qlnxr_qp *VAR_1)
{
 qlnx_host_t *VAR_2;

 VAR_2 = VAR_0->ha;

 FUNC_0(VAR_2, "enter\n");

 if (FUNC_3(VAR_1)) {
  FUNC_0(VAR_2, "freeing SQ\n");
  VAR_2->qlnxr_debug = 1;

  VAR_2->qlnxr_debug = 0;
  FUNC_1(VAR_1->wqe_wr_id);
 }

 if (FUNC_2(VAR_1)) {
  FUNC_0(VAR_2, "freeing RQ\n");
  VAR_2->qlnxr_debug = 1;

  VAR_2->qlnxr_debug = 0;
  FUNC_1(VAR_1->rqe_wr_id);
 }

 FUNC_0(VAR_2, "exit\n");
 return;
}
