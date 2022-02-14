
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int link_speed; int module_type; int link_faults; int cable_length; scalar_t__ autoneg; scalar_t__ fduplex; scalar_t__ link_up; int cable_oui; } ;
struct TYPE_5__ {int pci_dev; TYPE_1__ hw; } ;
typedef TYPE_2__ qla_host_t ;


 int FUNC_0 (int ,char*,...) ;

void
FUNC_1(qla_host_t *VAR_0)
{
 FUNC_0(VAR_0->pci_dev, "cable_oui\t\t 0x%08x\n", VAR_0->hw.cable_oui);

 if (VAR_0->hw.link_up) {
  FUNC_0(VAR_0->pci_dev, "link Up\n");
 } else {
  FUNC_0(VAR_0->pci_dev, "link Down\n");
 }

 if (VAR_0->hw.fduplex) {
  FUNC_0(VAR_0->pci_dev, "Full Duplex\n");
 } else {
  FUNC_0(VAR_0->pci_dev, "Half Duplex\n");
 }

 if (VAR_0->hw.autoneg) {
  FUNC_0(VAR_0->pci_dev, "Auto Negotiation Enabled\n");
 } else {
  FUNC_0(VAR_0->pci_dev, "Auto Negotiation Disabled\n");
 }

 switch (VAR_0->hw.link_speed) {
 case 0x710:
  FUNC_0(VAR_0->pci_dev, "link speed\t\t 10Gps\n");
  break;

 case 0x3E8:
  FUNC_0(VAR_0->pci_dev, "link speed\t\t 1Gps\n");
  break;

 case 0x64:
  FUNC_0(VAR_0->pci_dev, "link speed\t\t 100Mbps\n");
  break;

 default:
  FUNC_0(VAR_0->pci_dev, "link speed\t\t Unknown\n");
  break;
 }

 switch (VAR_0->hw.module_type) {

 case 0x01:
  FUNC_0(VAR_0->pci_dev, "Module Type 10GBase-LRM\n");
  break;

 case 0x02:
  FUNC_0(VAR_0->pci_dev, "Module Type 10GBase-LR\n");
  break;

 case 0x03:
  FUNC_0(VAR_0->pci_dev, "Module Type 10GBase-SR\n");
  break;

 case 0x04:
  FUNC_0(VAR_0->pci_dev,
   "Module Type 10GE Passive Copper(Compliant)[%d m]\n",
   VAR_0->hw.cable_length);
  break;

 case 0x05:
  FUNC_0(VAR_0->pci_dev, "Module Type 10GE Active"
   " Limiting Copper(Compliant)[%d m]\n",
   VAR_0->hw.cable_length);
  break;

 case 0x06:
  FUNC_0(VAR_0->pci_dev,
   "Module Type 10GE Passive Copper"
   " (Legacy, Best Effort)[%d m]\n",
   VAR_0->hw.cable_length);
  break;

 case 0x07:
  FUNC_0(VAR_0->pci_dev, "Module Type 1000Base-SX\n");
  break;

 case 0x08:
  FUNC_0(VAR_0->pci_dev, "Module Type 1000Base-LX\n");
  break;

 case 0x09:
  FUNC_0(VAR_0->pci_dev, "Module Type 1000Base-CX\n");
  break;

 case 0x0A:
  FUNC_0(VAR_0->pci_dev, "Module Type 1000Base-T\n");
  break;

 case 0x0B:
  FUNC_0(VAR_0->pci_dev, "Module Type 1GE Passive Copper"
   "(Legacy, Best Effort)\n");
  break;

 default:
  FUNC_0(VAR_0->pci_dev, "Unknown Module Type 0x%x\n",
   VAR_0->hw.module_type);
  break;
 }

 if (VAR_0->hw.link_faults == 1)
  FUNC_0(VAR_0->pci_dev, "SFP Power Fault\n");
}
