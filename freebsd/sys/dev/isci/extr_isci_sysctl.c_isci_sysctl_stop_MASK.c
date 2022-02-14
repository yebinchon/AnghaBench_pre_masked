
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ISCI_CONTROLLER {int scif_controller_handle; } ;
typedef int * SCI_PHY_HANDLE_T ;


 int FUNC_0 (int ,int ,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct ISCI_CONTROLLER *VAR_0, uint32_t VAR_1)
{
 SCI_PHY_HANDLE_T VAR_2 = ((void*)0);

 FUNC_0(
     FUNC_2(VAR_0->scif_controller_handle),
     VAR_1, &VAR_2);

 FUNC_1(VAR_2);
}
