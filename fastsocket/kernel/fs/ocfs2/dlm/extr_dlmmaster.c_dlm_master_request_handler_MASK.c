
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct o2net_msg {scalar_t__ buf; } ;
struct dlm_master_request {char* name; unsigned int namelen; int node_idx; } ;
struct dlm_master_list_entry {scalar_t__ type; scalar_t__ master; int spinlock; int maybe_map; int new_master; } ;
struct TYPE_2__ {int name; int len; } ;
struct dlm_lock_resource {int state; scalar_t__ owner; TYPE_1__ lockname; int spinlock; } ;
struct dlm_ctxt {scalar_t__ node_num; int spinlock; int master_lock; int name; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct dlm_ctxt*,struct dlm_master_list_entry*) ;
 struct dlm_lock_resource* FUNC_2 (struct dlm_ctxt*,char*,unsigned int,unsigned int) ;
 int FUNC_3 (struct dlm_ctxt*,struct dlm_lock_resource*,int ,int ,int ) ;
 int FUNC_4 (struct dlm_ctxt*) ;
 int FUNC_5 (struct dlm_ctxt*,struct dlm_master_list_entry**,char*,unsigned int) ;
 int FUNC_6 (struct dlm_ctxt*) ;
 int FUNC_7 (struct dlm_master_list_entry*,scalar_t__,struct dlm_ctxt*,int *,char*,unsigned int) ;
 unsigned int FUNC_8 (char*,unsigned int) ;
 int FUNC_9 (struct dlm_lock_resource*) ;
 int FUNC_10 (int ,struct dlm_lock_resource*) ;
 int VAR_16 ;
 int FUNC_11 (struct dlm_ctxt*) ;
 int FUNC_12 (struct dlm_master_list_entry*) ;
 scalar_t__ FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,struct dlm_master_list_entry*) ;
 int FUNC_15 (int ,char*,...) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;

