
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct rrset_ref {int dummy; } ;
struct reply_info {int authoritative; int qdcount; scalar_t__ flags; } ;
struct regional {int dummy; } ;
struct query_info {int qclass; int qtype; int qname_len; int qname; } ;
struct TYPE_2__ {int * local_alias; int qclass; int qtype; int qname_len; int qname; } ;
struct dns_msg {struct reply_info* rep; TYPE_1__ qinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct regional*,int) ;
 int FUNC_1 (struct regional*,int ,int ) ;
 scalar_t__ FUNC_2 (struct regional*,int) ;

__attribute__((used)) static struct dns_msg*
FUNC_3(struct regional* VAR_2, struct query_info* VAR_3)
{
 struct dns_msg* VAR_4 = (struct dns_msg*)FUNC_0(VAR_2,
  sizeof(struct dns_msg));
 if(!VAR_4)
  return ((void*)0);
 VAR_4->qinfo.qname = FUNC_1(VAR_2, VAR_3->qname,
  VAR_3->qname_len);
 if(!VAR_4->qinfo.qname)
  return ((void*)0);
 VAR_4->qinfo.qname_len = VAR_3->qname_len;
 VAR_4->qinfo.qtype = VAR_3->qtype;
 VAR_4->qinfo.qclass = VAR_3->qclass;
 VAR_4->qinfo.local_alias = ((void*)0);

 VAR_4->rep = (struct reply_info*)FUNC_2(VAR_2,
  sizeof(struct reply_info)-sizeof(struct rrset_ref));
 if(!VAR_4->rep)
  return ((void*)0);
 VAR_4->rep->flags = (uint16_t)(VAR_1 | VAR_0);
 VAR_4->rep->authoritative = 1;
 VAR_4->rep->qdcount = 1;

 return VAR_4;
}
