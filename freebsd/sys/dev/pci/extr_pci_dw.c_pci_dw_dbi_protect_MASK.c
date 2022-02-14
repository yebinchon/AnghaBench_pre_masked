
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pci_dw_softc {int dummy; } ;


 int FUNC_0 (struct pci_dw_softc*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct pci_dw_softc*,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct pci_dw_softc *VAR_2, bool VAR_3)
{
 uint32_t VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_1);
 if (VAR_3)
  VAR_4 &= ~VAR_0;
 else
  VAR_4 |= VAR_0;
 FUNC_1(VAR_2, VAR_1, VAR_4);
}
