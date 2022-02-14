
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct gicv3_its_softc {int sc_irq_length; int sc_irq_base; TYPE_1__* sc_irqs; int sc_irq_alloc; int sc_its_dev_list; int ** sc_its_cols; int sc_cpus; int sc_its_cmd_lock; int sc_its_dev_lock; int * sc_its_res; } ;
typedef int device_t ;
struct TYPE_5__ {int iidr_mask; int iidr; int (* func ) (int ) ;int desc; } ;
struct TYPE_4__ {int gi_irq; int gi_isrc; } ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
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
 int VAR_12 ;
 int FUNC_3 (int *) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int * FUNC_4 (int ,int ,int*,int ) ;
 scalar_t__ FUNC_5 (int ,int*) ;
 int * VAR_15 ;
 char* FUNC_6 (int ) ;
 struct gicv3_its_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (struct gicv3_its_softc*,int ) ;
 int FUNC_11 (struct gicv3_its_softc*,int ,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct gicv3_its_softc*) ;
 int FUNC_14 (struct gicv3_its_softc*) ;
 int FUNC_15 (struct gicv3_its_softc*) ;
 int FUNC_16 (int ,struct gicv3_its_softc*) ;
 int FUNC_17 (int *,int ,int ,char*,char const*,int) ;
 int FUNC_18 (int ,struct gicv3_its_softc*) ;
 TYPE_2__* VAR_16 ;
 void* FUNC_19 (int,int ,int) ;
 int VAR_17 ;
 int FUNC_20 (int *,char*,int *,int ) ;
 int FUNC_21 (TYPE_2__*) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (char*,int ,int,int,int,int) ;

__attribute__((used)) static int
FUNC_24(device_t VAR_18)
{
 struct gicv3_its_softc *VAR_19;
 const char *VAR_20;
 uint32_t VAR_21;
 int VAR_22, VAR_23, VAR_24, VAR_25;

 VAR_19 = FUNC_7(VAR_18);

 VAR_19->sc_irq_length = FUNC_12(VAR_18);
 VAR_19->sc_irq_base = VAR_1;
 VAR_19->sc_irq_base += FUNC_8(VAR_18) * VAR_19->sc_irq_length;

 VAR_25 = 0;
 VAR_19->sc_its_res = FUNC_4(VAR_18, VAR_12, &VAR_25,
     VAR_11);
 if (VAR_19->sc_its_res == ((void*)0)) {
  FUNC_9(VAR_18, "Could not allocate memory\n");
  return (VAR_0);
 }

 VAR_21 = FUNC_10(VAR_19, VAR_4);
 for (VAR_24 = 0; VAR_24 < FUNC_21(VAR_16); VAR_24++) {
  if ((VAR_21 & VAR_16[VAR_24].iidr_mask) == VAR_16[VAR_24].iidr) {
   if (VAR_14) {
    FUNC_9(VAR_18, "Applying %s\n",
        VAR_16[VAR_24].desc);
   }
   VAR_16[VAR_24].func(VAR_18);
   break;
  }
 }


 VAR_23 = FUNC_16(VAR_18, VAR_19);
 if (VAR_23 != 0)
  return (VAR_23);


 FUNC_20(&VAR_19->sc_its_dev_lock, "ITS device lock", ((void*)0), VAR_6);


 FUNC_20(&VAR_19->sc_its_cmd_lock, "ITS cmd lock", ((void*)0), VAR_6);

 FUNC_2(&VAR_19->sc_cpus);
 if (FUNC_5(VAR_18, &VAR_22) == 0) {
  if (VAR_22 < VAR_5)
   FUNC_0(&VAR_15[VAR_22], &VAR_19->sc_cpus);
 } else {
  FUNC_0(&VAR_13, &VAR_19->sc_cpus);
 }


 FUNC_13(VAR_19);


 for (int VAR_26 = 0; VAR_26 <= VAR_17; VAR_26++)
  if (FUNC_1(VAR_26, &VAR_19->sc_cpus) != 0)
   VAR_19->sc_its_cols[VAR_26] = FUNC_19(
       sizeof(*VAR_19->sc_its_cols[0]), VAR_8,
       VAR_9 | VAR_10);
  else
   VAR_19->sc_its_cols[VAR_26] = ((void*)0);


 FUNC_11(VAR_19, VAR_2,
     FUNC_10(VAR_19, VAR_2) | VAR_3);


 FUNC_14(VAR_19);


 FUNC_15(VAR_19);


 FUNC_18(VAR_18, VAR_19);

 FUNC_3(&VAR_19->sc_its_dev_list);







 VAR_19->sc_irq_alloc = FUNC_23("GICv3 ITS IRQs", 0,
     FUNC_12(VAR_18), 1, 1, VAR_7 | VAR_9);

 VAR_19->sc_irqs = FUNC_19(sizeof(*VAR_19->sc_irqs) * VAR_19->sc_irq_length,
     VAR_8, VAR_9 | VAR_10);
 VAR_20 = FUNC_6(VAR_18);
 for (VAR_24 = 0; VAR_24 < VAR_19->sc_irq_length; VAR_24++) {
  VAR_19->sc_irqs[VAR_24].gi_irq = VAR_24;
  VAR_23 = FUNC_17(&VAR_19->sc_irqs[VAR_24].gi_isrc, VAR_18, 0,
      "%s,%u", VAR_20, VAR_24);
 }

 return (0);
}
