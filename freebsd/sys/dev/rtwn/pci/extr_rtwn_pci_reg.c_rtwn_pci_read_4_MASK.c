
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct rtwn_softc {int dummy; } ;
struct rtwn_pci_softc {int pc_sh; int pc_st; } ;


 struct rtwn_pci_softc* FUNC_0 (struct rtwn_softc*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;

uint32_t
FUNC_3(struct rtwn_softc *VAR_0, uint16_t VAR_1)
{
 struct rtwn_pci_softc *VAR_2 = FUNC_0(VAR_0);
 uint32_t VAR_3;

 VAR_3 = FUNC_1(VAR_2->pc_st, VAR_2->pc_sh, VAR_1);
 return FUNC_2(VAR_3);
}
