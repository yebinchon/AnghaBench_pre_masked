
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ISCI_DOMAIN {int dummy; } ;
struct ISCI_CONTROLLER {int dummy; } ;
typedef scalar_t__ SCI_STATUS ;
typedef int SCI_DOMAIN_HANDLE_T ;
typedef int SCI_CONTROLLER_HANDLE_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ISCI_CONTROLLER*,struct ISCI_DOMAIN*) ;
 int FUNC_1 (int ,char*,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

void
FUNC_3(SCI_CONTROLLER_HANDLE_T VAR_1,
    SCI_DOMAIN_HANDLE_T VAR_2, SCI_STATUS VAR_3)
{

 if(VAR_3 != VAR_0)
  FUNC_1(0, "ISCI",
      "scif_cb_domain_discovery_complete status = 0x%x\n",
      VAR_3);

 FUNC_0(
     (struct ISCI_CONTROLLER *)FUNC_2(VAR_1),
     (struct ISCI_DOMAIN *) FUNC_2(VAR_2));
}
