
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int task_fn_t ;
struct vmbus_softc {scalar_t__ vmbus_version; int vmbus_dev; int vmbus_subchtq; int vmbus_devtq; int * vmbus_tx_evtflags; TYPE_3__* vmbus_mnf2; } ;
struct vmbus_message {scalar_t__ msg_data; } ;
struct vmbus_channel {size_t ch_id; int ch_montrig_mask; unsigned long ch_evtflag_mask; int ch_attach_task; int ch_mgmt_tq; int ch_refs; int ch_detach_task; int * ch_evtflag; int * ch_montrig; int ch_txflags; TYPE_1__* ch_monprm; int ch_flags; int ch_guid_inst; int ch_guid_type; int ch_subidx; } ;
struct vmbus_chanmsg_choffer {size_t chm_chanid; int chm_flags1; int chm_montrig; int chm_connid; int chm_chinst; int chm_chtype; int chm_subidx; } ;
struct TYPE_6__ {TYPE_2__* mnf_trigs; } ;
struct TYPE_5__ {int mt_pending; } ;
struct TYPE_4__ {int mp_connid; } ;


 int FUNC_0 (int *,int ,int *,struct vmbus_channel*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct vmbus_channel*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,char*,unsigned long,...) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct vmbus_channel*) ;
 struct vmbus_channel* FUNC_7 (struct vmbus_softc*) ;
 int FUNC_8 (struct vmbus_channel*) ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;

__attribute__((used)) static void
FUNC_9(struct vmbus_softc *VAR_13,
    const struct vmbus_message *VAR_14)
{
 const struct vmbus_chanmsg_choffer *VAR_15;
 struct vmbus_channel *VAR_16;
 task_fn_t *VAR_17, *VAR_18;
 int VAR_19;

 VAR_15 = (const struct vmbus_chanmsg_choffer *)VAR_14->msg_data;

 VAR_16 = FUNC_7(VAR_13);
 if (VAR_16 == ((void*)0)) {
  FUNC_3(VAR_13->vmbus_dev, "allocate chan%u failed\n",
      VAR_15->chm_chanid);
  return;
 }

 VAR_16->ch_id = VAR_15->chm_chanid;
 VAR_16->ch_subidx = VAR_15->chm_subidx;
 VAR_16->ch_guid_type = VAR_15->chm_chtype;
 VAR_16->ch_guid_inst = VAR_15->chm_chinst;


 VAR_16->ch_flags |= VAR_0;

 VAR_16->ch_monprm->mp_connid = VAR_3;
 if (VAR_13->vmbus_version != VAR_8)
  VAR_16->ch_monprm->mp_connid = VAR_15->chm_connid;

 if (VAR_15->chm_flags1 & VAR_2) {
  int VAR_20;




  VAR_16->ch_txflags |= VAR_1;

  VAR_20 = VAR_15->chm_montrig / VAR_7;
  if (VAR_20 >= VAR_6)
   FUNC_4("invalid monitor trigger %u", VAR_15->chm_montrig);
  VAR_16->ch_montrig =
      &VAR_13->vmbus_mnf2->mnf_trigs[VAR_20].mt_pending;

  VAR_16->ch_montrig_mask =
      1 << (VAR_15->chm_montrig % VAR_7);
 }




 VAR_16->ch_evtflag =
     &VAR_13->vmbus_tx_evtflags[VAR_16->ch_id >> VAR_5];
 VAR_16->ch_evtflag_mask = 1UL << (VAR_16->ch_id & VAR_4);




 if (FUNC_1(VAR_16)) {
  VAR_16->ch_mgmt_tq = VAR_13->vmbus_devtq;
  VAR_18 = VAR_9;
  VAR_17 = VAR_10;
 } else {
  VAR_16->ch_mgmt_tq = VAR_13->vmbus_subchtq;
  VAR_18 = VAR_11;
  VAR_17 = VAR_12;
 }
 FUNC_0(&VAR_16->ch_attach_task, 0, VAR_18, VAR_16);
 FUNC_0(&VAR_16->ch_detach_task, 0, VAR_17, VAR_16);

 VAR_19 = FUNC_6(VAR_16);
 if (VAR_19) {
  FUNC_3(VAR_13->vmbus_dev, "add chan%u failed: %d\n",
      VAR_16->ch_id, VAR_19);
  FUNC_2(&VAR_16->ch_refs, 1);
  FUNC_8(VAR_16);
  return;
 }
 FUNC_5(VAR_16->ch_mgmt_tq, &VAR_16->ch_attach_task);
}
