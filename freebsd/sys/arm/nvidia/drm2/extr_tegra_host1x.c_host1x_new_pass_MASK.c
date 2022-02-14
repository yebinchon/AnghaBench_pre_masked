
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct host1x_softc* ich_arg; int ich_func; } ;
struct host1x_softc {int attach_done; TYPE_1__ irq_hook; int syncpt_irq_h; int * syncpt_irq_res; int gen_irq_h; int * gen_irq_res; int dev; int reset; int clk; } ;
typedef scalar_t__ phandle_t ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_2 (int ,int ,int*,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int,int *,int ,struct host1x_softc*,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ,int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ) ;
 struct host1x_softc* FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,...) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,char*,int *) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ,scalar_t__,int ,int *,int,int *) ;
 int FUNC_15 (int ,int ) ;

__attribute__((used)) static void
FUNC_16(device_t VAR_10)
{
 struct host1x_softc *VAR_11;
 int VAR_12, VAR_13;
 phandle_t VAR_14;





 VAR_11 = FUNC_9(VAR_10);
 if (VAR_11->attach_done || VAR_6 < VAR_0) {
  FUNC_3(VAR_10);
  return;
 }

 VAR_11->attach_done = 1;
 VAR_14 = FUNC_13(VAR_10);


 VAR_13 = 0;
 VAR_11->syncpt_irq_res = FUNC_2(VAR_10, VAR_5, &VAR_13,
     VAR_4);
 if (VAR_11->syncpt_irq_res == ((void*)0)) {
  FUNC_10(VAR_10, "Cannot allocate interrupt.\n");
  VAR_12 = VAR_1;
  goto fail;
 }
 VAR_13 = 1;
 VAR_11->gen_irq_res = FUNC_2(VAR_10, VAR_5, &VAR_13,
     VAR_4);
 if (VAR_11->gen_irq_res == ((void*)0)) {
  FUNC_10(VAR_10, "Cannot allocate interrupt.\n");
  VAR_12 = VAR_1;
  goto fail;
 }


 VAR_12 = FUNC_12(VAR_11->dev, 0, "host1x", &VAR_11->reset);
 if (VAR_12 != 0) {
  FUNC_10(VAR_10, "Cannot get fuse reset\n");
  goto fail;
 }
 VAR_12 = FUNC_6(VAR_11->dev, 0, 0, &VAR_11->clk);
 if (VAR_12 != 0) {
  FUNC_10(VAR_10, "Cannot get i2c clock: %d\n", VAR_12);
  goto fail;
 }

 VAR_12 = FUNC_5(VAR_11->clk);
 if (VAR_12 != 0) {
  FUNC_10(VAR_10, "Cannot enable clock: %d\n", VAR_12);
  goto fail;
 }
 VAR_12 = FUNC_11(VAR_11->reset);
 if (VAR_12 != 0) {
  FUNC_10(VAR_11->dev, "Cannot clear reset\n");
  goto fail;
 }


 VAR_12 = FUNC_4(VAR_10, VAR_11->gen_irq_res,
     VAR_3 | VAR_2, ((void*)0), VAR_7,
     VAR_11, &VAR_11->gen_irq_h);
 if (VAR_12) {
  FUNC_10(VAR_10, "Cannot setup gen interrupt.\n");
  goto fail;
 }

 VAR_12 = FUNC_4(VAR_10, VAR_11->syncpt_irq_res,
     VAR_3 | VAR_2, ((void*)0), VAR_9,
     VAR_11, &VAR_11->syncpt_irq_h);
 if (VAR_12) {
  FUNC_10(VAR_10, "Cannot setup syncpt interrupt.\n");
  goto fail;
 }

 FUNC_15(VAR_10, 0);
 for (VAR_14 = FUNC_0(VAR_14); VAR_14 > 0; VAR_14 = FUNC_1(VAR_14))
     FUNC_14(VAR_10, VAR_14, 0, ((void*)0), -1, ((void*)0));

 VAR_11->irq_hook.ich_func = VAR_8;
 VAR_11->irq_hook.ich_arg = VAR_11;
 FUNC_7(&VAR_11->irq_hook);
 FUNC_3(VAR_10);
 return;

fail:
 FUNC_8(VAR_10);
 return;
}
