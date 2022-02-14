
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int pv_minor; int pv_major; } ;
struct TYPE_3__ {int pv_minor; int pv_major; } ;
struct dlm_query_join_request {int node_map; TYPE_2__ fs_proto; TYPE_1__ dlm_proto; int name_len; int domain; int node_idx; } ;
struct dlm_query_join_packet {int code; int fs_minor; int dlm_minor; } ;
struct dlm_ctxt {TYPE_2__ fs_locking_proto; TYPE_1__ dlm_locking_proto; int live_nodes_map; int name; int node_num; } ;
typedef int join_msg ;
typedef enum dlm_query_join_response_code { ____Placeholder_dlm_query_join_response_code } dlm_query_join_response_code ;


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
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,struct dlm_query_join_packet*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct dlm_query_join_request*,int ,int) ;
 int FUNC_4 (int ,char*,int,...) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ,struct dlm_query_join_request*,int,int,int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct dlm_ctxt *VAR_12,
       int VAR_13,
       enum dlm_query_join_response_code *VAR_14)
{
 int VAR_15;
 struct dlm_query_join_request VAR_16;
 struct dlm_query_join_packet VAR_17;
 u32 VAR_18;

 FUNC_4(0, "querying node %d\n", VAR_13);

 FUNC_3(&VAR_16, 0, sizeof(VAR_16));
 VAR_16.node_idx = VAR_12->node_num;
 VAR_16.name_len = FUNC_7(VAR_12->name);
 FUNC_2(VAR_16.domain, VAR_12->name, VAR_16.name_len);
 VAR_16.dlm_proto = VAR_12->dlm_locking_proto;
 VAR_16.fs_proto = VAR_12->fs_locking_proto;


 FUNC_0(VAR_16.node_map, VAR_12->live_nodes_map, VAR_11);

 VAR_15 = FUNC_6(VAR_1, VAR_0, &VAR_16,
        sizeof(VAR_16), VAR_13,
        &VAR_18);
 if (VAR_15 < 0 && VAR_15 != -VAR_3) {
  FUNC_5(VAR_15);
  goto bail;
 }
 FUNC_1(VAR_18, &VAR_17);





 if (VAR_15 == -VAR_3) {
  VAR_15 = 0;
  *VAR_14 = VAR_7;
 } else if (VAR_17.code == VAR_5 ||
     VAR_17.code == VAR_7) {
  *VAR_14 = VAR_17.code;
 } else if (VAR_17.code == VAR_8) {
  FUNC_4(VAR_10,
       "This node requested DLM locking protocol %u.%u and "
       "filesystem locking protocol %u.%u.  At least one of "
       "the protocol versions on node %d is not compatible, "
       "disconnecting\n",
       VAR_12->dlm_locking_proto.pv_major,
       VAR_12->dlm_locking_proto.pv_minor,
       VAR_12->fs_locking_proto.pv_major,
       VAR_12->fs_locking_proto.pv_minor,
       VAR_13);
  VAR_15 = -VAR_4;
  *VAR_14 = VAR_17.code;
 } else if (VAR_17.code == VAR_6) {
  *VAR_14 = VAR_17.code;

  VAR_12->dlm_locking_proto.pv_minor = VAR_17.dlm_minor;
  VAR_12->fs_locking_proto.pv_minor = VAR_17.fs_minor;
  FUNC_4(0,
       "Node %d responds JOIN_OK with DLM locking protocol "
       "%u.%u and fs locking protocol %u.%u\n",
       VAR_13,
       VAR_12->dlm_locking_proto.pv_major,
       VAR_12->dlm_locking_proto.pv_minor,
       VAR_12->fs_locking_proto.pv_major,
       VAR_12->fs_locking_proto.pv_minor);
 } else {
  VAR_15 = -VAR_2;
  FUNC_4(VAR_9, "invalid response %d from node %u\n",
       VAR_17.code, VAR_13);
 }

 FUNC_4(0, "status %d, node %d response is %d\n", VAR_15, VAR_13,
      *VAR_14);

bail:
 return VAR_15;
}
