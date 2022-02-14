
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {int data_buffer; } ;
typedef TYPE_2__ ips_user_request ;
struct TYPE_18__ {int queue_mtx; int adapter_dmatag; } ;
typedef TYPE_3__ ips_softc_t ;
struct TYPE_16__ {int value; } ;
struct TYPE_19__ {int dmatag; int dmamap; int data_buffer; int datasize; TYPE_1__ status; } ;
typedef TYPE_4__ ips_ioctl_t ;
struct TYPE_20__ {TYPE_4__* arg; } ;
typedef TYPE_5__ ips_command_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int *,int ,int *) ;
 int FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_7 (TYPE_3__*,TYPE_5__**,int ) ;
 int FUNC_8 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (TYPE_4__*,int *,int ,char*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(ips_softc_t *VAR_6, ips_ioctl_t *VAR_7, ips_user_request *VAR_8)
{
 ips_command_t *VAR_9;
 int VAR_10 = VAR_2;

 if (FUNC_1( VAR_6->adapter_dmatag,
                   1,
                   0,
                   VAR_1,
                   VAR_0,
                   ((void*)0),
                   ((void*)0),
                   VAR_7->datasize,
                   1,
                   VAR_7->datasize,
                   0,
                   ((void*)0),
                   ((void*)0),
   &VAR_7->dmatag) != 0) {
  return VAR_4;
        }
 if(FUNC_3(VAR_7->dmatag, &VAR_7->data_buffer,
    0, &VAR_7->dmamap)){
  VAR_10 = VAR_4;
  goto exit;
 }
 if(FUNC_5(VAR_8->data_buffer,VAR_7->data_buffer,
     VAR_7->datasize))
  goto exit;
 VAR_7->status.value = 0xffffffff;
 FUNC_11(&VAR_6->queue_mtx);
 if((VAR_10 = FUNC_7(VAR_6, &VAR_9, 0)) > 0){
  VAR_10 = VAR_4;
  FUNC_12(&VAR_6->queue_mtx);
  goto exit;
 }
 VAR_9->arg = VAR_7;
 FUNC_9(VAR_9);
 while( VAR_7->status.value == 0xffffffff)
  FUNC_10(VAR_7, &VAR_6->queue_mtx, 0, "ips", VAR_5/10);
 if(FUNC_0(VAR_7))
  VAR_10 = VAR_3;
 else
  VAR_10 = 0;
 FUNC_12(&VAR_6->queue_mtx);
 if(FUNC_6(VAR_7->data_buffer, VAR_8->data_buffer,
     VAR_7->datasize))
  VAR_10 = VAR_2;
 FUNC_11(&VAR_6->queue_mtx);
 FUNC_8(VAR_6, VAR_9);
 FUNC_12(&VAR_6->queue_mtx);

exit: FUNC_4(VAR_7->dmatag, VAR_7->data_buffer,
   VAR_7->dmamap);
 FUNC_2(VAR_7->dmatag);
 return VAR_10;
}
