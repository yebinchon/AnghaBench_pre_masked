
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_adapter {int ioctl_sx; int pdev; } ;


 int FUNC_0 (int ,struct ena_adapter*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct ena_adapter*,int) ;
 int FUNC_3 (struct ena_adapter*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void
FUNC_7(void *VAR_1, int VAR_2)
{
 struct ena_adapter *VAR_3 = (struct ena_adapter *)VAR_1;

 if (FUNC_6(!FUNC_0(VAR_0, VAR_3))) {
  FUNC_1(VAR_3->pdev,
      "device reset scheduled but trigger_reset is off\n");
  return;
 }

 FUNC_5(&VAR_3->ioctl_sx);
 FUNC_2(VAR_3, 0);
 FUNC_3(VAR_3);
 FUNC_4(&VAR_3->ioctl_sx);
}
