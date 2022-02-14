
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct qlnxr_fast_reg_page_list* page_list; } ;
struct qlnxr_fast_reg_page_list {TYPE_1__ ibfrpl; int info; int dev; } ;
struct ib_fast_reg_page_list {int dummy; } ;


 int FUNC_0 (int ,int *) ;
 struct qlnxr_fast_reg_page_list* FUNC_1 (struct ib_fast_reg_page_list*) ;
 int FUNC_2 (struct qlnxr_fast_reg_page_list*) ;

void
FUNC_3(struct ib_fast_reg_page_list *VAR_0)
{
 struct qlnxr_fast_reg_page_list *VAR_1;

 VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->dev, &VAR_1->info);

 FUNC_2(VAR_1->ibfrpl.page_list);
 FUNC_2(VAR_1);

 return;
}
