
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ irq; int isrc; int tri; int pol; } ;
struct aw_nmi_softc {int * res; int intrcookie; TYPE_1__ intr; int dev; struct aw_nmi_reg_cfg* cfg; } ;
struct aw_nmi_reg_cfg {int pending_reg; int enable_reg; } ;
typedef scalar_t__ phandle_t ;
typedef int device_t ;
struct TYPE_4__ {scalar_t__ ocd_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct aw_nmi_softc*,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ,int *) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int ,int *,struct aw_nmi_softc*,int *) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_8 ;
 int FUNC_6 (int ) ;
 struct aw_nmi_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 scalar_t__ FUNC_9 (int *,int ,int ,char*,int ,scalar_t__) ;
 int * FUNC_10 (int ,intptr_t) ;
 int FUNC_11 (int ) ;
 TYPE_2__* FUNC_12 (int ,int ) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_9)
{
 struct aw_nmi_softc *VAR_10;
 phandle_t VAR_11;

 VAR_10 = FUNC_7(VAR_9);
 VAR_10->dev = VAR_9;
 VAR_10->cfg = (struct aw_nmi_reg_cfg *)
     FUNC_12(VAR_9, VAR_8)->ocd_data;

 if (FUNC_2(VAR_9, VAR_7, VAR_10->res) != 0) {
  FUNC_8(VAR_9, "can't allocate device resources\n");
  return (VAR_0);
 }
 if ((FUNC_4(VAR_9, VAR_10->res[1], VAR_3,
     VAR_6, ((void*)0), VAR_10, &VAR_10->intrcookie))) {
  FUNC_8(VAR_9, "unable to register interrupt handler\n");
  FUNC_3(VAR_9, VAR_7, VAR_10->res);
  return (VAR_0);
 }


 FUNC_1(VAR_10, VAR_10->cfg->enable_reg, !VAR_5);
 FUNC_1(VAR_10, VAR_10->cfg->pending_reg, VAR_4);

 VAR_11 = FUNC_0(FUNC_11(VAR_9));

 VAR_10->intr.irq = 0;
 VAR_10->intr.pol = VAR_1;
 VAR_10->intr.tri = VAR_2;
 if (FUNC_9(&VAR_10->intr.isrc, VAR_10->dev, 0, "%s,%u",
       FUNC_6(VAR_10->dev), VAR_10->intr.irq) != 0)
  goto error;

 if (FUNC_10(VAR_9, (intptr_t)VAR_11) == ((void*)0)) {
  FUNC_8(VAR_9, "could not register pic\n");
  goto error;
 }
 return (0);

error:
 FUNC_5(VAR_9, VAR_10->res[1], VAR_10->intrcookie);
 FUNC_3(VAR_9, VAR_7, VAR_10->res);
 return (VAR_0);
}
