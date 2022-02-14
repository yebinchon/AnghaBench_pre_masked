
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uresp ;
struct qlnxr_srq {int srq_id; } ;
struct qlnxr_dev {int * ha; } ;
struct qlnxr_create_srq_uresp {int srq_id; } ;
struct ib_udata {int dummy; } ;
typedef int qlnx_host_t ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct ib_udata*,struct qlnxr_create_srq_uresp*,int) ;
 int FUNC_2 (struct qlnxr_create_srq_uresp*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct qlnxr_dev *VAR_0,
 struct qlnxr_srq *VAR_1,
 struct ib_udata *VAR_2)
{
 struct qlnxr_create_srq_uresp VAR_3;
 qlnx_host_t *VAR_4;
 int VAR_5;

 VAR_4 = VAR_0->ha;

 FUNC_0(VAR_4, "enter\n");

 FUNC_2(&VAR_3, 0, sizeof(VAR_3));

 VAR_3.srq_id = VAR_1->srq_id;

 VAR_5 = FUNC_1(VAR_2, &VAR_3, sizeof(VAR_3));

 FUNC_0(VAR_4, "exit [%d]\n", VAR_5);
 return VAR_5;
}
