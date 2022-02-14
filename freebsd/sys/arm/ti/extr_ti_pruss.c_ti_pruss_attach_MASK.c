
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ti_pruss_softc {int sc_glob_irqen; TYPE_6__* sc_pdev; TYPE_4__* sc_irq_devs; int * sc_intr; int * sc_irq_res; int * sc_mem_res; int sc_bh; int sc_bt; int sc_mtx; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
typedef int name ;
typedef int device_t ;
struct TYPE_13__ {int si_drv1; } ;
struct TYPE_12__ {int irq; struct ti_pruss_softc* sc; } ;
struct TYPE_10__ {int si_note; } ;
struct TYPE_8__ {scalar_t__ idx; } ;
struct TYPE_9__ {TYPE_1__ ctl; } ;
struct TYPE_11__ {int event; int channel; int sc_mtx; TYPE_3__ sc_selinfo; TYPE_2__ tstamps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 struct sysctl_oid* FUNC_0 (struct sysctl_ctx_list*,int ,int ,char*,int ,int ,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,int ,int ,char*,int,struct ti_pruss_softc*,int,int ,char*,char*) ;
 int FUNC_2 (struct sysctl_oid*) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int * FUNC_3 (int ,int ,int*,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;
 scalar_t__ FUNC_5 (int ,int ,int,int *,int ,TYPE_5__*,int *) ;
 struct ti_pruss_softc* FUNC_6 (int ) ;
 struct sysctl_ctx_list* FUNC_7 (int ) ;
 struct sysctl_oid* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int *,int *) ;
 TYPE_6__* FUNC_12 (int *,int ,int ,int ,int,char*,int ) ;
 int FUNC_13 (int *,char*,int *,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (char*,int,char*,int) ;
 scalar_t__ FUNC_17 (int ) ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_18 (int ) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_19 (struct ti_pruss_softc*) ;
 int VAR_28 ;
 TYPE_5__* VAR_29 ;
 int VAR_30 ;
 scalar_t__ FUNC_20 (struct ti_pruss_softc*,int ) ;
 int FUNC_21 (struct ti_pruss_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_22(device_t VAR_31)
{
 struct ti_pruss_softc *VAR_32;
 int VAR_33, VAR_34;

 if (FUNC_17(VAR_13) != 0) {
  FUNC_10(VAR_31, "could not enable PRUSS clock\n");
  return (VAR_5);
 }
 VAR_32 = FUNC_6(VAR_31);
 VAR_33 = 0;
 FUNC_13(&VAR_32->sc_mtx, "TI PRUSS", ((void*)0), VAR_9);
 VAR_32->sc_mem_res = FUNC_3(VAR_31, VAR_19, &VAR_33,
     VAR_18);
 if (VAR_32->sc_mem_res == ((void*)0)) {
  FUNC_10(VAR_31, "could not allocate memory resource\n");
  return (VAR_5);
 }

 struct sysctl_ctx_list *VAR_35 = FUNC_7(VAR_31);
 if (!VAR_35)
  return (VAR_4);

 struct sysctl_oid *VAR_36;
 VAR_36 = FUNC_8( VAR_31 );
 if (!VAR_36)
  return (VAR_4);

 VAR_32->sc_glob_irqen = 0;
 struct sysctl_oid *VAR_37 = FUNC_0(VAR_35, FUNC_2(VAR_36),
     VAR_10, "irq", VAR_0, 0,
     "PRUSS Host Interrupts");
 FUNC_1(VAR_35, FUNC_2(VAR_36), VAR_10,
     "global_interrupt_enable", VAR_1 | VAR_3,
     VAR_32, 0, VAR_26,
     "CU", "Global interrupt enable");

 VAR_32->sc_bt = FUNC_15(VAR_32->sc_mem_res);
 VAR_32->sc_bh = FUNC_14(VAR_32->sc_mem_res);
 if (FUNC_4(VAR_31, VAR_30, VAR_32->sc_irq_res) != 0) {
  FUNC_10(VAR_31, "could not allocate interrupt resource\n");
  FUNC_18(VAR_31);
  return (VAR_5);
 }

 FUNC_19(VAR_32);

 for (VAR_34 = 0; VAR_34 < VAR_21; VAR_34++) {
  char VAR_38[8];
  FUNC_16(VAR_38, sizeof(VAR_38), "%d", VAR_34);

  struct sysctl_oid *VAR_39 = FUNC_0(VAR_35, FUNC_2(VAR_37),
      VAR_10, VAR_38, VAR_0, 0,
      "PRUSS Interrupts");
  FUNC_1(VAR_35, FUNC_2(VAR_39), VAR_10,
      "channel", VAR_1 | VAR_2, VAR_32, VAR_34, VAR_24,
      "A", "Channel attached to this irq");
  FUNC_1(VAR_35, FUNC_2(VAR_39), VAR_10,
      "event", VAR_1 | VAR_2, VAR_32, VAR_34, VAR_25,
      "A", "Event attached to this irq");
  FUNC_1(VAR_35, FUNC_2(VAR_39), VAR_10,
      "enable", VAR_1 | VAR_3, VAR_32, VAR_34, VAR_27,
      "CU", "Enable/Disable interrupt");

  VAR_32->sc_irq_devs[VAR_34].event = -1;
  VAR_32->sc_irq_devs[VAR_34].channel = -1;
  VAR_32->sc_irq_devs[VAR_34].tstamps.ctl.idx = 0;

  if (VAR_34 < VAR_20) {
   VAR_29[VAR_34].irq = VAR_34;
   VAR_29[VAR_34].sc = VAR_32;
   if (FUNC_5(VAR_31, VAR_32->sc_irq_res[VAR_34],
       VAR_7 | VAR_8,
       ((void*)0), VAR_28, &VAR_29[VAR_34],
       &VAR_32->sc_intr[VAR_34]) != 0) {
    FUNC_10(VAR_31,
        "unable to setup the interrupt handler\n");
    FUNC_18(VAR_31);

    return (VAR_5);
   }
   FUNC_13(&VAR_32->sc_irq_devs[VAR_34].sc_mtx, "TI PRUSS IRQ", ((void*)0), VAR_9);
   FUNC_11(&VAR_32->sc_irq_devs[VAR_34].sc_selinfo.si_note, &VAR_32->sc_irq_devs[VAR_34].sc_mtx);
  }
 }

 if (FUNC_20(VAR_32, VAR_11) == VAR_12)
  FUNC_10(VAR_31, "AM33xx PRU-ICSS\n");

 VAR_32->sc_pdev = FUNC_12(&VAR_23, 0, VAR_22, VAR_6,
     0600, "pruss%d", FUNC_9(VAR_31));
 VAR_32->sc_pdev->si_drv1 = VAR_31;


 FUNC_21(VAR_32, VAR_14, 0xFFFFFFFF);
 FUNC_21(VAR_32, VAR_15, 0xFFFFFFFF);


 FUNC_21(VAR_32, VAR_16, 0);
 FUNC_21(VAR_32, VAR_17, 0);

 return (0);
}
