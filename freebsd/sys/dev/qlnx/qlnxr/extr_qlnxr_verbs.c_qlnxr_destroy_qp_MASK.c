
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlnxr_qp {scalar_t__ qp_type; int destroyed; int state; int qp_id; int refcnt; int sig; struct qlnxr_dev* dev; } ;
struct qlnxr_dev {int * ha; } ;
struct ib_qp_attr {int qp_state; } ;
struct ib_qp {int dummy; } ;
typedef int qlnx_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct qlnxr_dev*) ;
 int FUNC_1 (int *,char*,...) ;
 scalar_t__ FUNC_2 (int *) ;
 struct qlnxr_qp* FUNC_3 (struct ib_qp*) ;
 int FUNC_4 (struct qlnxr_qp*) ;
 int FUNC_5 (struct qlnxr_dev*) ;
 int FUNC_6 (struct qlnxr_dev*,struct qlnxr_qp*) ;
 int FUNC_7 (struct qlnxr_dev*,int ) ;
 int FUNC_8 (struct ib_qp*,struct ib_qp_attr*,int,int *) ;

int
FUNC_9(struct ib_qp *VAR_6)
{
 struct qlnxr_qp *VAR_7 = FUNC_3(VAR_6);
 struct qlnxr_dev *VAR_8 = VAR_7->dev;
 int VAR_9 = 0;
 struct ib_qp_attr VAR_10;
 int VAR_11 = 0;
 qlnx_host_t *VAR_12;

 VAR_12 = VAR_8->ha;

 FUNC_1(VAR_12, "enter qp = %p, qp_type=%d\n", VAR_7, VAR_7->qp_type);

 VAR_7->destroyed = 1;

 if (FUNC_0(VAR_8) && (VAR_7->state != (VAR_2 |
      VAR_0 |
      VAR_1))) {

  VAR_10.qp_state = VAR_3;
  VAR_11 |= VAR_5;


  FUNC_8(VAR_6, &VAR_10, VAR_11, ((void*)0));
 }

 if (VAR_7->qp_type == VAR_4)
  FUNC_5(VAR_8);

 VAR_7->sig = ~VAR_7->sig;

 FUNC_6(VAR_8, VAR_7);

 if (FUNC_2(&VAR_7->refcnt)) {

  FUNC_7(VAR_8, VAR_7->qp_id);
  FUNC_4(VAR_7);
 }

 FUNC_1(VAR_12, "exit\n");
 return VAR_9;
}
