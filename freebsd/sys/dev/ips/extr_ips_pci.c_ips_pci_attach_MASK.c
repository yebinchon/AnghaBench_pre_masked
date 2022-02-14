
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* ich_arg; int ich_func; } ;
struct TYPE_5__ {TYPE_3__ ips_ich; int queue; int adapter_dmatag; int irqcookie; void* ips_adapter_intr; void* irqres; void* irqrid; int * iores; void* rid; int iotype; void* ips_poll_cmd; void* ips_issue_cmd; void* ips_adapter_reinit; int queue_mtx; int timer; int cmd_sema; int dev; } ;
typedef TYPE_1__ ips_softc_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int,char*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int ,int ,void**,int) ;
 scalar_t__ FUNC_5 (int ,int,int ,int ,int ,int *,int *,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,void*,int,int *,void*,TYPE_1__*,int *) ;
 int FUNC_8 (int *,int *,int ) ;
 scalar_t__ FUNC_9 (TYPE_3__*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,char*) ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 int VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int *,char*,int *,int ) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (int *,int ,char*) ;

__attribute__((used)) static int FUNC_18(device_t VAR_25)
{
        ips_softc_t *VAR_26;

        FUNC_0(1, VAR_25, "in attach.\n");
        VAR_26 = (ips_softc_t *)FUNC_10(VAR_25);
        VAR_26->dev = VAR_25;
 FUNC_13(&VAR_26->queue_mtx, "IPS bioqueue lock", ((void*)0), VAR_10);
 FUNC_17(&VAR_26->cmd_sema, 0, "IPS Command Semaphore");
 FUNC_8(&VAR_26->timer, &VAR_26->queue_mtx, 0);

        if(FUNC_15(VAR_25) == VAR_9){
  VAR_26->ips_adapter_reinit = VAR_24;
                VAR_26->ips_adapter_intr = VAR_22;
  VAR_26->ips_issue_cmd = VAR_21;
  VAR_26->ips_poll_cmd = VAR_23;
        } else if(FUNC_15(VAR_25) == VAR_6){
  VAR_26->ips_adapter_reinit = VAR_18;
                VAR_26->ips_adapter_intr = VAR_16;
  VAR_26->ips_issue_cmd = VAR_20;
  VAR_26->ips_poll_cmd = VAR_17;
 } else if (FUNC_15(VAR_25) == VAR_7){
  VAR_26->ips_adapter_reinit = VAR_24;
  VAR_26->ips_adapter_intr = VAR_22;
  VAR_26->ips_issue_cmd = VAR_21;
  VAR_26->ips_poll_cmd = VAR_23;
 } else
                goto error;

 FUNC_14(VAR_25);

        VAR_26->iores = ((void*)0);
 FUNC_2(10, "trying MEMIO\n");
 if(FUNC_15(VAR_25) == VAR_6)
  VAR_26->rid = FUNC_1(1);
 else
  VAR_26->rid = FUNC_1(0);
 VAR_26->iotype = VAR_15;
 VAR_26->iores = FUNC_4(VAR_25, VAR_26->iotype, &VAR_26->rid,
     VAR_11);
        if(!VAR_26->iores){
                FUNC_2(10, "trying PORTIO\n");
                VAR_26->rid = FUNC_1(0);
                VAR_26->iotype = VAR_13;
                VAR_26->iores = FUNC_4(VAR_25, VAR_26->iotype,
   &VAR_26->rid, VAR_11);
        }
        if(VAR_26->iores == ((void*)0)){
                FUNC_11(VAR_25, "resource allocation failed\n");
                return (VAR_3);
        }

        VAR_26->irqrid = 0;
        if(!(VAR_26->irqres = FUNC_4(VAR_25, VAR_14,
  &VAR_26->irqrid, VAR_12 | VAR_11))){
                FUNC_11(VAR_25, "irq allocation failed\n");
                goto error;
        }
 if(FUNC_7(VAR_25, VAR_26->irqres, VAR_5|VAR_4, ((void*)0),
     VAR_26->ips_adapter_intr, VAR_26, &VAR_26->irqcookie)){
                FUNC_11(VAR_25, "irq setup failed\n");
                goto error;
        }
 if (FUNC_5( FUNC_6(VAR_25),
                    1,
                    0,
                    VAR_1,
                    VAR_0,
                    ((void*)0),
                    ((void*)0),
                    VAR_2,
                    VAR_8,
                    VAR_2,
                    0,
                    ((void*)0),
                    ((void*)0),
    &VAR_26->adapter_dmatag) != 0) {
                FUNC_11(VAR_25, "can't alloc dma tag\n");
                goto error;
        }
 VAR_26->ips_ich.ich_func = VAR_19;
 VAR_26->ips_ich.ich_arg = VAR_26;
 FUNC_3(&VAR_26->queue);
 if (FUNC_9(&VAR_26->ips_ich) != 0) {
  FUNC_16("IPS can't establish configuration hook\n");
  goto error;
 }
        return 0;
error:
 FUNC_12(VAR_26);
        return (VAR_3);
}
