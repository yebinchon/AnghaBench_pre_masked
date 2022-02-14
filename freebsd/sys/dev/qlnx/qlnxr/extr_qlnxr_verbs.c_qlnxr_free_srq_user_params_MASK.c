
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int umem; int pbl_tbl; int pbl_info; } ;
struct qlnxr_srq {int prod_umem; TYPE_1__ usrq; struct qlnxr_dev* dev; } ;
struct qlnxr_dev {int * ha; } ;
typedef int qlnx_host_t ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct qlnxr_dev*,int *,int ) ;

__attribute__((used)) static void
FUNC_3(struct qlnxr_srq *VAR_0)
{
 struct qlnxr_dev *VAR_1 = VAR_0->dev;
 qlnx_host_t *VAR_2;

 VAR_2 = VAR_1->ha;

 FUNC_0(VAR_2, "enter\n");

 FUNC_2(VAR_0->dev, &VAR_0->usrq.pbl_info, VAR_0->usrq.pbl_tbl);
 FUNC_1(VAR_0->usrq.umem);
 FUNC_1(VAR_0->prod_umem);

 FUNC_0(VAR_2, "exit\n");
 return;
}
