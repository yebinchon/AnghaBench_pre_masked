
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_3__ {scalar_t__ data; } ;
struct ub_packed_rrset_key {TYPE_1__ entry; } ;
struct regional {int dummy; } ;
struct query_info {int dummy; } ;
struct packed_rrset_data {scalar_t__ ttl; } ;
struct dns_msg {TYPE_2__* rep; } ;
struct TYPE_4__ {int qdcount; int an_numrrsets; int rrset_count; int * rrsets; scalar_t__ ar_numrrsets; scalar_t__ ns_numrrsets; int security; scalar_t__ ttl; scalar_t__ serve_expired_ttl; int prefetch_ttl; scalar_t__ authoritative; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 struct dns_msg* FUNC_1 (struct regional*,struct query_info*,int) ;
 int FUNC_2 (struct ub_packed_rrset_key*,struct regional*,scalar_t__) ;
 int VAR_2 ;

__attribute__((used)) static struct dns_msg*
FUNC_3(struct ub_packed_rrset_key* VAR_3, struct regional* VAR_4,
 time_t VAR_5, struct query_info* VAR_6)
{
 struct dns_msg* VAR_7;
 struct packed_rrset_data* VAR_8 = (struct packed_rrset_data*)
  VAR_3->entry.data;
 if(VAR_5 > VAR_8->ttl)
  return ((void*)0);
 VAR_7 = FUNC_1(VAR_4, VAR_6, 1);
 if(!VAR_7)
  return ((void*)0);
 VAR_7->rep->flags = VAR_0;
        VAR_7->rep->authoritative = 0;
 VAR_7->rep->qdcount = 1;
 VAR_7->rep->ttl = VAR_8->ttl - VAR_5;
 VAR_7->rep->prefetch_ttl = FUNC_0(VAR_7->rep->ttl);
 VAR_7->rep->serve_expired_ttl = VAR_7->rep->ttl + VAR_1;
 VAR_7->rep->security = VAR_2;
 VAR_7->rep->an_numrrsets = 1;
 VAR_7->rep->ns_numrrsets = 0;
 VAR_7->rep->ar_numrrsets = 0;
 VAR_7->rep->rrset_count = 1;
 VAR_7->rep->rrsets[0] = FUNC_2(VAR_3, VAR_4, VAR_5);
 if(!VAR_7->rep->rrsets[0])
  return ((void*)0);
 return VAR_7;
}
