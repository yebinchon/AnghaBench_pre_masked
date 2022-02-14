
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct val_qstate {scalar_t__ rrset_skip; TYPE_1__* chase_reply; struct dns_msg* orig_msg; int qchase; } ;
struct ub_packed_rrset_key {int dummy; } ;
struct rrset_ref {int dummy; } ;
struct reply_info {int flags; int qdcount; int rrset_count; struct reply_info* rrsets; } ;
struct module_qstate {int return_rcode; int query_flags; int region; int qinfo; struct dns_msg* return_msg; } ;
struct dns_msg {struct reply_info* rep; int qinfo; } ;
struct TYPE_2__ {void* rrsets; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct reply_info*,int ,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 void* FUNC_2 (int ,struct reply_info*,int) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static struct val_qstate*
FUNC_4(struct module_qstate* VAR_7, struct val_qstate* VAR_8)
{
 if(!VAR_7->return_msg || VAR_7->return_rcode != VAR_4) {

  FUNC_3(VAR_6, "constructing reply for validation");
  VAR_8->orig_msg = (struct dns_msg*)FUNC_1(VAR_7->region,
   sizeof(struct dns_msg));
  if(!VAR_8->orig_msg)
   return ((void*)0);
  VAR_8->orig_msg->qinfo = VAR_7->qinfo;
  VAR_8->orig_msg->rep = (struct reply_info*)FUNC_1(
   VAR_7->region, sizeof(struct reply_info));
  if(!VAR_8->orig_msg->rep)
   return ((void*)0);
  FUNC_0(VAR_8->orig_msg->rep, 0, sizeof(struct reply_info));
  VAR_8->orig_msg->rep->flags = (uint16_t)(VAR_7->return_rcode&0xf)
   |VAR_1|VAR_2|(VAR_7->query_flags|(VAR_0|VAR_3));
  VAR_8->orig_msg->rep->qdcount = 1;
 } else {
  VAR_8->orig_msg = VAR_7->return_msg;
 }
 VAR_8->qchase = VAR_7->qinfo;

 VAR_8->chase_reply = FUNC_2(VAR_7->region,
  VAR_8->orig_msg->rep,
  sizeof(struct reply_info) - sizeof(struct rrset_ref));
 if(!VAR_8->chase_reply)
  return ((void*)0);
 if(VAR_8->orig_msg->rep->rrset_count > VAR_5)
  return ((void*)0);
 VAR_8->chase_reply->rrsets = FUNC_2(VAR_7->region,
  VAR_8->orig_msg->rep->rrsets, sizeof(struct ub_packed_rrset_key*)
   * VAR_8->orig_msg->rep->rrset_count);
 if(!VAR_8->chase_reply->rrsets)
  return ((void*)0);
 VAR_8->rrset_skip = 0;
 return VAR_8;
}
