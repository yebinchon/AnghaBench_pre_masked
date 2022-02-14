
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlnxr_qp {int qp_id; TYPE_1__* dev; int refcnt; } ;
struct ib_qp {int dummy; } ;
typedef int qlnx_host_t ;
struct TYPE_2__ {int * ha; } ;


 int FUNC_0 (int *,char*,...) ;
 scalar_t__ FUNC_1 (int *) ;
 struct qlnxr_qp* FUNC_2 (struct ib_qp*) ;
 int FUNC_3 (struct qlnxr_qp*) ;
 int FUNC_4 (TYPE_1__*,int ) ;

void
FUNC_5(struct ib_qp *VAR_0)
{
 struct qlnxr_qp *VAR_1 = FUNC_2(VAR_0);
 qlnx_host_t *VAR_2;

 VAR_2 = VAR_1->dev->ha;

 FUNC_0(VAR_2, "enter ibqp = %p qp = %p\n", VAR_0, VAR_1);

 if (FUNC_1(&VAR_1->refcnt)) {
  FUNC_4(VAR_1->dev, VAR_1->qp_id);
  FUNC_3(VAR_1);
 }

 FUNC_0(VAR_2, "exit \n");
 return;
}
