
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlnxr_qp {scalar_t__ icid; } ;
struct qlnxr_dev {int * ha; } ;
struct qlnxr_create_qp_uresp {scalar_t__ sq_icid; int sq_db_offset; } ;
typedef int qlnx_host_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct qlnxr_dev*) ;
 int FUNC_2 (int *,char*,...) ;

__attribute__((used)) static void
FUNC_3(struct qlnxr_dev *VAR_1,
 struct qlnxr_create_qp_uresp *VAR_2,
 struct qlnxr_qp *VAR_3)
{
 qlnx_host_t *VAR_4;

 VAR_4 = VAR_1->ha;

 FUNC_2(VAR_4, "enter\n");

 VAR_2->sq_db_offset = FUNC_0(VAR_0);


 if (FUNC_1(VAR_1)) {
  VAR_2->sq_icid = VAR_3->icid;
  FUNC_2(VAR_4, "uresp->sq_icid = 0x%x\n", VAR_2->sq_icid);
 } else
  VAR_2->sq_icid = VAR_3->icid + 1;

 FUNC_2(VAR_4, "exit\n");
 return;
}
