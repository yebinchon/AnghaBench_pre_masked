
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rtwn_pci_softc {int dummy; } ;
struct r92ce_tx_desc {int nextdescaddr; } ;


 int FUNC_0 (int ) ;

void
FUNC_1(struct rtwn_pci_softc *VAR_0, void *VAR_1,
    uint32_t VAR_2)
{
 struct r92ce_tx_desc *VAR_3 = VAR_1;


 VAR_3->nextdescaddr = FUNC_0(VAR_2);
}
