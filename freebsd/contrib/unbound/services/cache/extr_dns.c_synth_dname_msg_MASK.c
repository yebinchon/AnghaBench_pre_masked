
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef scalar_t__ time_t ;
struct TYPE_6__ {struct packed_rrset_data* data; int hash; struct ub_packed_rrset_key* key; } ;
struct TYPE_5__ {size_t dname_len; int dname; scalar_t__ flags; int rrset_class; int type; } ;
struct ub_packed_rrset_key {TYPE_3__ entry; TYPE_2__ rk; } ;
struct regional {int dummy; } ;
struct query_info {size_t qname_len; int qname; } ;
struct packed_rrset_data {scalar_t__ ttl; int security; int count; size_t* rr_len; scalar_t__* rr_ttl; int ** rr_data; int trust; scalar_t__ rrsig_count; } ;
struct dns_msg {TYPE_1__* rep; } ;
typedef enum sec_status { ____Placeholder_sec_status } sec_status ;
struct TYPE_4__ {int qdcount; scalar_t__ ttl; int an_numrrsets; int rrset_count; void* serve_expired_ttl; void* prefetch_ttl; struct ub_packed_rrset_key** rrsets; int flags; scalar_t__ ar_numrrsets; scalar_t__ ns_numrrsets; int security; scalar_t__ authoritative; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (scalar_t__) ;
 void* VAR_4 ;
 struct dns_msg* FUNC_1 (struct regional*,struct query_info*,int) ;
 int FUNC_2 (struct ub_packed_rrset_key*,int **,size_t*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,size_t) ;
 int FUNC_5 (int *,int *,size_t) ;
 int FUNC_6 (TYPE_3__*,int ,int) ;
 struct ub_packed_rrset_key* FUNC_7 (struct ub_packed_rrset_key*,struct regional*,scalar_t__) ;
 int FUNC_8 (struct packed_rrset_data*) ;
 scalar_t__ FUNC_9 (struct regional*,int) ;
 int FUNC_10 (struct regional*,int ,int) ;
 scalar_t__ FUNC_11 (struct regional*,int) ;
 int FUNC_12 (TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_13 (int *,size_t) ;

__attribute__((used)) static struct dns_msg*
FUNC_14(struct ub_packed_rrset_key* VAR_7, struct regional* VAR_8,
 time_t VAR_9, struct query_info* VAR_10, enum sec_status* VAR_11)
{
 struct dns_msg* VAR_12;
 struct ub_packed_rrset_key* VAR_13;
 struct packed_rrset_data* VAR_14, *VAR_15 = (struct packed_rrset_data*)
  VAR_7->entry.data;
 uint8_t* VAR_16, *VAR_17 = ((void*)0);
 size_t VAR_18, VAR_19;
 if(VAR_9 > VAR_15->ttl)
  return ((void*)0);


 *VAR_11 = VAR_15->security;


 VAR_12 = FUNC_1(VAR_8, VAR_10, 2);
 if(!VAR_12)
  return ((void*)0);
 VAR_12->rep->flags = VAR_0;
        VAR_12->rep->authoritative = 0;
 VAR_12->rep->qdcount = 1;
 VAR_12->rep->ttl = VAR_15->ttl - VAR_9;
 VAR_12->rep->prefetch_ttl = FUNC_0(VAR_12->rep->ttl);
 VAR_12->rep->serve_expired_ttl = VAR_12->rep->ttl + VAR_4;
 VAR_12->rep->security = VAR_6;
 VAR_12->rep->an_numrrsets = 1;
 VAR_12->rep->ns_numrrsets = 0;
 VAR_12->rep->ar_numrrsets = 0;
 VAR_12->rep->rrset_count = 1;
 VAR_12->rep->rrsets[0] = FUNC_7(VAR_7, VAR_8, VAR_9);
 if(!VAR_12->rep->rrsets[0])
  return ((void*)0);

 FUNC_2(VAR_7, &VAR_17, &VAR_19);
 if(!VAR_17)
  return ((void*)0);
 VAR_18 = VAR_10->qname_len + VAR_19 - VAR_7->rk.dname_len;
 if(VAR_18 > VAR_1) {
  VAR_12->rep->flags |= VAR_2;
  return VAR_12;
 }
 VAR_16 = (uint8_t*)FUNC_9(VAR_8, VAR_18);
 if(!VAR_16)
  return ((void*)0);


 FUNC_4(VAR_16, VAR_10->qname, VAR_10->qname_len-VAR_7->rk.dname_len);
 FUNC_5(VAR_16+(VAR_10->qname_len-VAR_7->rk.dname_len), VAR_17, VAR_19);

 VAR_13 = (struct ub_packed_rrset_key*)FUNC_9(VAR_8,
  sizeof(struct ub_packed_rrset_key));
 if(!VAR_13)
  return ((void*)0);
 FUNC_6(&VAR_13->entry, 0, sizeof(VAR_13->entry));
 VAR_12->rep->rrsets[1] = VAR_13;
 VAR_13->entry.key = VAR_13;
 VAR_13->rk.type = FUNC_3(VAR_3);
 VAR_13->rk.rrset_class = VAR_7->rk.rrset_class;
 VAR_13->rk.flags = 0;
 VAR_13->rk.dname = FUNC_10(VAR_8, VAR_10->qname, VAR_10->qname_len);
 if(!VAR_13->rk.dname)
  return ((void*)0);
 VAR_13->rk.dname_len = VAR_10->qname_len;
 VAR_13->entry.hash = FUNC_12(&VAR_13->rk);
 VAR_14 = (struct packed_rrset_data*)FUNC_11(VAR_8,
  sizeof(struct packed_rrset_data) + sizeof(size_t) +
  sizeof(uint8_t*) + sizeof(time_t) + sizeof(uint16_t)
  + VAR_18);
 if(!VAR_14)
  return ((void*)0);
 VAR_13->entry.data = VAR_14;
 VAR_14->ttl = 0;
 VAR_14->count = 1;
 VAR_14->rrsig_count = 0;
 VAR_14->trust = VAR_5;
 VAR_14->rr_len = (size_t*)((uint8_t*)VAR_14 +
  sizeof(struct packed_rrset_data));
 VAR_14->rr_len[0] = VAR_18 + sizeof(uint16_t);
 FUNC_8(VAR_14);
 VAR_14->rr_ttl[0] = VAR_14->ttl;
 VAR_12->rep->ttl = VAR_14->ttl;
 VAR_12->rep->prefetch_ttl = FUNC_0(VAR_14->ttl);
 VAR_12->rep->serve_expired_ttl = VAR_14->ttl + VAR_4;
 FUNC_13(VAR_14->rr_data[0], VAR_18);
 FUNC_5(VAR_14->rr_data[0] + sizeof(uint16_t), VAR_16, VAR_18);
 VAR_12->rep->an_numrrsets ++;
 VAR_12->rep->rrset_count ++;
 return VAR_12;
}
