
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_user_path_rec {int dummy; } ;
struct ib_ucm_req {uintptr_t primary_path; uintptr_t alternate_path; uintptr_t data; scalar_t__ len; int srq; int max_cm_retries; int rnr_retry_count; int retry_count; int local_cm_response_timeout; int flow_control; int remote_cm_response_timeout; int initiator_depth; int responder_resources; int peer_to_peer; int sid; int psn; int qp_type; int qpn; int id; } ;
struct ib_cm_req_param {scalar_t__ private_data_len; scalar_t__ private_data; int alternate_path; int primary_path; int srq; int max_cm_retries; int rnr_retry_count; int retry_count; int local_cm_response_timeout; int flow_control; int remote_cm_response_timeout; int initiator_depth; int responder_resources; int peer_to_peer; int service_id; int starting_psn; int qp_type; int qp_num; } ;
struct ib_cm_id {TYPE_1__* device; int handle; } ;
struct TYPE_2__ {int fd; } ;


 int FUNC_0 (void*,struct ib_ucm_req*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 struct ib_user_path_rec* FUNC_2 (int) ;
 int FUNC_3 (struct ib_user_path_rec*,int ) ;
 int FUNC_4 (int ,void*,int) ;

int FUNC_5(struct ib_cm_id *VAR_4, struct ib_cm_req_param *VAR_5)
{
 struct ib_user_path_rec VAR_6;
 struct ib_user_path_rec *VAR_7;
 struct ib_ucm_req *VAR_8;
 void *VAR_9;
 int VAR_10;
 int VAR_11;

 if (!VAR_5 || !VAR_5->primary_path)
  return FUNC_1(VAR_0);

 FUNC_0(VAR_9, VAR_8, VAR_3, VAR_11);
 VAR_8->id = VAR_4->handle;
 VAR_8->qpn = VAR_5->qp_num;
 VAR_8->qp_type = VAR_5->qp_type;
 VAR_8->psn = VAR_5->starting_psn;
        VAR_8->sid = VAR_5->service_id;
        VAR_8->peer_to_peer = VAR_5->peer_to_peer;
        VAR_8->responder_resources = VAR_5->responder_resources;
        VAR_8->initiator_depth = VAR_5->initiator_depth;
        VAR_8->remote_cm_response_timeout = VAR_5->remote_cm_response_timeout;
        VAR_8->flow_control = VAR_5->flow_control;
        VAR_8->local_cm_response_timeout = VAR_5->local_cm_response_timeout;
        VAR_8->retry_count = VAR_5->retry_count;
        VAR_8->rnr_retry_count = VAR_5->rnr_retry_count;
        VAR_8->max_cm_retries = VAR_5->max_cm_retries;
        VAR_8->srq = VAR_5->srq;

 FUNC_3(&VAR_6, VAR_5->primary_path);
 VAR_8->primary_path = (uintptr_t) &VAR_6;

 if (VAR_5->alternate_path) {
  VAR_7 = FUNC_2(sizeof(*VAR_7));
  if (!VAR_7)
   return FUNC_1(VAR_2);

  FUNC_3(VAR_7, VAR_5->alternate_path);
  VAR_8->alternate_path = (uintptr_t) VAR_7;
 }

 if (VAR_5->private_data && VAR_5->private_data_len) {
  VAR_8->data = (uintptr_t) VAR_5->private_data;
  VAR_8->len = VAR_5->private_data_len;
 }

 VAR_10 = FUNC_4(VAR_4->device->fd, VAR_9, VAR_11);
 if (VAR_10 != VAR_11)
  return (VAR_10 >= 0) ? FUNC_1(VAR_1) : -1;

 return 0;
}
