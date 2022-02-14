
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_ucm_rep_event_resp {int srq; int rnr_retry_count; int flow_control; int failover_accepted; int target_ack_delay; int initiator_depth; int responder_resources; int starting_psn; int remote_qpn; int remote_qkey; int remote_ca_guid; } ;
struct ib_cm_rep_event_param {int srq; int rnr_retry_count; int flow_control; int failover_accepted; int target_ack_delay; int initiator_depth; int responder_resources; int starting_psn; int remote_qpn; int remote_qkey; int remote_ca_guid; } ;



__attribute__((used)) static void FUNC_0(struct ib_cm_rep_event_param *VAR_0,
        struct ib_ucm_rep_event_resp *VAR_1)
{
 VAR_0->remote_ca_guid = VAR_1->remote_ca_guid;
 VAR_0->remote_qkey = VAR_1->remote_qkey;
 VAR_0->remote_qpn = VAR_1->remote_qpn;
 VAR_0->starting_psn = VAR_1->starting_psn;
 VAR_0->responder_resources = VAR_1->responder_resources;
 VAR_0->initiator_depth = VAR_1->initiator_depth;
 VAR_0->target_ack_delay = VAR_1->target_ack_delay;
 VAR_0->failover_accepted = VAR_1->failover_accepted;
 VAR_0->flow_control = VAR_1->flow_control;
 VAR_0->rnr_retry_count = VAR_1->rnr_retry_count;
 VAR_0->srq = VAR_1->srq;
}
