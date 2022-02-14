
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iop_softc {int ism; TYPE_1__* reg; int handle; int r_irq; int dev; TYPE_2__* lct; int * iop_delayed_attach; } ;
struct i2o_get_param_reply {scalar_t__ result; } ;
struct i2o_device_identity {char* vendor; char* product; char* description; char* revision; } ;
struct TYPE_4__ {scalar_t__ entry_size; int class; int sub_class; int local_tid; int user_tid; int parent_tid; } ;
struct TYPE_3__ {int oqueue_intr_mask; } ;




 scalar_t__ VAR_0 ;
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
 int FUNC_0 (int ,int ,int,int *,int ,struct iop_softc*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct i2o_get_param_reply*,int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct iop_softc*) ;
 struct i2o_get_param_reply* FUNC_5 (struct iop_softc*,int,int ,int ) ;
 int VAR_11 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct iop_softc*,TYPE_2__*) ;

void
FUNC_8(void *VAR_12)
{
    struct iop_softc *VAR_13;
    int VAR_14;

    VAR_13 = VAR_12;
    if (VAR_13->iop_delayed_attach) {
 FUNC_1(VAR_13->iop_delayed_attach);
 FUNC_3(VAR_13->iop_delayed_attach, VAR_9);
 VAR_13->iop_delayed_attach = ((void*)0);
    }

    if (!FUNC_4(VAR_13)) {
 FUNC_6("pstiop: get LCT failed\n");
 return;
    }


    for (VAR_14 = 0; VAR_13->lct[VAR_14].entry_size == VAR_0; VAR_14++) {
 if (VAR_13->lct[VAR_14].user_tid != VAR_4 &&
     VAR_13->lct[VAR_14].user_tid != VAR_3)
     continue;

 switch (VAR_13->lct[VAR_14].class) {
 case 129:
     if (VAR_13->lct[VAR_14].sub_class == VAR_2)
  VAR_13->ism = VAR_13->lct[VAR_14].local_tid;
     break;

 case 128:
     FUNC_7(VAR_13, &VAR_13->lct[VAR_14]);
     break;
 }
    }


    FUNC_0(VAR_13->dev, VAR_13->r_irq, VAR_8|VAR_6|VAR_7,
     ((void*)0), VAR_11, VAR_13, &VAR_13->handle);
    VAR_13->reg->oqueue_intr_mask = 0x0;
}
