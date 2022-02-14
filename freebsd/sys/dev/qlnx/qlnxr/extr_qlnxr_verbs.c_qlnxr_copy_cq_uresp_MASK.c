
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uresp ;
struct qlnxr_dev {int * ha; } ;
struct qlnxr_create_cq_uresp {int icid; int db_offset; } ;
struct qlnxr_cq {int icid; } ;
struct ib_udata {int dummy; } ;
typedef int qlnx_host_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (struct ib_udata*,struct qlnxr_create_cq_uresp*,int) ;
 int FUNC_3 (struct qlnxr_create_cq_uresp*,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct qlnxr_dev *VAR_1,
 struct qlnxr_cq *VAR_2, struct ib_udata *VAR_3)
{
 struct qlnxr_create_cq_uresp VAR_4;
 int VAR_5;
 qlnx_host_t *VAR_6;

 VAR_6 = VAR_1->ha;

 FUNC_1(VAR_6, "enter\n");

 FUNC_3(&VAR_4, 0, sizeof(VAR_4));

 VAR_4.db_offset = FUNC_0(VAR_0);
 VAR_4.icid = VAR_2->icid;

 VAR_5 = FUNC_2(VAR_3, &VAR_4, sizeof(VAR_4));

 if (VAR_5) {
  FUNC_1(VAR_6, "ib_copy_to_udata error cqid=0x%x[%d]\n",
   VAR_2->icid, VAR_5);
 }

 FUNC_1(VAR_6, "exit [%d]\n", VAR_5);
 return VAR_5;
}
