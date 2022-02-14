
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timespec {int tv_sec; scalar_t__ tv_nsec; } ;
struct ti_pruss_softc {struct ti_pruss_irqsc* sc_irq_devs; } ;
struct TYPE_6__ {int si_note; } ;
struct TYPE_4__ {size_t idx; int cnt; } ;
struct TYPE_5__ {TYPE_1__ ctl; scalar_t__* ts; } ;
struct ti_pruss_irqsc {int channel; int event; TYPE_3__ sc_selinfo; TYPE_2__ tstamps; } ;
struct ti_pruss_irq_arg {int irq; struct ti_pruss_softc* sc; } ;


 int FUNC_0 (int *,int const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct timespec*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (struct ti_pruss_softc*,int ) ;
 int FUNC_5 (struct ti_pruss_softc*,int ,int const) ;
 int FUNC_6 (struct ti_pruss_irqsc*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_6)
{
 int VAR_7;
 struct ti_pruss_irq_arg *VAR_8 = VAR_6;
 struct ti_pruss_softc *VAR_9 = VAR_8->sc;




 const int VAR_10 = VAR_8->irq + VAR_4;
 const int VAR_11 = (1 << VAR_10);
 const int VAR_12 = VAR_9->sc_irq_devs[VAR_10].channel;
 const int VAR_13 = VAR_9->sc_irq_devs[VAR_12].event;

 VAR_7 = FUNC_4(VAR_9, VAR_2);
 if (!(VAR_7 & VAR_11))
  return;

 FUNC_5(VAR_9, VAR_0, VAR_10);
 FUNC_5(VAR_9, VAR_3, VAR_13);
 FUNC_5(VAR_9, VAR_1, VAR_10);

 struct ti_pruss_irqsc* VAR_14 = &VAR_9->sc_irq_devs[VAR_12];
 size_t VAR_15 = VAR_14->tstamps.ctl.idx;

 struct timespec VAR_16;
 FUNC_2(&VAR_16);
 VAR_14->tstamps.ts[VAR_15] = VAR_16.tv_sec * 1000000000 + VAR_16.tv_nsec;

 if (++VAR_15 == VAR_5)
  VAR_15 = 0;
 FUNC_1(&VAR_14->tstamps.ctl.cnt, 1);

 VAR_14->tstamps.ctl.idx = VAR_15;

 FUNC_0(&VAR_14->sc_selinfo.si_note, VAR_10);
 FUNC_6(VAR_14);
 FUNC_3(&VAR_14->sc_selinfo);
}
