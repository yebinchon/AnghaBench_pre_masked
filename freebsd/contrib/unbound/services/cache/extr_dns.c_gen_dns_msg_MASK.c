
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ub_packed_rrset_key {int dummy; } ;
struct rrset_ref {int dummy; } ;
struct reply_info {struct ub_packed_rrset_key** rrsets; } ;
struct regional {int dummy; } ;
struct query_info {int qname_len; int qname; } ;
struct TYPE_2__ {int qname; } ;
struct dns_msg {struct reply_info* rep; TYPE_1__ qinfo; } ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct query_info*,int) ;
 scalar_t__ FUNC_1 (struct regional*,size_t) ;
 int FUNC_2 (struct regional*,int ,int ) ;

__attribute__((used)) static struct dns_msg*
FUNC_3(struct regional* VAR_1, struct query_info* VAR_2, size_t VAR_3)
{
 struct dns_msg* VAR_4 = (struct dns_msg*)FUNC_1(VAR_1,
  sizeof(struct dns_msg));
 if(!VAR_4)
  return ((void*)0);
 FUNC_0(&VAR_4->qinfo, VAR_2, sizeof(struct query_info));
 VAR_4->qinfo.qname = FUNC_2(VAR_1, VAR_2->qname, VAR_2->qname_len);
 if(!VAR_4->qinfo.qname)
  return ((void*)0);

 VAR_4->rep = (struct reply_info*)FUNC_1(VAR_1,
  sizeof(struct reply_info) - sizeof(struct rrset_ref));
 if(!VAR_4->rep)
  return ((void*)0);
 if(VAR_3 > VAR_0)
  return ((void*)0);
 VAR_4->rep->rrsets = (struct ub_packed_rrset_key**)
  FUNC_1(VAR_1,
  VAR_3 * sizeof(struct ub_packed_rrset_key*));
 if(!VAR_4->rep->rrsets)
  return ((void*)0);
 return VAR_4;
}
