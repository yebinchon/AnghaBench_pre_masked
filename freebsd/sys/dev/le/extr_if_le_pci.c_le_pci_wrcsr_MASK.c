
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct le_pci_softc {int sc_rres; } ;
struct lance_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct lance_softc *VAR_3, uint16_t VAR_4, uint16_t VAR_5)
{
 struct le_pci_softc *VAR_6 = (struct le_pci_softc *)VAR_3;

 FUNC_1(VAR_6->sc_rres, VAR_1, VAR_4);
 FUNC_0(VAR_6->sc_rres, VAR_1, 2, VAR_0);
 FUNC_1(VAR_6->sc_rres, VAR_2, VAR_5);
}
