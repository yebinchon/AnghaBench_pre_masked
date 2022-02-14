
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpr_softc {int mpr_flags; int msi_msgs; struct mpr_queue* queues; int mpr_dev; } ;
struct mpr_queue {int irq_rid; int intrhand; int * irq; } ;
typedef int device_t ;


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
 int * FUNC_0 (int ,int ,int*,int ) ;
 int FUNC_1 (int ,int *,int,int *,void*,struct mpr_softc*,int *) ;
 int FUNC_2 (struct mpr_softc*,int,char*,...) ;
 void* VAR_10 ;
 void* VAR_11 ;

int
FUNC_3(struct mpr_softc *VAR_12)
{
 device_t VAR_13;
 struct mpr_queue *VAR_14;
 void *VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19;

 VAR_13 = VAR_12->mpr_dev;
 VAR_17 = VAR_1;

 if (VAR_12->mpr_flags & VAR_5) {
  VAR_19 = 0;
  VAR_15 = VAR_10;
 } else if (VAR_12->mpr_flags & VAR_6) {
  VAR_19 = 1;
  VAR_15 = VAR_11;
 } else {
  FUNC_2(VAR_12, VAR_4|VAR_7,
      "Unable to set up interrupts\n");
  return (VAR_0);
 }

 for (VAR_16 = 0; VAR_16 < VAR_12->msi_msgs; VAR_16++) {
  VAR_14 = &VAR_12->queues[VAR_16];
  VAR_18 = VAR_16 + VAR_19;
  VAR_14->irq_rid = VAR_18;
  VAR_14->irq = FUNC_0(VAR_13, VAR_9,
      &VAR_14->irq_rid, VAR_8);
  if (VAR_14->irq == ((void*)0)) {
   FUNC_2(VAR_12, VAR_4|VAR_7,
       "Cannot allocate interrupt RID %d\n", VAR_18);
   VAR_12->msi_msgs = VAR_16;
   break;
  }
  VAR_17 = FUNC_1(VAR_13, VAR_14->irq,
      VAR_3 | VAR_2, ((void*)0), VAR_15,
      VAR_12, &VAR_14->intrhand);
  if (VAR_17) {
   FUNC_2(VAR_12, VAR_4|VAR_7,
       "Cannot setup interrupt RID %d\n", VAR_18);
   VAR_12->msi_msgs = VAR_16;
   break;
  }
 }

        FUNC_2(VAR_12, VAR_7, "Set up %d interrupts\n", VAR_12->msi_msgs);
 return (VAR_17);
}
