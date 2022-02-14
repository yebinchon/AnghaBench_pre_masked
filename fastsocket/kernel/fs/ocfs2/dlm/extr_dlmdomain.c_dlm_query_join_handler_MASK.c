
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct o2net_msg {scalar_t__ buf; } ;
struct TYPE_4__ {int pv_minor; } ;
struct dlm_query_join_request {int node_idx; TYPE_2__ fs_proto; TYPE_2__ dlm_proto; int node_map; int name_len; int domain; } ;
struct dlm_query_join_packet {void* code; int fs_minor; int dlm_minor; } ;
struct TYPE_3__ {int state; } ;
struct dlm_ctxt {scalar_t__ dlm_state; scalar_t__ joining_node; int spinlock; int fs_locking_proto; int dlm_locking_proto; int domain_map; int recovery_map; TYPE_1__ reco; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 scalar_t__ VAR_8 ;
 struct dlm_ctxt* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct dlm_ctxt*,int) ;
 int FUNC_2 (scalar_t__,int ) ;
 int VAR_9 ;
 int FUNC_3 (struct dlm_query_join_packet*,int*) ;
 scalar_t__ FUNC_4 (char*,int,int *,TYPE_2__*) ;
 int FUNC_5 (int ,char*,int,...) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int,int ) ;

__attribute__((used)) static int FUNC_10(struct o2net_msg *VAR_10, u32 VAR_11, void *VAR_12,
      void **VAR_13)
{
 struct dlm_query_join_request *VAR_14;
 struct dlm_query_join_packet VAR_15 = {
  .code = VAR_4,
 };
 struct dlm_ctxt *VAR_16 = ((void*)0);
 u32 VAR_17;
 u8 VAR_18;

 VAR_14 = (struct dlm_query_join_request *) VAR_10->buf;

 FUNC_5(0, "node %u wants to join domain %s\n", VAR_14->node_idx,
    VAR_14->domain);






 if (!FUNC_6(VAR_14->node_idx)) {
  FUNC_5(0, "node %u is not in our live map yet\n",
       VAR_14->node_idx);

  VAR_15.code = VAR_4;
  goto respond;
 }

 VAR_15.code = VAR_6;

 FUNC_7(&VAR_9);
 VAR_16 = FUNC_0(VAR_14->domain, VAR_14->name_len);
 if (!VAR_16)
  goto unlock_respond;






 VAR_18=0;
 while (VAR_18 < VAR_8) {
  if (FUNC_9(VAR_18, VAR_16->domain_map)) {
   if (!FUNC_2(VAR_18, VAR_14->node_map)) {
    FUNC_5(0, "disallow join as node %u does not "
         "have node %u in its nodemap\n",
         VAR_14->node_idx, VAR_18);
    VAR_15.code = VAR_4;
    goto unlock_respond;
   }
  }
  VAR_18++;
 }





 if (VAR_16 && VAR_16->dlm_state != VAR_0) {
  int VAR_19 = VAR_14->node_idx;
  FUNC_7(&VAR_16->spinlock);

  if (VAR_16->dlm_state == VAR_1 &&
      VAR_16->joining_node == VAR_2) {



   VAR_15.code = VAR_6;
  } else if (VAR_16->joining_node != VAR_2) {

   VAR_15.code = VAR_4;
  } else if (VAR_16->reco.state & VAR_3) {
   FUNC_5(0, "node %u trying to join, but recovery "
        "is ongoing.\n", VAR_19);
   VAR_15.code = VAR_4;
  } else if (FUNC_9(VAR_19, VAR_16->recovery_map)) {
   FUNC_5(0, "node %u trying to join, but it "
        "still needs recovery.\n", VAR_19);
   VAR_15.code = VAR_4;
  } else if (FUNC_9(VAR_19, VAR_16->domain_map)) {
   FUNC_5(0, "node %u trying to join, but it "
        "is still in the domain! needs recovery?\n",
        VAR_19);
   VAR_15.code = VAR_4;
  } else {






   if (FUNC_4("DLM", VAR_19,
             &VAR_16->dlm_locking_proto,
             &VAR_14->dlm_proto)) {
    VAR_15.code = VAR_7;
   } else if (FUNC_4("fs", VAR_19,
             &VAR_16->fs_locking_proto,
             &VAR_14->fs_proto)) {
    VAR_15.code = VAR_7;
   } else {
    VAR_15.dlm_minor = VAR_14->dlm_proto.pv_minor;
    VAR_15.fs_minor = VAR_14->fs_proto.pv_minor;
    VAR_15.code = VAR_5;
    FUNC_1(VAR_16, VAR_14->node_idx);
   }
  }

  FUNC_8(&VAR_16->spinlock);
 }
unlock_respond:
 FUNC_8(&VAR_9);

respond:
 FUNC_5(0, "We respond with %u\n", VAR_15.code);

 FUNC_3(&VAR_15, &VAR_17);
 return VAR_17;
}
