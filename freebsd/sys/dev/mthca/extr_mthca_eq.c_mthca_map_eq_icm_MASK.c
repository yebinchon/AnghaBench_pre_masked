
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int icm_page; int icm_dma; int icm_virt; } ;
struct mthca_dev {TYPE_1__ eq_table; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mthca_dev*,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;

int FUNC_6(struct mthca_dev *VAR_4, u64 VAR_5)
{
 int VAR_6;







 VAR_4->eq_table.icm_virt = VAR_5;
 VAR_4->eq_table.icm_page = FUNC_1(VAR_1);
 if (!VAR_4->eq_table.icm_page)
  return -VAR_0;
 VAR_4->eq_table.icm_dma = FUNC_4(VAR_4->pdev, VAR_4->eq_table.icm_page, 0,
           VAR_2, VAR_3);
 if (FUNC_3(VAR_4->pdev, VAR_4->eq_table.icm_dma)) {
  FUNC_0(VAR_4->eq_table.icm_page);
  return -VAR_0;
 }

 VAR_6 = FUNC_2(VAR_4, VAR_4->eq_table.icm_dma, VAR_5);
 if (VAR_6) {
  FUNC_5(VAR_4->pdev, VAR_4->eq_table.icm_dma, VAR_2,
          VAR_3);
  FUNC_0(VAR_4->eq_table.icm_page);
 }

 return VAR_6;
}
