
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gt_pci_softc {int sc_imask; int sc_elcr; int sc_ioh_elcr; int sc_st; int sc_ioh_icu2; int sc_ioh_icu1; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int) ;

__attribute__((used)) static void
FUNC_1(struct gt_pci_softc *VAR_1)
{

 if ((VAR_1->sc_imask & 0xff00) != 0xff00)
  VAR_1->sc_imask &= ~(1U << 2);
 else
  VAR_1->sc_imask |= (1U << 2);

 FUNC_0(VAR_1->sc_st, VAR_1->sc_ioh_icu1, VAR_0,
     VAR_1->sc_imask & 0xff);
 FUNC_0(VAR_1->sc_st, VAR_1->sc_ioh_icu2, VAR_0,
     (VAR_1->sc_imask >> 8) & 0xff);

 FUNC_0(VAR_1->sc_st, VAR_1->sc_ioh_elcr, 0,
     VAR_1->sc_elcr & 0xff);
 FUNC_0(VAR_1->sc_st, VAR_1->sc_ioh_elcr, 1,
     (VAR_1->sc_elcr >> 8) & 0xff);
}
