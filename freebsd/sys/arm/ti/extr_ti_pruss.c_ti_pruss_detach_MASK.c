
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ti_pruss_softc {scalar_t__ sc_pdev; scalar_t__ sc_mem_res; int sc_mtx; TYPE_2__* sc_irq_devs; scalar_t__* sc_irq_res; scalar_t__* sc_intr; } ;
typedef int device_t ;
struct TYPE_3__ {int si_note; } ;
struct TYPE_4__ {int sc_mtx; TYPE_1__ sc_selinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 struct ti_pruss_softc* FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (struct ti_pruss_softc*) ;
 int FUNC_13 (struct ti_pruss_softc*,int,int) ;

__attribute__((used)) static int
FUNC_14(device_t VAR_3)
{
 struct ti_pruss_softc *VAR_4 = FUNC_3(VAR_3);

 FUNC_12(VAR_4);

 for (int VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  FUNC_13( VAR_4, VAR_5, 0 );

  if (VAR_4->sc_intr[VAR_5])
   FUNC_1(VAR_3, VAR_4->sc_irq_res[VAR_5], VAR_4->sc_intr[VAR_5]);
  if (VAR_4->sc_irq_res[VAR_5])
   FUNC_0(VAR_3, VAR_0,
       FUNC_11(VAR_4->sc_irq_res[VAR_5]),
       VAR_4->sc_irq_res[VAR_5]);
  FUNC_4(&VAR_4->sc_irq_devs[VAR_5].sc_selinfo.si_note, 0);
  FUNC_8(&VAR_4->sc_irq_devs[VAR_5].sc_mtx);
  if (!FUNC_6(&VAR_4->sc_irq_devs[VAR_5].sc_selinfo.si_note))
   FUNC_10("IRQ %d KQueue not empty!\n", VAR_5 );
  FUNC_9(&VAR_4->sc_irq_devs[VAR_5].sc_mtx);
  FUNC_5(&VAR_4->sc_irq_devs[VAR_5].sc_selinfo.si_note);
  FUNC_7(&VAR_4->sc_irq_devs[VAR_5].sc_mtx);
 }

 FUNC_7(&VAR_4->sc_mtx);
 if (VAR_4->sc_mem_res)
  FUNC_0(VAR_3, VAR_1, FUNC_11(VAR_4->sc_mem_res),
      VAR_4->sc_mem_res);
 if (VAR_4->sc_pdev)
  FUNC_2(VAR_4->sc_pdev);

 return (0);
}
