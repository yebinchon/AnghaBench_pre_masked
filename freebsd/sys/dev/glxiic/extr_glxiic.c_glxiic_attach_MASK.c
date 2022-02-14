
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct glxiic_softc {int old_irq; int * irq_res; void* irq_rid; int * irq_handler; int * gpio_res; void* gpio_rid; int * smb_res; void* smb_rid; int * iicbus; int callout; int timeout; int mtx; int state; int dev; } ;
typedef int ich_func_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct glxiic_softc*) ;
 int FUNC_1 (struct glxiic_softc*) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_3 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct sysctl_ctx_list*,int ,int ,char*,int ,int *,int ,char*) ;
 int FUNC_5 (struct sysctl_oid*) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int * FUNC_6 (int ,int ,void**,int,int,int,int) ;
 void* FUNC_7 (int ,int ,void**,int) ;
 scalar_t__ VAR_14 ;
 int FUNC_8 (int ,int ,void*,int *) ;
 int FUNC_9 (int ,int *,int,int *,int ,struct glxiic_softc*,int **) ;
 int FUNC_10 (int ,int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *,int ) ;
 int FUNC_13 (int ,int ) ;
 int * FUNC_14 (int ,char*,int) ;
 int FUNC_15 (int ,int *) ;
 struct glxiic_softc* FUNC_16 (int ) ;
 struct sysctl_ctx_list* FUNC_17 (int ) ;
 struct sysctl_oid* FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ,char*,...) ;
 int FUNC_21 (struct glxiic_softc*) ;
 int FUNC_22 (struct glxiic_softc*) ;
 int VAR_15 ;
 int FUNC_23 (struct glxiic_softc*) ;
 int FUNC_24 (struct glxiic_softc*,int ,int ) ;
 int FUNC_25 (int) ;
 int FUNC_26 (char*,int) ;
 int FUNC_27 (int ) ;
 scalar_t__ FUNC_28 (char*,int,char*,int*) ;

__attribute__((used)) static int
FUNC_29(device_t VAR_16)
{
 struct glxiic_softc *VAR_17;
 struct sysctl_ctx_list *VAR_18;
 struct sysctl_oid *VAR_19;
 int VAR_20, VAR_21, VAR_22;
 uint32_t VAR_23;

 VAR_17 = FUNC_16(VAR_16);
 VAR_17->dev = VAR_16;
 VAR_17->state = VAR_4;
 VAR_20 = 0;

 FUNC_1(VAR_17);
 FUNC_12(&VAR_17->callout, &VAR_17->mtx, 0);

 VAR_17->smb_rid = FUNC_3(0);
 VAR_17->smb_res = FUNC_7(VAR_16, VAR_11, &VAR_17->smb_rid,
     VAR_9);
 if (VAR_17->smb_res == ((void*)0)) {
  FUNC_20(VAR_16, "Could not allocate SMBus I/O port\n");
  VAR_20 = VAR_1;
  goto out;
 }

 VAR_17->gpio_rid = FUNC_3(1);
 VAR_17->gpio_res = FUNC_7(VAR_16, VAR_11,
     &VAR_17->gpio_rid, VAR_10 | VAR_9);
 if (VAR_17->gpio_res == ((void*)0)) {
  FUNC_20(VAR_16, "Could not allocate GPIO I/O port\n");
  VAR_20 = VAR_1;
  goto out;
 }


 FUNC_23(VAR_17);


 VAR_23 = FUNC_27(VAR_3);
 VAR_17->old_irq = FUNC_2(VAR_23);

 VAR_22 = FUNC_19(VAR_16);
 if (FUNC_28("glxiic", VAR_22, "irq", &VAR_21) == 0) {
  if (VAR_21 < 1 || VAR_21 > 15) {
   FUNC_20(VAR_16, "Bad value %d for glxiic.%d.irq\n",
       VAR_21, VAR_22);
   VAR_20 = VAR_1;
   goto out;
  }

  if (VAR_13)
   FUNC_20(VAR_16, "Using irq %d set by hint\n", VAR_21);
 } else if (VAR_17->old_irq != 0) {
  if (VAR_13)
   FUNC_20(VAR_16, "Using irq %d set by firmware\n",
       VAR_21);
  VAR_21 = VAR_17->old_irq;
 } else {
  FUNC_20(VAR_16, "No irq mapped by firmware");
  FUNC_26(" and no glxiic.%d.irq hint provided\n", VAR_22);
  VAR_20 = VAR_1;
  goto out;
 }


 FUNC_25(VAR_21);

 VAR_17->irq_rid = 0;
 VAR_17->irq_res = FUNC_6(VAR_16, VAR_12, &VAR_17->irq_rid,
     VAR_21, VAR_21, 1, VAR_10 | VAR_9);
 if (VAR_17->irq_res == ((void*)0)) {
  FUNC_20(VAR_16, "Could not allocate IRQ %d\n", VAR_21);
  VAR_20 = VAR_1;
  goto out;
 }

 VAR_20 = FUNC_9(VAR_16, VAR_17->irq_res, VAR_7 | VAR_6,
     ((void*)0), VAR_15, VAR_17, &(VAR_17->irq_handler));
 if (VAR_20 != 0) {
  FUNC_20(VAR_16, "Could not setup IRQ handler\n");
  VAR_20 = VAR_1;
  goto out;
 }

 if ((VAR_17->iicbus = FUNC_14(VAR_16, "iicbus", -1)) == ((void*)0)) {
  FUNC_20(VAR_16, "Could not allocate iicbus instance\n");
  VAR_20 = VAR_1;
  goto out;
 }

 VAR_18 = FUNC_17(VAR_16);
 VAR_19 = FUNC_18(VAR_16);

 VAR_17->timeout = VAR_2;
 FUNC_4(VAR_18, FUNC_5(VAR_19), VAR_8,
     "timeout", VAR_0, &VAR_17->timeout, 0,
     "activity timeout in ms");

 FUNC_22(VAR_17);
 FUNC_24(VAR_17, VAR_5, 0);


 FUNC_13((ich_func_t)VAR_14, VAR_16);
 VAR_20 = 0;

out:
 if (VAR_20 != 0) {
  FUNC_11(&VAR_17->callout);

  if (VAR_17->iicbus != ((void*)0))
   FUNC_15(VAR_16, VAR_17->iicbus);
  if (VAR_17->smb_res != ((void*)0)) {
   FUNC_23(VAR_17);
   FUNC_8(VAR_16, VAR_11, VAR_17->smb_rid,
       VAR_17->smb_res);
  }
  if (VAR_17->gpio_res != ((void*)0)) {
   FUNC_21(VAR_17);
   FUNC_8(VAR_16, VAR_11, VAR_17->gpio_rid,
       VAR_17->gpio_res);
  }
  if (VAR_17->irq_handler != ((void*)0))
   FUNC_10(VAR_16, VAR_17->irq_res, VAR_17->irq_handler);
  if (VAR_17->irq_res != ((void*)0))
   FUNC_8(VAR_16, VAR_12, VAR_17->irq_rid,
       VAR_17->irq_res);


  FUNC_25(VAR_17->old_irq);

  FUNC_0(VAR_17);
 }

 return (VAR_20);
}
