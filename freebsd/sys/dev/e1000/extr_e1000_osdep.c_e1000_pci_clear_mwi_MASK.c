
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct e1000_osdep {int dev; } ;
struct TYPE_2__ {int pci_cmd_word; } ;
struct e1000_hw {TYPE_1__ bus; scalar_t__ back; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int) ;

void
FUNC_1(struct e1000_hw *VAR_2)
{
 FUNC_0(((struct e1000_osdep *)VAR_2->back)->dev, VAR_1,
     (VAR_2->bus.pci_cmd_word & ~VAR_0), 2);
}
