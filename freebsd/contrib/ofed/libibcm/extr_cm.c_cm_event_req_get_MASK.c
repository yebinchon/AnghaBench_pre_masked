
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_ucm_req_event_resp {int alternate_path; int primary_path; int port; int srq; int rnr_retry_count; int retry_count; int remote_cm_response_timeout; int flow_control; int local_cm_response_timeout; int initiator_depth; int responder_resources; int starting_psn; int qp_type; int remote_qpn; int remote_qkey; int remote_ca_guid; } ;
struct ib_cm_req_event_param {scalar_t__ alternate_path; scalar_t__ primary_path; int port; int srq; int rnr_retry_count; int retry_count; int remote_cm_response_timeout; int flow_control; int local_cm_response_timeout; int initiator_depth; int responder_resources; int starting_psn; int qp_type; int remote_qpn; int remote_qkey; int remote_ca_guid; } ;


 int FUNC_0 (scalar_t__,int *) ;

__attribute__((used)) static void FUNC_1(struct ib_cm_req_event_param *VAR_0,
        struct ib_ucm_req_event_resp *VAR_1)
{
 VAR_0->remote_ca_guid = VAR_1->remote_ca_guid;
 VAR_0->remote_qkey = VAR_1->remote_qkey;
 VAR_0->remote_qpn = VAR_1->remote_qpn;
 VAR_0->qp_type = VAR_1->qp_type;
 VAR_0->starting_psn = VAR_1->starting_psn;
 VAR_0->responder_resources = VAR_1->responder_resources;
 VAR_0->initiator_depth = VAR_1->initiator_depth;
 VAR_0->local_cm_response_timeout = VAR_1->local_cm_response_timeout;
 VAR_0->flow_control = VAR_1->flow_control;
 VAR_0->remote_cm_response_timeout = VAR_1->remote_cm_response_timeout;
 VAR_0->retry_count = VAR_1->retry_count;
 VAR_0->rnr_retry_count = VAR_1->rnr_retry_count;
 VAR_0->srq = VAR_1->srq;
 VAR_0->port = VAR_1->port;

 FUNC_0(VAR_0->primary_path, &VAR_1->primary_path);
 if (VAR_0->alternate_path)
  FUNC_0(VAR_0->alternate_path,
         &VAR_1->alternate_path);
}
