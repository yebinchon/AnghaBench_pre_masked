
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct TYPE_4__ {TYPE_2__* reg; } ;
typedef TYPE_1__ ocs_t ;
struct TYPE_5__ {int bhandle; int btag; } ;
typedef TYPE_2__ ocs_pci_reg_t ;


 int FUNC_0 (int ,int ,size_t) ;

uint8_t
FUNC_1(ocs_t *VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
 ocs_pci_reg_t *VAR_3 = ((void*)0);

 VAR_3 = &VAR_0->reg[VAR_1];

 return FUNC_0(VAR_3->btag, VAR_3->bhandle, VAR_2);
}
