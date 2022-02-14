
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_mbox_softc {int property_chan_lock; scalar_t__* have_message; scalar_t__* msg; int lock; int * irq_res; int intr_hl; int * mem_res; int bsh; int bst; } ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* FUNC_0 (int ,int ,int*,int ) ;
 int FUNC_1 (int ,int ,int,int *) ;
 scalar_t__ FUNC_2 (int ,int *,int,int *,int ,struct bcm_mbox_softc*,int *) ;
 struct bcm_mbox_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct bcm_mbox_softc*,int ) ;
 int FUNC_6 (struct bcm_mbox_softc*,int ,int ) ;
 int FUNC_7 (int *,char*,int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,char*) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_14)
{
 struct bcm_mbox_softc *VAR_15 = FUNC_3(VAR_14);
 int VAR_16;
 int VAR_17 = 0;

 VAR_15->mem_res = FUNC_0(VAR_14, VAR_12, &VAR_17, VAR_9);
 if (VAR_15->mem_res == ((void*)0)) {
  FUNC_4(VAR_14, "could not allocate memory resource\n");
  return (VAR_2);
 }

 VAR_15->bst = FUNC_9(VAR_15->mem_res);
 VAR_15->bsh = FUNC_8(VAR_15->mem_res);

 VAR_17 = 0;
 VAR_15->irq_res = FUNC_0(VAR_14, VAR_11, &VAR_17, VAR_9);
 if (VAR_15->irq_res == ((void*)0)) {
  FUNC_4(VAR_14, "could not allocate interrupt resource\n");
  return (VAR_2);
 }


 if (FUNC_2(VAR_14, VAR_15->irq_res, VAR_3 | VAR_4,
     ((void*)0), VAR_13, VAR_15, &VAR_15->intr_hl) != 0) {
  FUNC_1(VAR_14, VAR_11, VAR_17, VAR_15->irq_res);
  FUNC_4(VAR_14, "Unable to setup the clock irq handler.\n");
  return (VAR_2);
 }

 FUNC_7(&VAR_15->lock, "vcio mbox", ((void*)0), VAR_5);
 for (VAR_16 = 0; VAR_16 < VAR_0; VAR_16++) {
  VAR_15->msg[VAR_16] = 0;
  VAR_15->have_message[VAR_16] = 0;
 }

 FUNC_10(&VAR_15->property_chan_lock, "mboxprop");


 while ((FUNC_5(VAR_15, VAR_8) & VAR_10) == 0)
  (void)FUNC_5(VAR_15, VAR_7);

 FUNC_6(VAR_15, VAR_6, VAR_1);

 return (0);
}
