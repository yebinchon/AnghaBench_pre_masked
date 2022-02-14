
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int rm_descr; int rm_type; int rm_end; scalar_t__ rm_start; } ;
struct pcib_secbus {int sub_reg; int * res; void* sub; void* sec; TYPE_1__ rman; void* dev; } ;
struct vmd_softc {void* vmd_dev; int* vmd_regs_rid; int vmd_io_rid; int vmd_msix_count; int * vmd_child; TYPE_3__* vmd_irq; struct pcib_secbus vmd_bus; int ** vmd_regs_resource; int vmd_bhandle; int vmd_btag; int * vmd_io_resource; int vmd_irq_lock; int vmd_irq_task; int vmd_irq_tq; } ;
struct vmd_irq {int dummy; } ;
typedef void* device_t ;
typedef int buf ;
struct TYPE_6__ {int vmd_rid; int vmd_instance; int * vmd_res; int vmd_handle; int vmd_list; struct vmd_softc* vmd_sc; } ;


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
 int FUNC_0 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,struct vmd_softc*) ;
 int VAR_22 ;
 int FUNC_4 (void*,int ,int *,void*,void*) ;
 void* FUNC_5 (void*,int ,int*,int ) ;
 void* FUNC_6 (void*,int ,int*,int,int ) ;
 scalar_t__ FUNC_7 (void*,int *,int,int *,int ,TYPE_3__*,int *) ;
 int FUNC_8 (struct vmd_softc*,int) ;
 int * FUNC_9 (void*,int *,int) ;
 char* FUNC_10 (void*) ;
 void* FUNC_11 (void*) ;
 struct vmd_softc* FUNC_12 (void*) ;
 int FUNC_13 (void*,char*,...) ;
 int FUNC_14 (int *) ;
 TYPE_3__* FUNC_15 (int,int ,int) ;
 int FUNC_16 (int *,char*,int *,int ) ;
 scalar_t__ FUNC_17 (void*,int*) ;
 int FUNC_18 (void*) ;
 int FUNC_19 (void*) ;
 int FUNC_20 (void*,int,int) ;
 int FUNC_21 (void*,int ,int ,int) ;
 int FUNC_22 (void*) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 void* FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 void* FUNC_27 (int *) ;
 int FUNC_28 (TYPE_1__*) ;
 int FUNC_29 (TYPE_1__*,void*,void*) ;
 int FUNC_30 (char*,int,char*,char*) ;
 int FUNC_31 (char*,int ) ;
 int FUNC_32 (char*,int ,int ,int *) ;
 int FUNC_33 (int *,int,int ,char*,char*) ;
 int VAR_23 ;
 int FUNC_34 (struct vmd_softc*) ;
 int VAR_24 ;
 int VAR_25 ;
 void* FUNC_35 (void*,int,int,int,int,int) ;

