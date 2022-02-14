
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u_int ;
struct intr_pic {int dummy; } ;
struct bcm_mips_softc {size_t num_cpuirqs; size_t timer_irq; TYPE_1__* cpuirqs; TYPE_1__* isrcs; int dev; } ;
typedef size_t rman_res_t ;
typedef int driver_filter_t ;
typedef int device_t ;
struct TYPE_5__ {int irq_rid; int isrc; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct bcm_mips_softc*) ;
 int FUNC_1 (struct bcm_mips_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (struct bcm_mips_softc*,TYPE_1__*) ;
 int FUNC_3 (struct bcm_mips_softc*,TYPE_1__*,size_t,size_t,int ) ;
 int FUNC_4 (struct bcm_mips_softc*,TYPE_1__*) ;
 uintptr_t FUNC_5 (struct bcm_mips_softc*) ;
 int FUNC_6 (struct bcm_mips_softc*) ;
 size_t FUNC_7 (int ) ;
 struct bcm_mips_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int ) ;
 struct intr_pic* FUNC_12 (int ,uintptr_t) ;
 size_t FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (char*,size_t) ;

int
FUNC_15(device_t VAR_4, u_int VAR_5, u_int VAR_6,
    driver_filter_t VAR_7)
{
 struct bcm_mips_softc *VAR_8;
 struct intr_pic *VAR_9;
 uintptr_t VAR_10;
 u_int VAR_11;
 rman_res_t VAR_12;
 int VAR_13;

 VAR_8 = FUNC_8(VAR_4);
 VAR_8->dev = VAR_4;
 VAR_8->num_cpuirqs = VAR_5;
 VAR_8->timer_irq = VAR_6;


 if (VAR_8->num_cpuirqs > FUNC_13(VAR_8->cpuirqs)) {
  FUNC_9(VAR_4, "%u nirqs exceeds maximum supported %zu",
      VAR_8->num_cpuirqs, FUNC_13(VAR_8->cpuirqs));
  return (VAR_2);
 }

 VAR_9 = ((void*)0);
 VAR_10 = FUNC_5(VAR_8);

 FUNC_1(VAR_8);


 if ((VAR_13 = FUNC_6(VAR_8))) {
  FUNC_0(VAR_8);
  return (VAR_13);
 }


 VAR_11 = FUNC_7(VAR_4);
 VAR_12 = 0;
 for (u_int VAR_14 = 0; VAR_14 < VAR_8->num_cpuirqs; VAR_14++) {

  if (VAR_11 >= VAR_3) {
   FUNC_9(VAR_4, "exhausted IRQ resource IDs\n");
   VAR_13 = VAR_1;
   goto failed;
  }

  if (VAR_12 == VAR_8->timer_irq) {

   VAR_13 = FUNC_4(VAR_8,
       &VAR_8->cpuirqs[VAR_14]);
  } else {

   VAR_13 = FUNC_3(VAR_8, &VAR_8->cpuirqs[VAR_14],
       VAR_11, VAR_12, VAR_7);
  }

  if (VAR_13)
   goto failed;


  VAR_11++;
  VAR_12++;
 }


 if (VAR_8->num_cpuirqs <= VAR_0)
  FUNC_14("missing shared interrupt %d\n", VAR_0);

 if (VAR_8->cpuirqs[VAR_0].irq_rid == -1)
  FUNC_14("shared interrupt %d unavailable", VAR_0);


 if ((VAR_9 = FUNC_12(VAR_4, VAR_10)) == ((void*)0)) {
  FUNC_9(VAR_4, "error registering PIC\n");
  VAR_13 = VAR_2;
  goto failed;
 }

 return (0);

failed:

 if (VAR_9 != ((void*)0))
  FUNC_11(VAR_4, 0);


 for (size_t VAR_15 = 0; VAR_15 < FUNC_13(VAR_8->isrcs); VAR_15++)
  FUNC_10(&VAR_8->isrcs[VAR_15].isrc);


 for (u_int VAR_16 = 0; VAR_16 < VAR_8->num_cpuirqs; VAR_16++)
  FUNC_2(VAR_8, &VAR_8->cpuirqs[VAR_16]);

 FUNC_0(VAR_8);
 return (VAR_13);
}
