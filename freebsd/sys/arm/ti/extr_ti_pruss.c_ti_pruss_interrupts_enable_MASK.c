
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct ti_pruss_softc {TYPE_4__* sc_irq_devs; TYPE_1__* sc_pdev; } ;
typedef size_t int8_t ;
struct TYPE_11__ {TYPE_4__* si_drv1; } ;
struct TYPE_8__ {scalar_t__ idx; } ;
struct TYPE_9__ {TYPE_2__ ctl; } ;
struct TYPE_10__ {int channel; int event; int enable; TYPE_3__ tstamps; TYPE_5__* sc_pdev; } ;
struct TYPE_7__ {int si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 TYPE_5__* FUNC_3 (int *,int ,int ,int ,int,char*,int ,size_t) ;
 int VAR_7 ;
 int FUNC_4 (struct ti_pruss_softc*,int ,int) ;

__attribute__((used)) static __inline int
FUNC_5(struct ti_pruss_softc *VAR_8, int8_t VAR_9, bool VAR_10)
{
 if (VAR_10 && ((VAR_8->sc_irq_devs[VAR_9].channel == -1) ||
     (VAR_8->sc_irq_devs[VAR_9].event== -1)))
 {
  FUNC_2( VAR_8->sc_pdev->si_drv1,
   "Interrupt chain not fully configured, not possible to enable\n" );
  return (VAR_0);
 }

 VAR_8->sc_irq_devs[VAR_9].enable = VAR_10;

 if (VAR_8->sc_irq_devs[VAR_9].sc_pdev) {
  FUNC_0(VAR_8->sc_irq_devs[VAR_9].sc_pdev);
  VAR_8->sc_irq_devs[VAR_9].sc_pdev = ((void*)0);
 }

 if (VAR_10) {
  VAR_8->sc_irq_devs[VAR_9].sc_pdev = FUNC_3(&VAR_7, 0, VAR_6, VAR_1,
      0600, "pruss%d.irq%d", FUNC_1(VAR_8->sc_pdev->si_drv1), VAR_9);
  VAR_8->sc_irq_devs[VAR_9].sc_pdev->si_drv1 = &VAR_8->sc_irq_devs[VAR_9];

  VAR_8->sc_irq_devs[VAR_9].tstamps.ctl.idx = 0;
 }

 uint32_t VAR_11 = VAR_10 ? VAR_5 : VAR_4;
 FUNC_4(VAR_8, VAR_11, VAR_8->sc_irq_devs[VAR_9].channel);

 VAR_11 = VAR_10 ? VAR_3 : VAR_2;
 FUNC_4(VAR_8, VAR_11, VAR_8->sc_irq_devs[VAR_9].event );

 return (0);
}
