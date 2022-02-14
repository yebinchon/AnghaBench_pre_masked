
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* rm_descr; void* rm_type; } ;
struct apb_softc {int sc_misc_ih; int * sc_misc_irq; TYPE_1__ apb_irq_rman; TYPE_1__ apb_mem_rman; int apb_dev; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (scalar_t__,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_1 (struct apb_softc*) ;
 scalar_t__ VAR_20 ;
 int * FUNC_2 (int ,int ,int*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int *,int ,int ,int *,struct apb_softc*,int *) ;
 int FUNC_7 (char*,int ,int *,struct apb_softc*,int,int ,int *) ;
 struct apb_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;
 int * FUNC_10 (int ,intptr_t) ;
 int FUNC_11 (char*) ;
 intptr_t FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (TYPE_1__*) ;
 scalar_t__ FUNC_14 (TYPE_1__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_15(device_t VAR_21)
{
 struct apb_softc *VAR_22 = FUNC_8(VAR_21);




 int VAR_23 = 0;


 VAR_22->apb_dev = VAR_21;

 VAR_22->apb_mem_rman.rm_type = VAR_17;
 VAR_22->apb_mem_rman.rm_descr = "APB memory window";

 if(VAR_20 >= VAR_12) {
  if (FUNC_13(&VAR_22->apb_mem_rman) != 0 ||
      FUNC_14(&VAR_22->apb_mem_rman,
   VAR_7,
   VAR_7 + VAR_8 - 1) != 0)
   FUNC_11("apb_attach: failed to set up memory rman");
 } else {
  if (FUNC_13(&VAR_22->apb_mem_rman) != 0 ||
      FUNC_14(&VAR_22->apb_mem_rman,
   VAR_2,
   VAR_2 + VAR_3 - 1) != 0)
   FUNC_11("apb_attach: failed to set up memory rman");
 }

 VAR_22->apb_irq_rman.rm_type = VAR_17;
 VAR_22->apb_irq_rman.rm_descr = "APB IRQ";

 if (FUNC_13(&VAR_22->apb_irq_rman) != 0 ||
     FUNC_14(&VAR_22->apb_irq_rman,
   VAR_0, VAR_1) != 0)
  FUNC_11("apb_attach: failed to set up IRQ rman");


 if ((VAR_22->sc_misc_irq = FUNC_2(VAR_21, VAR_18, &VAR_23,
     VAR_16 | VAR_15)) == ((void*)0)) {
  FUNC_9(VAR_21, "unable to allocate IRQ resource\n");
  return (VAR_13);
 }

 if ((FUNC_6(VAR_21, VAR_22->sc_misc_irq, VAR_14,
     VAR_19, ((void*)0), VAR_22, &VAR_22->sc_misc_ih))) {
  FUNC_9(VAR_21,
      "WARNING: unable to register interrupt handler\n");
  return (VAR_13);
 }
 if(VAR_20 >= VAR_12) {
  FUNC_0(VAR_10
   + VAR_11, 0);
 } else {
  FUNC_0(VAR_5
   + VAR_6, 0);
 }

 FUNC_5(VAR_21);
 FUNC_3(VAR_21);
 FUNC_4(VAR_21);

 return (0);
}
