
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlnxr_qp {int icid; int srq; } ;
struct qlnxr_dev {int * ha; } ;
struct qlnxr_create_qp_uresp {int rq_icid; void* rq_db_offset; void* rq_db2_offset; } ;
typedef int qlnx_host_t ;


 void* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct qlnxr_dev*) ;
 int FUNC_2 (int *,char*,...) ;

__attribute__((used)) static void
FUNC_3(struct qlnxr_dev *VAR_3,
 struct qlnxr_create_qp_uresp *VAR_4,
 struct qlnxr_qp *VAR_5)
{
 qlnx_host_t *VAR_6;

 VAR_6 = VAR_3->ha;


 FUNC_2(VAR_6, "enter qp->srq = %p\n", VAR_5->srq);

 if (VAR_5->srq)
  return;


 if (FUNC_1(VAR_3)) {

  VAR_4->rq_db_offset =
   FUNC_0(VAR_1);
  VAR_4->rq_db2_offset =
   FUNC_0(VAR_0);

  FUNC_2(VAR_6, "uresp->rq_db_offset = 0x%x "
   "uresp->rq_db2_offset = 0x%x\n",
   VAR_4->rq_db_offset, VAR_4->rq_db2_offset);
 } else {
  VAR_4->rq_db_offset =
   FUNC_0(VAR_2);
 }
 VAR_4->rq_icid = VAR_5->icid;

 FUNC_2(VAR_6, "exit\n");
 return;
}
