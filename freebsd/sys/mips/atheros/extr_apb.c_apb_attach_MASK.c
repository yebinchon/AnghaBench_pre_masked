
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* rm_descr; void* rm_type; } ;
struct apb_softc {int * sc_intr_counter; int sc_misc_ih; int * sc_misc_irq; TYPE_1__ apb_irq_rman; TYPE_1__ apb_mem_rman; } ;
typedef int device_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (void*) ;
 int * FUNC_1 (int ,int ,int*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int *,int ,int ,int *,struct apb_softc*,int *) ;
 struct apb_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (TYPE_1__*) ;
 scalar_t__ FUNC_12 (TYPE_1__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_12)
{
 struct apb_softc *VAR_13 = FUNC_6(VAR_12);
 int VAR_14 = 0;

 FUNC_8(VAR_12, "APB Bus bridge");

 VAR_13->apb_mem_rman.rm_type = VAR_9;
 VAR_13->apb_mem_rman.rm_descr = "APB memory window";

 if (FUNC_11(&VAR_13->apb_mem_rman) != 0 ||
     FUNC_12(&VAR_13->apb_mem_rman,
   VAR_3,
   VAR_3 + VAR_4 - 1) != 0)
  FUNC_10("apb_attach: failed to set up memory rman");

 VAR_13->apb_irq_rman.rm_type = VAR_9;
 VAR_13->apb_irq_rman.rm_descr = "APB IRQ";

 if (FUNC_11(&VAR_13->apb_irq_rman) != 0 ||
     FUNC_12(&VAR_13->apb_irq_rman,
   VAR_1, VAR_2) != 0)
  FUNC_10("apb_attach: failed to set up IRQ rman");

 if ((VAR_13->sc_misc_irq = FUNC_1(VAR_12, VAR_10, &VAR_14,
     VAR_8 | VAR_7)) == ((void*)0)) {
  FUNC_7(VAR_12, "unable to allocate IRQ resource\n");
  return (VAR_5);
 }

 if ((FUNC_5(VAR_12, VAR_13->sc_misc_irq, VAR_6,
     VAR_11, ((void*)0), VAR_13, &VAR_13->sc_misc_ih))) {
  FUNC_7(VAR_12,
      "WARNING: unable to register interrupt handler\n");
  return (VAR_5);
 }

 FUNC_4(VAR_12);
 FUNC_2(VAR_12);
 FUNC_3(VAR_12);




 FUNC_0((void*)VAR_0);
 VAR_13->sc_intr_counter[VAR_0] = FUNC_9("apb irq5: pmc");

 return (0);
}
