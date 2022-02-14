
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahci_controller {int quirks; int caps; int r_mem; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 struct ahci_controller* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;

int
FUNC_5(device_t VAR_6)
{
 struct ahci_controller *VAR_7 = FUNC_3(VAR_6);
 int VAR_8;


 FUNC_1(VAR_7->r_mem, VAR_1, VAR_2);

 FUNC_1(VAR_7->r_mem, VAR_1, VAR_2|VAR_3);
 for (VAR_8 = 1000; VAR_8 > 0; VAR_8--) {
  FUNC_2(1000);
  if ((FUNC_0(VAR_7->r_mem, VAR_1) & VAR_3) == 0)
   break;
 }
 if (VAR_8 == 0) {
  FUNC_4(VAR_6, "AHCI controller reset failure\n");
  return (VAR_5);
 }

 FUNC_1(VAR_7->r_mem, VAR_1, VAR_2);

 if (VAR_7->quirks & VAR_4) {







  FUNC_1(VAR_7->r_mem, VAR_0, VAR_7->caps);
 }

 return (0);
}
