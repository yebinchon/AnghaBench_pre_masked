
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct ISCI_REMOTE_DEVICE {struct ISCI_DOMAIN* domain; } ;
struct ISCI_DOMAIN {int sci_object; struct ISCI_CONTROLLER* controller; } ;
struct ISCI_CONTROLLER {int scif_controller_handle; } ;
struct TYPE_6__ {int negotiated_link_rate; } ;
struct TYPE_5__ {int phy_mask; } ;
typedef int SCI_PORT_HANDLE_T ;
typedef int SCI_PHY_HANDLE_T ;
typedef TYPE_1__ SCIC_PORT_PROPERTIES_T ;
typedef TYPE_2__ SCIC_PHY_PROPERTIES_T ;





 int FUNC_0 (int ,scalar_t__,int *) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

uint32_t
FUNC_5(struct ISCI_REMOTE_DEVICE *VAR_0)
{
 struct ISCI_DOMAIN *VAR_1 = VAR_0->domain;
 struct ISCI_CONTROLLER *VAR_2 = VAR_1->controller;
 SCI_PORT_HANDLE_T VAR_3;
 SCIC_PORT_PROPERTIES_T VAR_4;
 uint8_t VAR_5;
 SCI_PHY_HANDLE_T VAR_6;
 SCIC_PHY_PROPERTIES_T VAR_7;




 VAR_3 = FUNC_4(VAR_1->sci_object);
 FUNC_2(VAR_3, &VAR_4);


 VAR_5 = 0;
 while ((VAR_4.phy_mask != 0) &&
     !(VAR_4.phy_mask & 0x1)) {

  VAR_5++;
  VAR_4.phy_mask >>= 1;
 }


 FUNC_0(
     FUNC_3(VAR_2->scif_controller_handle),
     VAR_5, &VAR_6);
 FUNC_1(VAR_6, &VAR_7);

 switch (VAR_7.negotiated_link_rate) {
 case 130:
  return (150000);
 case 129:
  return (300000);
 case 128:
  return (600000);
 default:
  return (0);
 }
}
