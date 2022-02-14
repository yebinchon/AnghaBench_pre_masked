
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_devinfo {int cfg; } ;
typedef int driver_t ;
typedef int device_t ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ,int **,int*) ;
 struct pci_devinfo* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ,struct pci_devinfo*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct pci_devinfo*) ;
 int FUNC_10 (int *,char*) ;

void
FUNC_11(device_t VAR_3, driver_t *VAR_4)
{
 int VAR_5;
 device_t *VAR_6;
 device_t VAR_7;
 struct pci_devinfo *VAR_8;
 int VAR_9;

 if (VAR_2)
  FUNC_4(VAR_3, "driver added\n");
 FUNC_0(VAR_4, VAR_3);
 if (FUNC_1(VAR_3, &VAR_6, &VAR_5) != 0)
  return;
 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  VAR_7 = VAR_6[VAR_9];
  if (FUNC_3(VAR_7) != VAR_0)
   continue;
  VAR_8 = FUNC_2(VAR_7);
  FUNC_9(VAR_8);
  if (VAR_2)
   FUNC_10(&VAR_8->cfg, "reprobing on driver added\n");
  FUNC_7(VAR_7, VAR_8);
  if (FUNC_5(VAR_7) != 0)
   FUNC_8(VAR_3, VAR_7);
 }
 FUNC_6(VAR_6, VAR_1);
}
