
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


 void FUNC_0 (int ,int ,size_t,int ) ;

void
FUNC_1(ocs_t *VAR_0, uint32_t VAR_1, uint32_t VAR_2, uint8_t VAR_3)
{
 ocs_pci_reg_t *VAR_4 = ((void*)0);

 VAR_4 = &VAR_0->reg[VAR_1];

 return FUNC_0(VAR_4->btag, VAR_4->bhandle, VAR_2, VAR_3);
}
