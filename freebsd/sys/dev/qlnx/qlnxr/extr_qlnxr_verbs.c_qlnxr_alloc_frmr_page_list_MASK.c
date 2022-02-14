
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ib_fast_reg_page_list {struct qlnxr_fast_reg_page_list* page_list; } ;
struct qlnxr_fast_reg_page_list {struct ib_fast_reg_page_list ibfrpl; int info; struct qlnxr_dev* dev; } ;
struct qlnxr_dev {int * ha; } ;
struct ib_device {int dummy; } ;
typedef int qlnx_host_t ;


 int VAR_0 ;
 struct ib_fast_reg_page_list* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,...) ;
 struct qlnxr_dev* FUNC_3 (struct ib_device*) ;
 int FUNC_4 (struct qlnxr_fast_reg_page_list*) ;
 void* FUNC_5 (int,int ) ;
 int FUNC_6 (struct qlnxr_dev*,int *,int,int) ;

struct ib_fast_reg_page_list *
FUNC_7(struct ib_device *VAR_2, int VAR_3)
{
 struct qlnxr_fast_reg_page_list *VAR_4 = ((void*)0);
 struct qlnxr_dev *VAR_5;
 int VAR_6 = VAR_3 * sizeof(u64);
 int VAR_7 = -VAR_0;
 qlnx_host_t *VAR_8;

 VAR_5 = FUNC_3(VAR_2);
 VAR_8 = VAR_5->ha;

 FUNC_2(VAR_8, "enter\n");

 VAR_4 = FUNC_5(sizeof(*VAR_4), VAR_1);
 if (!VAR_4) {
  FUNC_1(VAR_8, "kzalloc(frmr_list) failed\n");
  goto err;
 }

 VAR_4->dev = VAR_5;
 VAR_4->ibfrpl.page_list = FUNC_5(VAR_6, VAR_1);
 if (!VAR_4->ibfrpl.page_list) {
  FUNC_1(VAR_8, "frmr_list->ibfrpl.page_list = NULL failed\n");
  goto err0;
 }

 VAR_7 = FUNC_6(VAR_5, &VAR_4->info, VAR_3,
     1 );
 if (VAR_7)
  goto err1;

 FUNC_2(VAR_8, "exit %p\n", &VAR_4->ibfrpl);

 return &VAR_4->ibfrpl;

err1:
 FUNC_4(VAR_4->ibfrpl.page_list);
err0:
 FUNC_4(VAR_4);
err:
 FUNC_2(VAR_8, "exit with error\n");

 return FUNC_0(VAR_7);
}