__attribute__((used)) static int
FUNC_36(device_t VAR_26)
{
 struct vmd_softc *VAR_27;
 struct pcib_secbus *VAR_28;
 uint32_t VAR_29;
 int VAR_30, VAR_31, VAR_32;
 int VAR_33, VAR_34;
 static int VAR_35;
 static int VAR_36;
 static int VAR_37;
 int VAR_38 = 1;
 char VAR_39[64];

 VAR_27 = FUNC_12(VAR_26);
 FUNC_8(VAR_27, sizeof(*VAR_27));
 VAR_27->vmd_dev = VAR_26;
 VAR_35 = VAR_36 = VAR_37 = 0;

 FUNC_18(VAR_26);
 FUNC_16(&VAR_27->vmd_irq_lock, "VMD IRQ lock", ((void*)0), VAR_3);

 for (VAR_30 = 0, VAR_31 = 0; VAR_30 < VAR_22; VAR_30++, VAR_31++ ) {
  VAR_27->vmd_regs_rid[VAR_30] = FUNC_0(VAR_31);
  VAR_29 = FUNC_20(VAR_26, FUNC_0(0), 4);
  if (FUNC_1(VAR_29) && (VAR_29 & VAR_9) ==
      VAR_8)
   VAR_31++;
  if ((VAR_27->vmd_regs_resource[VAR_30] = FUNC_5(
      VAR_27->vmd_dev, VAR_21, &VAR_27->vmd_regs_rid[VAR_30],
      VAR_17)) == ((void*)0)) {
   FUNC_13(VAR_26, "Cannot allocate resources\n");
   goto fail;
  }
 }

 VAR_27->vmd_io_rid = VAR_10;
 VAR_27->vmd_io_resource = FUNC_5(
     FUNC_11(VAR_27->vmd_dev), VAR_19, &VAR_27->vmd_io_rid,
     VAR_17);
 if (VAR_27->vmd_io_resource == ((void*)0)) {
  FUNC_13(VAR_26, "Cannot allocate IO\n");
  goto fail;
 }


 VAR_27->vmd_btag = FUNC_24(VAR_27->vmd_regs_resource[0]);
 VAR_27->vmd_bhandle = FUNC_23(VAR_27->vmd_regs_resource[0]);

 FUNC_21(VAR_26, VAR_11,
     FUNC_22(FUNC_11(VAR_26)), 1);

 VAR_34 = VAR_12;
 VAR_28 = &VAR_27->vmd_bus;
 VAR_28->sub_reg = VAR_13;
 VAR_28->sec = FUNC_35(VAR_26, VAR_35, VAR_36, VAR_37, VAR_34, 1);
 VAR_28->sub = FUNC_35(VAR_26, VAR_35, VAR_36, VAR_37, VAR_28->sub_reg, 1);
 VAR_28->dev = VAR_26;
 VAR_28->rman.rm_start = 0;
 VAR_28->rman.rm_end = VAR_14;
 VAR_28->rman.rm_type = VAR_18;
 FUNC_30(VAR_39, sizeof(VAR_39), "%s bus numbers", FUNC_10(VAR_26));
 VAR_28->rman.rm_descr = FUNC_31(VAR_39, VAR_4);
 VAR_32 = FUNC_28(&VAR_28->rman);

 if (VAR_32) {
  FUNC_13(VAR_26, "Failed to initialize %s bus number rman\n",
      FUNC_10(VAR_26));
  goto fail;
 }





 VAR_33 = 0;
 VAR_28->res = FUNC_6(VAR_26, VAR_15, &VAR_33,
     VAR_38, 0);
 if (VAR_28->res == ((void*)0)) {




  VAR_28->res = FUNC_6(VAR_26, VAR_15, &VAR_33,
      1, 0);
 } else if (FUNC_26(VAR_28->res) < VAR_38) {




  (void)FUNC_4(VAR_26, VAR_15, VAR_28->res,
      FUNC_27(VAR_28->res), FUNC_27(VAR_28->res) +
      VAR_38 - 1);
 }





 if (VAR_28->res != ((void*)0)) {
  VAR_32 = FUNC_29(&VAR_28->rman, FUNC_27(VAR_28->res),
      FUNC_25(VAR_28->res));
  if (VAR_32) {
   FUNC_13(VAR_26, "Failed to add resource to rman\n");
   goto fail;
  }
  VAR_28->sec = FUNC_27(VAR_28->res);
  VAR_28->sub = FUNC_25(VAR_28->res);
 }

 VAR_27->vmd_msix_count = FUNC_19(VAR_26);
 if (FUNC_17(VAR_26, &VAR_27->vmd_msix_count) == 0) {
  VAR_27->vmd_irq = FUNC_15(sizeof(struct vmd_irq) *
      VAR_27->vmd_msix_count,
      VAR_4, VAR_6 | VAR_7);

  for (VAR_30 = 0; VAR_30 < VAR_27->vmd_msix_count; VAR_30++) {
   VAR_27->vmd_irq[VAR_30].vmd_rid = VAR_30 + 1;
   VAR_27->vmd_irq[VAR_30].vmd_sc = VAR_27;
   VAR_27->vmd_irq[VAR_30].vmd_instance = VAR_30;
   VAR_27->vmd_irq[VAR_30].vmd_res = FUNC_5(VAR_26,
       VAR_20, &VAR_27->vmd_irq[VAR_30].vmd_rid,
       VAR_17);
   if (VAR_27->vmd_irq[VAR_30].vmd_res == ((void*)0)) {
    FUNC_13(VAR_26,"Failed to alloc irq\n");
    goto fail;
   }

   FUNC_2(&VAR_27->vmd_irq[VAR_30].vmd_list);
   if (FUNC_7(VAR_26, VAR_27->vmd_irq[VAR_30].vmd_res,
       VAR_2 | VAR_1, ((void*)0), VAR_25,
       &VAR_27->vmd_irq[VAR_30], &VAR_27->vmd_irq[VAR_30].vmd_handle)) {
    FUNC_13(VAR_27->vmd_dev,
        "Cannot set up interrupt\n");
    VAR_27->vmd_irq[VAR_30].vmd_res = ((void*)0);
    goto fail;
   }
  }
 }

 VAR_27->vmd_child = FUNC_9(VAR_26, ((void*)0), -1);

 if (VAR_27->vmd_child == ((void*)0)) {
  FUNC_13(VAR_26, "Failed to attach child\n");
  goto fail;
 }

 VAR_32 = FUNC_14(VAR_27->vmd_child);
 if (VAR_32) {
  FUNC_13(VAR_26, "Failed to add probe child\n");
  goto fail;
 }


 return (0);

fail:
 FUNC_34(VAR_27);
 return (VAR_0);
}
