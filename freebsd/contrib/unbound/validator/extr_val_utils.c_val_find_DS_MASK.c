
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {int lock; } ;
struct ub_packed_rrset_key {TYPE_1__ entry; } ;
struct regional {int dummy; } ;
struct query_info {size_t qname_len; int * local_alias; int qclass; int qtype; int * qname; } ;
struct module_env {int cfg; int * now; int scratch_buffer; int rrset_cache; int neg_cache; } ;
struct dns_msg {TYPE_2__* rep; } ;
struct TYPE_4__ {int an_numrrsets; int rrset_count; struct ub_packed_rrset_key** rrsets; } ;


 int VAR_0 ;
 struct dns_msg* FUNC_0 (int *,size_t,int ,int ,struct regional*,int) ;
 int FUNC_1 (int *) ;
 struct ub_packed_rrset_key* FUNC_2 (struct ub_packed_rrset_key*,struct regional*,int ) ;
 struct ub_packed_rrset_key* FUNC_3 (int ,int *,size_t,int ,int ,int ,int ,int ) ;
 struct dns_msg* FUNC_4 (int ,struct query_info*,struct regional*,int ,int ,int ,int ,int *,int ) ;

struct dns_msg*
FUNC_5(struct module_env* VAR_1, uint8_t* VAR_2, size_t VAR_3, uint16_t VAR_4,
 struct regional* VAR_5, uint8_t* VAR_6)
{
 struct dns_msg* VAR_7;
 struct query_info VAR_8;
 struct ub_packed_rrset_key *VAR_9 = FUNC_3(
  VAR_1->rrset_cache, VAR_2, VAR_3, VAR_0, VAR_4, 0,
  *VAR_1->now, 0);
 if(VAR_9) {

  struct ub_packed_rrset_key* VAR_10 = FUNC_2(
   VAR_9, VAR_5, *VAR_1->now);
  FUNC_1(&VAR_9->entry.lock);
  if(!VAR_10)
   return ((void*)0);
  VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_0, VAR_4, VAR_5, 1);
  if(!VAR_7)
   return ((void*)0);
  VAR_7->rep->rrsets[0] = VAR_10;
  VAR_7->rep->rrset_count++;
  VAR_7->rep->an_numrrsets++;
  return VAR_7;
 }

 VAR_8.qname = VAR_2;
 VAR_8.qname_len = VAR_3;
 VAR_8.qtype = VAR_0;
 VAR_8.qclass = VAR_4;
 VAR_8.local_alias = ((void*)0);

 VAR_7 = FUNC_4(VAR_1->neg_cache, &VAR_8, VAR_5, VAR_1->rrset_cache,
  VAR_1->scratch_buffer, *VAR_1->now, 0, VAR_6, VAR_1->cfg);
 return VAR_7;
}
