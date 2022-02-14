
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {int dummy; } ;
struct rtwn_pci_softc {struct rtwn_softc pc_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtwn_softc*,int ,int ) ;

void
FUNC_1(struct rtwn_pci_softc *VAR_4)
{
 struct rtwn_softc *VAR_5 = &VAR_4->pc_sc;


 FUNC_0(VAR_5, VAR_0, VAR_2);
 FUNC_0(VAR_5, VAR_1, VAR_3);
}
