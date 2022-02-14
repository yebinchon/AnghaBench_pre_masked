
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ISCI_CONTROLLER {int scif_controller_handle; } ;
typedef int SCI_CONTROLLER_HANDLE_T ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(void *VAR_0)
{
 struct ISCI_CONTROLLER *VAR_1 =
     (struct ISCI_CONTROLLER *)VAR_0;
 SCI_CONTROLLER_HANDLE_T VAR_2 =
     VAR_1->scif_controller_handle;

 FUNC_3(VAR_2,
     FUNC_2(VAR_2));

 FUNC_0(
     FUNC_1(VAR_1->scif_controller_handle));
}
