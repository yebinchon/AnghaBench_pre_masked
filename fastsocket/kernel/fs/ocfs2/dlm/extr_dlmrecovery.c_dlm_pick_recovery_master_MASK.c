
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dlm_lockstatus {int status; } ;
struct dlm_lock_resource {int dummy; } ;
struct TYPE_2__ {int dead_node; int new_master; } ;
struct dlm_ctxt {int name; int node_num; TYPE_1__ reco; int dlm_reco_thread_wq; int spinlock; } ;
typedef int lksb ;
typedef enum dlm_status { ____Placeholder_dlm_status } dlm_status ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct dlm_lock_resource*) ;
 struct dlm_lock_resource* FUNC_4 (struct dlm_ctxt*,int ,int ) ;
 int FUNC_5 (struct dlm_lock_resource*) ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_6 (struct dlm_ctxt*) ;
 int VAR_16 ;
 int FUNC_7 (struct dlm_ctxt*,int ) ;
 int FUNC_8 (struct dlm_ctxt*,int ) ;
 int FUNC_9 (struct dlm_ctxt*,int ,struct dlm_lockstatus*,int,int ,int ,int ,struct dlm_ctxt*,int ) ;
 int FUNC_10 (struct dlm_ctxt*,struct dlm_lockstatus*,int ,int ,struct dlm_ctxt*) ;
 int VAR_17 ;
 int FUNC_11 (struct dlm_lockstatus*,int ,int) ;
 int FUNC_12 (int ,char*,...) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_17(struct dlm_ctxt *VAR_18)
{
 enum dlm_status VAR_19;
 struct dlm_lockstatus VAR_20;
 int VAR_21 = -VAR_7;

 FUNC_12(0, "starting recovery of %s at %lu, dead=%u, this=%u\n",
      VAR_18->name, VAR_17, VAR_18->reco.dead_node, VAR_18->node_num);
again:
 FUNC_11(&VAR_20, 0, sizeof(VAR_20));

 VAR_19 = FUNC_9(VAR_18, VAR_9, &VAR_20, VAR_10|VAR_11,
        VAR_4, VAR_5,
        VAR_14, VAR_18, VAR_15);

 FUNC_12(0, "%s: dlmlock($RECOVERY) returned %d, lksb=%d\n",
      VAR_18->name, VAR_19, VAR_20.status);

 if (VAR_19 == VAR_1) {
  FUNC_12(0, "dlm=%s dlmlock says I got it (this=%u)\n",
       VAR_18->name, VAR_18->node_num);



  if (FUNC_6(VAR_18)) {
   FUNC_12(0, "%s: got reco EX lock, but %u will "
        "do the recovery\n", VAR_18->name,
        VAR_18->reco.new_master);
   VAR_21 = -VAR_6;
  } else {
   VAR_21 = 0;


   FUNC_14(&VAR_18->spinlock);
   if (VAR_18->reco.dead_node == VAR_13) {
    VAR_21 = -VAR_7;
    FUNC_12(0, "%s: got reco EX lock, but "
         "node got recovered already\n", VAR_18->name);
    if (VAR_18->reco.new_master != VAR_13) {
     FUNC_12(VAR_12, "%s: new master is %u "
          "but no dead node!\n",
          VAR_18->name, VAR_18->reco.new_master);
     FUNC_0();
    }
   }
   FUNC_15(&VAR_18->spinlock);
  }



  if (!VAR_21) {
   FUNC_12(0, "%s: dead=%u, this=%u, sending "
        "begin_reco now\n", VAR_18->name,
        VAR_18->reco.dead_node, VAR_18->node_num);
   VAR_21 = FUNC_7(VAR_18,
          VAR_18->reco.dead_node);

   FUNC_1(VAR_21);


   FUNC_14(&VAR_18->spinlock);
   FUNC_8(VAR_18, VAR_18->node_num);
   FUNC_15(&VAR_18->spinlock);
  }



  VAR_19 = FUNC_10(VAR_18, &VAR_20, 0, VAR_16, VAR_18);
  if (VAR_19 == VAR_0) {
   FUNC_12(0, "got DLM_DENIED, trying LKM_CANCEL\n");
   VAR_19 = FUNC_10(VAR_18, &VAR_20, VAR_8, VAR_16, VAR_18);
  }
  if (VAR_19 != VAR_1) {






   FUNC_12(VAR_12, "dlmunlock returned %d\n", VAR_19);
  }
 } else if (VAR_19 == VAR_2) {
  FUNC_12(0, "dlm=%s dlmlock says another node got it (this=%u)\n",
       VAR_18->name, VAR_18->node_num);



  FUNC_16(VAR_18->dlm_reco_thread_wq,
      FUNC_6(VAR_18),
      FUNC_13(1000));
  if (!FUNC_6(VAR_18)) {
   FUNC_12(0, "%s: reco master taking awhile\n",
        VAR_18->name);
   goto again;
  }

  FUNC_12(0, "%s: reco master %u is ready to recover %u\n",
       VAR_18->name, VAR_18->reco.new_master, VAR_18->reco.dead_node);
  VAR_21 = -VAR_6;
 } else if (VAR_19 == VAR_3) {
  FUNC_12(0, "dlm=%s dlmlock says master node died (this=%u)\n",
       VAR_18->name, VAR_18->node_num);
  goto again;
 } else {
  struct dlm_lock_resource *VAR_22;


  FUNC_12(VAR_12, "%s: got %s from dlmlock($RECOVERY), "
       "lksb.status=%s\n", VAR_18->name, FUNC_2(VAR_19),
       FUNC_2(VAR_20.status));
  VAR_22 = FUNC_4(VAR_18, VAR_4,
      VAR_5);
  if (VAR_22) {
   FUNC_5(VAR_22);
   FUNC_3(VAR_22);
  } else {
   FUNC_12(VAR_12, "recovery lock not found\n");
  }
  FUNC_0();
 }

 return VAR_21;
}
