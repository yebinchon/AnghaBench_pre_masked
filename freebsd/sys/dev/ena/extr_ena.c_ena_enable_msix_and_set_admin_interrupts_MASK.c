
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_com_dev {int dummy; } ;
struct ena_adapter {int pdev; struct ena_com_dev* ena_dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ena_com_dev*) ;
 int FUNC_2 (struct ena_com_dev*,int) ;
 int FUNC_3 (struct ena_adapter*) ;
 int FUNC_4 (struct ena_adapter*) ;
 int FUNC_5 (struct ena_adapter*) ;
 int FUNC_6 (struct ena_adapter*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct ena_adapter *VAR_0,
    int VAR_1)
{
 struct ena_com_dev *VAR_2 = VAR_0->ena_dev;
 int VAR_3;

 VAR_3 = FUNC_4(VAR_0);
 if (FUNC_7(VAR_3 != 0)) {
  FUNC_0(VAR_0->pdev, "Error with MSI-X enablement\n");
  return (VAR_3);
 }

 FUNC_6(VAR_0);

 VAR_3 = FUNC_5(VAR_0);
 if (FUNC_7(VAR_3 != 0)) {
  FUNC_0(VAR_0->pdev, "Cannot setup mgmnt queue intr\n");
  goto err_disable_msix;
 }

 FUNC_2(VAR_2, 0);

 FUNC_1(VAR_2);

 return (0);

err_disable_msix:
 FUNC_3(VAR_0);

 return (VAR_3);
}
