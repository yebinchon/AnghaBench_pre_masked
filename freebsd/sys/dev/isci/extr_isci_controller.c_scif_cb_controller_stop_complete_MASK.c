
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ISCI_CONTROLLER {int is_started; } ;
typedef int SCI_STATUS ;
typedef int SCI_CONTROLLER_HANDLE_T ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

void FUNC_1(SCI_CONTROLLER_HANDLE_T VAR_1,
    SCI_STATUS VAR_2)
{
 struct ISCI_CONTROLLER *VAR_3 = (struct ISCI_CONTROLLER *)
     FUNC_0(VAR_1);

 VAR_3->is_started = VAR_0;
}
