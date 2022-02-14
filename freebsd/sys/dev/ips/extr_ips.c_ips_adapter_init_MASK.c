
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ max_concurrent_cmds; } ;
struct TYPE_16__ {int max_cmds; int ffdc_resetcount; size_t adapter_type; int timer; TYPE_4__* device_file; int dev; TYPE_1__ adapter_info; int ffdc_resettime; scalar_t__ (* ips_adapter_reinit ) (TYPE_2__*,int ) ;int sg_dmatag; int queue_mtx; int adapter_dmatag; int command_dmatag; } ;
typedef TYPE_2__ ips_softc_t ;
struct TYPE_17__ {TYPE_2__* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (int ,int,int ,int ,int ,int *,int *,scalar_t__,int,scalar_t__,int ,int *,int *,int *) ;
 int * VAR_12 ;
 int FUNC_2 (int *,int,int ,TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_13 ;
 int FUNC_5 (TYPE_2__*) ;
 int * VAR_14 ;
 int VAR_15 ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int VAR_16 ;
 int FUNC_12 (TYPE_2__*) ;
 TYPE_4__* FUNC_13 (int *,int ,int ,int ,int,char*,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int,scalar_t__) ;
 scalar_t__ FUNC_16 (TYPE_2__*,int ) ;

int FUNC_17(ips_softc_t *VAR_17)
{
        int VAR_18;
        FUNC_0(1,VAR_17->dev, "initializing\n");

        if (FUNC_1( VAR_17->adapter_dmatag,
                    1,
                    0,
                    VAR_1,
                    VAR_0,
                    ((void*)0),
                    ((void*)0),
                    VAR_5 +
          VAR_8,
                    1,
                    VAR_5 +
          VAR_8,
                    0,
                    ((void*)0),
                    ((void*)0),
    &VAR_17->command_dmatag) != 0) {
                FUNC_4(VAR_17->dev, "can't alloc command dma tag\n");
  goto error;
        }
 if (FUNC_1( VAR_17->adapter_dmatag,
                    1,
                    0,
                    VAR_1,
                    VAR_0,
                    ((void*)0),
                    ((void*)0),
                    VAR_6,
                    VAR_7,
                    VAR_6,
                    0,
                    VAR_12,
                    &VAR_17->queue_mtx,
    &VAR_17->sg_dmatag) != 0) {
  FUNC_4(VAR_17->dev, "can't alloc SG dma tag\n");
  goto error;
 }


 VAR_17->max_cmds = 1;
 FUNC_7(VAR_17);

 if(VAR_17->ips_adapter_reinit(VAR_17, 0))
  goto error;


 FUNC_14(&VAR_17->ffdc_resettime);
 VAR_17->ffdc_resetcount = 1;
 if ((VAR_18 = FUNC_9(VAR_17)) != 0) {
  FUNC_4(VAR_17->dev, "failed to send ffdc reset to device (%d)\n", VAR_18);
  goto error;
 }
 if ((VAR_18 = FUNC_10(VAR_17)) != 0) {
  FUNC_4(VAR_17->dev, "failed to get adapter configuration data from device (%d)\n", VAR_18);
  goto error;
 }
 FUNC_12(VAR_17);
 if(VAR_17->adapter_type > 0 && VAR_17->adapter_type <= VAR_4){
  FUNC_4(VAR_17->dev, "adapter type: %s\n", VAR_14[VAR_17->adapter_type]);
 }
  if ((VAR_18 = FUNC_11(VAR_17)) != 0) {
  FUNC_4(VAR_17->dev, "failed to get drive configuration data from device (%d)\n", VAR_18);
  goto error;
 }

        FUNC_6(VAR_17);
 if(VAR_17->adapter_info.max_concurrent_cmds)
         VAR_17->max_cmds = FUNC_15(128, VAR_17->adapter_info.max_concurrent_cmds);
 else
  VAR_17->max_cmds = 32;
        if(FUNC_7(VAR_17)){
  FUNC_4(VAR_17->dev, "failed to initialize command buffers\n");
  goto error;
 }
        VAR_17->device_file = FUNC_13(&VAR_15, FUNC_3(VAR_17->dev), VAR_11, VAR_3,
                                        VAR_9 | VAR_10, "ips%d", FUNC_3(VAR_17->dev));
 VAR_17->device_file->si_drv1 = VAR_17;
 FUNC_8(VAR_17);
 FUNC_2(&VAR_17->timer, 10 * VAR_13, VAR_16, VAR_17);
        return 0;

error:
 FUNC_5(VAR_17);
 return VAR_2;
}
