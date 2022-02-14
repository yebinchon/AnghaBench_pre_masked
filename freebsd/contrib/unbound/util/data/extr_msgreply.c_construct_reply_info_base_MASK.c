
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef void* time_t ;
struct ub_packed_rrset_key {int dummy; } ;
struct rrset_ref {int dummy; } ;
struct reply_info {size_t qdcount; size_t an_numrrsets; size_t ns_numrrsets; size_t ar_numrrsets; size_t rrset_count; int security; struct ub_packed_rrset_key** ref; struct ub_packed_rrset_key** rrsets; scalar_t__ authoritative; void* serve_expired_ttl; void* prefetch_ttl; void* ttl; int flags; } ;
struct regional {int dummy; } ;
typedef enum sec_status { ____Placeholder_sec_status } sec_status ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (struct ub_packed_rrset_key**,int ,int) ;
 scalar_t__ FUNC_2 (struct regional*,size_t) ;

struct reply_info*
FUNC_3(struct regional* VAR_1, uint16_t VAR_2, size_t VAR_3,
 time_t VAR_4, time_t VAR_5, time_t VAR_6, size_t VAR_7, size_t VAR_8,
 size_t VAR_9, size_t VAR_10, enum sec_status VAR_11)
{
 struct reply_info* VAR_12;

 size_t VAR_13 = sizeof(struct reply_info) - sizeof(struct rrset_ref) +
  sizeof(struct ub_packed_rrset_key*) * VAR_10;
 if(VAR_10 >= VAR_0) return ((void*)0);
 if(VAR_1)
  VAR_12 = (struct reply_info*)FUNC_2(VAR_1, VAR_13);
 else VAR_12 = (struct reply_info*)FUNC_0(VAR_13 +
   sizeof(struct rrset_ref) * (VAR_10));
 if(!VAR_12)
  return ((void*)0);
 VAR_12->flags = VAR_2;
 VAR_12->qdcount = VAR_3;
 VAR_12->ttl = VAR_4;
 VAR_12->prefetch_ttl = VAR_5;
 VAR_12->serve_expired_ttl = VAR_6;
 VAR_12->an_numrrsets = VAR_7;
 VAR_12->ns_numrrsets = VAR_8;
 VAR_12->ar_numrrsets = VAR_9;
 VAR_12->rrset_count = VAR_10;
 VAR_12->security = VAR_11;
 VAR_12->authoritative = 0;

 if(VAR_1)
  VAR_12->rrsets = (struct ub_packed_rrset_key**)&(VAR_12->ref[0]);
 else VAR_12->rrsets = (struct ub_packed_rrset_key**)&(VAR_12->ref[VAR_10]);

 FUNC_1( VAR_12->rrsets, 0, sizeof(struct ub_packed_rrset_key*) * VAR_10);
 if(!VAR_1)
  FUNC_1( &VAR_12->ref[0], 0, sizeof(struct rrset_ref) * VAR_10);
 return VAR_12;
}
