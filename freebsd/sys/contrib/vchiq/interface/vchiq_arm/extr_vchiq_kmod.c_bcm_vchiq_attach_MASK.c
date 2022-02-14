
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bcm_vchiq_softc {int regs_offset; int lock; int * irq_res; int intr_hl; int * mem_res; int bsh; int bst; } ;
typedef int phandle_t ;
typedef int pcell_t ;
typedef int device_t ;
typedef int cell ;
struct TYPE_2__ {scalar_t__ ocd_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,char*,int *,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 struct bcm_vchiq_softc* VAR_10 ;
 void* FUNC_1 (int ,int ,int*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int,int *) ;
 scalar_t__ FUNC_5 (int ,int *,int,int *,int ,struct bcm_vchiq_softc*,int *) ;
 int VAR_11 ;
 struct bcm_vchiq_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int VAR_12 ;
 int FUNC_8 (int *,char*,int ,int ) ;
 int FUNC_9 (int ) ;
 TYPE_1__* FUNC_10 (int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 () ;
 int FUNC_14 () ;

__attribute__((used)) static int
FUNC_15(device_t VAR_13)
{
 struct bcm_vchiq_softc *VAR_14 = FUNC_6(VAR_13);
 phandle_t VAR_15;
 pcell_t VAR_16;
 int VAR_17 = 0;

 if (VAR_10 != ((void*)0))
  return (VAR_0);

 VAR_14->mem_res = FUNC_1(VAR_13, VAR_7, &VAR_17, VAR_5);
 if (VAR_14->mem_res == ((void*)0)) {
  FUNC_7(VAR_13, "could not allocate memory resource\n");
  return (VAR_1);
 }

 VAR_14->bst = FUNC_12(VAR_14->mem_res);
 VAR_14->bsh = FUNC_11(VAR_14->mem_res);

 VAR_17 = 0;
 VAR_14->irq_res = FUNC_1(VAR_13, VAR_6, &VAR_17, VAR_5);
 if (VAR_14->irq_res == ((void*)0)) {
  FUNC_7(VAR_13, "could not allocate interrupt resource\n");
  return (VAR_1);
 }

 if (FUNC_10(VAR_13, VAR_11)->ocd_data == VAR_8)
  VAR_14->regs_offset = -0x40;

 VAR_15 = FUNC_9(VAR_13);
 if ((FUNC_0(VAR_15, "cache-line-size", &VAR_16, sizeof(VAR_16))) > 0)
  VAR_12 = VAR_16;

 FUNC_13();


 if (FUNC_5(VAR_13, VAR_14->irq_res, VAR_3 | VAR_2,
   ((void*)0), VAR_9, VAR_14,
   &VAR_14->intr_hl) != 0) {
  FUNC_4(VAR_13, VAR_6, VAR_17,
   VAR_14->irq_res);
  FUNC_7(VAR_13, "Unable to setup the clock irq handler.\n");
  return (VAR_1);
 }

 FUNC_8(&VAR_14->lock, "vchiq", 0, VAR_4);
 VAR_10 = VAR_14;

 FUNC_14();

 FUNC_3(VAR_13);
 FUNC_2(VAR_13);

 return (0);
}
