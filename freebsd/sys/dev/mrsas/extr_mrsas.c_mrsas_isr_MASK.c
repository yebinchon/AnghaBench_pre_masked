
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrsas_softc {int reset_flags; int msix_vectors; scalar_t__ mask_interrupts; } ;
struct mrsas_irq_context {int MSIxIndex; struct mrsas_softc* sc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mrsas_softc*) ;
 scalar_t__ FUNC_1 (struct mrsas_softc*,int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (char*) ;

void
FUNC_4(void *VAR_2)
{
 struct mrsas_irq_context *VAR_3 = (struct mrsas_irq_context *)VAR_2;
 struct mrsas_softc *VAR_4 = VAR_3->sc;
 int VAR_5 = 0;

 if (VAR_4->mask_interrupts)
  return;

 if (!VAR_4->msix_vectors) {
  VAR_5 = FUNC_0(VAR_4);
  if (!VAR_5)
   return;
 }

 if (FUNC_2(VAR_0, &VAR_4->reset_flags)) {
  FUNC_3(" Entered into ISR when OCR is going active. \n");
  FUNC_0(VAR_4);
  return;
 }

 if (FUNC_1(VAR_4, VAR_3->MSIxIndex) != VAR_1)
  FUNC_0(VAR_4);

 return;
}
