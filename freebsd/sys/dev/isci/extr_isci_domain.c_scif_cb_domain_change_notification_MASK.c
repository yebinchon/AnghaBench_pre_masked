
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ISCI_CONTROLLER {scalar_t__ is_started; } ;
typedef int SCI_DOMAIN_HANDLE_T ;
typedef int SCI_CONTROLLER_HANDLE_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;

void
FUNC_3(SCI_CONTROLLER_HANDLE_T VAR_2,
    SCI_DOMAIN_HANDLE_T VAR_3)
{
 struct ISCI_CONTROLLER *VAR_4 =
     (struct ISCI_CONTROLLER *)FUNC_0(VAR_2);







 if (VAR_4->is_started == VAR_1)
     FUNC_1(VAR_3,
         FUNC_2(VAR_3),
         VAR_0);
}
