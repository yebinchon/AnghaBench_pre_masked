
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfe_softc {scalar_t__ nfe_msix; int nfe_intrs; int nfe_irq_mask; } ;


 scalar_t__ FUNC_0 (struct nfe_softc*,int ) ;
 int FUNC_1 (struct nfe_softc*,int ,int ) ;

__attribute__((used)) static __inline void
FUNC_2(struct nfe_softc *VAR_0)
{

 if (VAR_0->nfe_msix != 0) {

  if (FUNC_0(VAR_0, VAR_0->nfe_irq_mask) == 0)
   FUNC_1(VAR_0, VAR_0->nfe_irq_mask, VAR_0->nfe_intrs);
 } else
  FUNC_1(VAR_0, VAR_0->nfe_irq_mask, VAR_0->nfe_intrs);
}