int FUNC_20(struct o2net_msg *VAR_17, u32 VAR_18, void *VAR_19,
          void **VAR_20)
{
 u8 VAR_21 = VAR_8;
 struct dlm_ctxt *VAR_22 = VAR_19;
 struct dlm_lock_resource *VAR_23 = ((void*)0);
 struct dlm_master_request *VAR_24 = (struct dlm_master_request *) VAR_17->buf;
 struct dlm_master_list_entry *VAR_25 = ((void*)0), *VAR_26 = ((void*)0);
 char *VAR_27;
 unsigned int VAR_28, VAR_29;
 int VAR_30, VAR_31;
 int VAR_32;
 int VAR_33 = 0;

 if (!FUNC_6(VAR_22))
  return VAR_9;

 if (!FUNC_4(VAR_22)) {
  VAR_21 = VAR_9;
  goto send_response;
 }

 VAR_27 = VAR_24->name;
 VAR_28 = VAR_24->namelen;
 VAR_29 = FUNC_8(VAR_27, VAR_28);

 if (VAR_28 > VAR_2) {
  VAR_21 = VAR_1;
  goto send_response;
 }

way_up_top:
 FUNC_18(&VAR_22->spinlock);
 VAR_23 = FUNC_2(VAR_22, VAR_27, VAR_28, VAR_29);
 if (VAR_23) {
  FUNC_19(&VAR_22->spinlock);


  FUNC_18(&VAR_23->spinlock);
  if (VAR_23->state & (VAR_6|
      VAR_4)) {
   FUNC_19(&VAR_23->spinlock);
   FUNC_15(0, "returning DLM_MASTER_RESP_ERROR since res is "
        "being recovered/migrated\n");
   VAR_21 = VAR_7;
   if (VAR_25)
    FUNC_14(VAR_16, VAR_25);
   goto send_response;
  }

  if (VAR_23->owner == VAR_22->node_num) {
   FUNC_15(0, "%s:%.*s: setting bit %u in refmap\n",
        VAR_22->name, VAR_28, VAR_27, VAR_24->node_idx);
   FUNC_10(VAR_24->node_idx, VAR_23);
   FUNC_19(&VAR_23->spinlock);
   VAR_21 = VAR_10;
   if (VAR_25)
    FUNC_14(VAR_16, VAR_25);







   VAR_33 = 1;
   goto send_response;
  } else if (VAR_23->owner != VAR_5) {
   FUNC_19(&VAR_23->spinlock);

   VAR_21 = VAR_9;
   if (VAR_25)
    FUNC_14(VAR_16, VAR_25);
   goto send_response;
  }




  if (!(VAR_23->state & VAR_3)) {
   FUNC_15(VAR_15, "lock with no owner should be "
        "in-progress!\n");
   FUNC_0();
  }


  FUNC_18(&VAR_22->master_lock);
  VAR_30 = FUNC_5(VAR_22, &VAR_26, VAR_27, VAR_28);
  if (!VAR_30) {
   FUNC_15(VAR_15, "no mle found for this lock!\n");
   FUNC_0();
  }
  VAR_32 = 1;
  FUNC_18(&VAR_26->spinlock);
  if (VAR_26->type == VAR_11) {


   VAR_21 = VAR_9;
  } else if (VAR_26->type == VAR_12) {
   FUNC_15(0, "node %u is master, but trying to migrate to "
        "node %u.\n", VAR_26->master, VAR_26->new_master);
   if (VAR_26->master == VAR_22->node_num) {
    FUNC_15(VAR_15, "no owner on lockres, but this "
         "node is trying to migrate it to %u?!\n",
         VAR_26->new_master);
    FUNC_0();
   } else {

    VAR_21 = VAR_9;
   }
  } else if (VAR_26->master != VAR_5) {
   VAR_32 = 0;
   if (VAR_26->master == VAR_22->node_num) {
    VAR_21 = VAR_10;



    VAR_33 = 1;
    FUNC_10(VAR_24->node_idx, VAR_23);
    FUNC_15(0, "%s:%.*s: setting bit %u in refmap\n",
         VAR_22->name, VAR_28, VAR_27,
         VAR_24->node_idx);
   } else
    VAR_21 = VAR_9;
  } else {


   VAR_21 = VAR_8;
  }
  if (VAR_32)
   FUNC_17(VAR_24->node_idx, VAR_26->maybe_map);
  FUNC_19(&VAR_26->spinlock);

  FUNC_19(&VAR_22->master_lock);
  FUNC_19(&VAR_23->spinlock);


  FUNC_12(VAR_26);
  if (VAR_25)
   FUNC_14(VAR_16, VAR_25);
  goto send_response;
 }







 FUNC_18(&VAR_22->master_lock);
 VAR_30 = FUNC_5(VAR_22, &VAR_26, VAR_27, VAR_28);
 if (!VAR_30) {


  if (!VAR_25) {
   FUNC_19(&VAR_22->master_lock);
   FUNC_19(&VAR_22->spinlock);

   VAR_25 = (struct dlm_master_list_entry *)
    FUNC_13(VAR_16, VAR_14);
   if (!VAR_25) {
    VAR_21 = VAR_7;
    FUNC_16(-VAR_13);
    goto send_response;
   }
   goto way_up_top;
  }



  FUNC_7(VAR_25, VAR_11, VAR_22, ((void*)0), VAR_27, VAR_28);
  FUNC_17(VAR_24->node_idx, VAR_25->maybe_map);
  FUNC_1(VAR_22, VAR_25);
  VAR_21 = VAR_9;
 } else {

  VAR_32 = 1;
  FUNC_18(&VAR_26->spinlock);
  if (VAR_26->master == VAR_22->node_num) {
   FUNC_15(VAR_15, "no lockres, but an mle with this node as master!\n");
   FUNC_0();
  }
  if (VAR_26->type == VAR_11)
   VAR_21 = VAR_9;
  else if (VAR_26->type == VAR_12) {
   FUNC_15(0, "migration mle was found (%u->%u)\n",
        VAR_26->master, VAR_26->new_master);

   VAR_21 = VAR_9;
  } else
   VAR_21 = VAR_8;
  if (VAR_32)
   FUNC_17(VAR_24->node_idx, VAR_26->maybe_map);
  FUNC_19(&VAR_26->spinlock);
 }
 FUNC_19(&VAR_22->master_lock);
 FUNC_19(&VAR_22->spinlock);

 if (VAR_30) {

  FUNC_12(VAR_26);
 }
send_response:






 if (VAR_33) {
  if (VAR_21 != VAR_10)
   FUNC_15(VAR_15, "invalid response %d\n", VAR_21);
  if (!VAR_23) {
   FUNC_15(VAR_15, "bad lockres while trying to assert!\n");
   FUNC_0();
  }
  FUNC_15(0, "%u is the owner of %.*s, cleaning everyone else\n",
        VAR_22->node_num, VAR_23->lockname.len, VAR_23->lockname.name);
  VAR_31 = FUNC_3(VAR_22, VAR_23, 0, VAR_24->node_idx,
       VAR_0);
  if (VAR_31 < 0) {
   FUNC_15(VAR_15, "failed to dispatch assert master work\n");
   VAR_21 = VAR_7;
   FUNC_9(VAR_23);
  }
 } else {
  if (VAR_23)
   FUNC_9(VAR_23);
 }

 FUNC_11(VAR_22);
 return VAR_21;
}
