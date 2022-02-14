
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uresp ;
struct qlnxr_qp {int icid; int qp_id; } ;
struct qlnxr_dev {scalar_t__ atomic_cap; int * ha; } ;
struct qlnxr_create_qp_uresp {int atomic_supported; int qp_id; } ;
struct ib_udata {int dummy; } ;
typedef int qlnx_host_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct ib_udata*,struct qlnxr_create_qp_uresp*,int) ;
 int FUNC_2 (struct qlnxr_create_qp_uresp*,int ,int) ;
 int FUNC_3 (struct qlnxr_dev*,struct qlnxr_create_qp_uresp*,struct qlnxr_qp*) ;
 int FUNC_4 (struct qlnxr_dev*,struct qlnxr_create_qp_uresp*,struct qlnxr_qp*) ;

__attribute__((used)) static int
FUNC_5(struct qlnxr_dev *VAR_1,
 struct qlnxr_qp *VAR_2,
 struct ib_udata *VAR_3)
{
 int VAR_4;
 struct qlnxr_create_qp_uresp VAR_5;
 qlnx_host_t *VAR_6;

 VAR_6 = VAR_1->ha;

 FUNC_0(VAR_6, "enter qp->icid =0x%x\n", VAR_2->icid);

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 FUNC_4(VAR_1, &VAR_5, VAR_2);
 FUNC_3(VAR_1, &VAR_5, VAR_2);

 VAR_5.atomic_supported = VAR_1->atomic_cap != VAR_0;
 VAR_5.qp_id = VAR_2->qp_id;

 VAR_4 = FUNC_1(VAR_3, &VAR_5, sizeof(VAR_5));

 FUNC_0(VAR_6, "exit [%d]\n", VAR_4);
 return VAR_4;
}
