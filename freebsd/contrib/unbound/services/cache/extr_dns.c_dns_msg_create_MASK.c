
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* uint16_t ;
struct ub_packed_rrset_key {int dummy; } ;
struct rrset_ref {int dummy; } ;
struct reply_info {int qdcount; struct ub_packed_rrset_key** rrsets; int flags; } ;
struct regional {int dummy; } ;
struct TYPE_2__ {size_t qname_len; int * local_alias; void* qclass; void* qtype; int qname; } ;
struct dns_msg {struct reply_info* rep; TYPE_1__ qinfo; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (struct regional*,size_t) ;
 int FUNC_1 (struct regional*,int *,size_t) ;
 scalar_t__ FUNC_2 (struct regional*,int) ;

struct dns_msg*
FUNC_3(uint8_t* VAR_2, size_t VAR_3, uint16_t VAR_4,
 uint16_t VAR_5, struct regional* VAR_6, size_t VAR_7)
{
 struct dns_msg* VAR_8 = (struct dns_msg*)FUNC_0(VAR_6,
  sizeof(struct dns_msg));
 if(!VAR_8)
  return ((void*)0);
 VAR_8->qinfo.qname = FUNC_1(VAR_6, VAR_2, VAR_3);
 if(!VAR_8->qinfo.qname)
  return ((void*)0);
 VAR_8->qinfo.qname_len = VAR_3;
 VAR_8->qinfo.qtype = VAR_4;
 VAR_8->qinfo.qclass = VAR_5;
 VAR_8->qinfo.local_alias = ((void*)0);

 VAR_8->rep = (struct reply_info*)FUNC_2(VAR_6,
  sizeof(struct reply_info)-sizeof(struct rrset_ref));
 if(!VAR_8->rep)
  return ((void*)0);
 if(VAR_7 > VAR_1)
  return ((void*)0);
 VAR_8->rep->flags = VAR_0;
 VAR_8->rep->qdcount = 1;
 VAR_8->rep->rrsets = (struct ub_packed_rrset_key**)
  FUNC_0(VAR_6,
  VAR_7*sizeof(struct ub_packed_rrset_key*));
 if(!VAR_8->rep->rrsets)
  return ((void*)0);
 return VAR_8;
}
