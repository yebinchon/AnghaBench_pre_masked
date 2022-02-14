
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_softc {int vmbus_dev; } ;
struct vmbus_channel {int ch_refs; int ch_poll_timeo; int ch_poll_task; int ch_txbr; int ch_rxbr; int ch_subchans; int ch_orphan_lock; int ch_subchan_lock; struct vmbus_softc* ch_vmbus; int * ch_monprm; int ch_monprm_dma; } ;
struct hyperv_mon_param {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,struct vmbus_channel*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct vmbus_channel*,int ) ;
 int * FUNC_6 (int ,int ,int ,int,int *,int) ;
 struct vmbus_channel* FUNC_7 (int,int ,int) ;
 int FUNC_8 (int *,char*,int *,int ) ;
 int FUNC_9 (int *,char*) ;
 int VAR_7 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static struct vmbus_channel *
FUNC_12(struct vmbus_softc *VAR_8)
{
 struct vmbus_channel *VAR_9;

 VAR_9 = FUNC_7(sizeof(*VAR_9), VAR_4, VAR_5 | VAR_6);

 VAR_9->ch_monprm = FUNC_6(FUNC_2(VAR_8->vmbus_dev),
     VAR_2, 0, sizeof(struct hyperv_mon_param),
     &VAR_9->ch_monprm_dma, VAR_0 | VAR_1);
 if (VAR_9->ch_monprm == ((void*)0)) {
  FUNC_4(VAR_8->vmbus_dev, "monprm alloc failed\n");
  FUNC_5(VAR_9, VAR_4);
  return ((void*)0);
 }

 VAR_9->ch_refs = 1;
 VAR_9->ch_vmbus = VAR_8;
 FUNC_8(&VAR_9->ch_subchan_lock, "vmbus subchan", ((void*)0), VAR_3);
 FUNC_9(&VAR_9->ch_orphan_lock, "vmbus chorphan");
 FUNC_0(&VAR_9->ch_subchans);
 FUNC_10(&VAR_9->ch_rxbr);
 FUNC_11(&VAR_9->ch_txbr);

 FUNC_1(&VAR_9->ch_poll_task, 0, VAR_7, VAR_9);
 FUNC_3(&VAR_9->ch_poll_timeo, 1);

 return VAR_9;
}
