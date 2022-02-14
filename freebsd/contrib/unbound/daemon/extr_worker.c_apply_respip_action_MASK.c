
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worker {int scratchpad; } ;
struct ub_packed_rrset_key {int dummy; } ;
struct respip_client_info {int dummy; } ;
struct respip_action_info {scalar_t__ action; scalar_t__ addrinfo; int * member_1; int member_0; } ;
struct reply_info {int dummy; } ;
struct query_info {int local_alias; int qclass; int qtype; int qname; } ;
struct comm_reply {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__,int ,int ,int ,int ,struct comm_reply*) ;
 int VAR_5 ;
 int FUNC_1 (struct query_info const*,struct respip_client_info*,struct reply_info*,struct reply_info**,struct respip_action_info*,struct ub_packed_rrset_key**,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct worker* VAR_6, const struct query_info* VAR_7,
 struct respip_client_info* VAR_8, struct reply_info* VAR_9,
 struct comm_reply* VAR_10, struct ub_packed_rrset_key** VAR_11,
 struct reply_info** VAR_12)
{
 struct respip_action_info VAR_13 = {VAR_5, ((void*)0)};

 if(VAR_7->qtype != VAR_0 &&
  VAR_7->qtype != VAR_1 &&
  VAR_7->qtype != VAR_2)
  return 1;

 if(!FUNC_1(VAR_7, VAR_8, VAR_9, VAR_12, &VAR_13,
  VAR_11, 0, VAR_6->scratchpad))
  return 0;



 if((VAR_13.action == VAR_3 ||
  VAR_13.action == VAR_4) &&
  *VAR_12 == VAR_9)
  *VAR_12 = ((void*)0);



 if(VAR_13.addrinfo) {
  FUNC_0(VAR_13.addrinfo, VAR_7->qname,
   VAR_7->qtype, VAR_7->qclass, VAR_7->local_alias,
   VAR_10);
 }

 return 1;
}
