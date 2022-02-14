
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cmd; int width; int val; int reg; } ;
typedef TYPE_1__ qlnx_pcicfg_rd_wr_t ;
struct TYPE_6__ {int pci_dev; } ;
typedef TYPE_2__ qlnx_host_t ;


 int VAR_0 ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(qlnx_host_t *VAR_1, qlnx_pcicfg_rd_wr_t *VAR_2)
{
 int VAR_3 = 0;

 switch (VAR_2->cmd) {

  case 129:
   VAR_2->val = FUNC_0(VAR_1->pci_dev,
      VAR_2->reg,
      VAR_2->width);
   break;

  case 128:
   FUNC_1(VAR_1->pci_dev, VAR_2->reg,
    VAR_2->val, VAR_2->width);
   break;

  default:
   VAR_3 = VAR_0;
   break;
 }

 return (VAR_3);
}
