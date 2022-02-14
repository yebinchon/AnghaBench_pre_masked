
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ub_packed_rrset_key {int dummy; } ;
struct rrset_ref {int dummy; } ;
struct reply_info {int rrset_count; int * ref; struct ub_packed_rrset_key** rrsets; } ;
struct regional {int dummy; } ;
struct query_info {int qname_len; int * qname; } ;
struct lruhash_entry {int * key; int * data; } ;


 int VAR_0 ;
 int * FUNC_0 (struct regional*,int *,int) ;

__attribute__((used)) static int
FUNC_1(struct regional* VAR_1, struct lruhash_entry* VAR_2,
 struct query_info** VAR_3, struct reply_info** VAR_4)
{
 struct reply_info* VAR_5 = (struct reply_info*)VAR_2->data;
 if(VAR_5->rrset_count > VAR_0)
  return 0;
 *VAR_4 = (struct reply_info*)FUNC_0(VAR_1, VAR_2->data,
  sizeof(struct reply_info) +
  sizeof(struct rrset_ref) * (VAR_5->rrset_count-1) +
  sizeof(struct ub_packed_rrset_key*) * VAR_5->rrset_count);
 if(!*VAR_4)
  return 0;
 (*VAR_4)->rrsets = (struct ub_packed_rrset_key**)(void *)(
  (uint8_t*)(&((*VAR_4)->ref[0])) +
  sizeof(struct rrset_ref) * VAR_5->rrset_count);
 *VAR_3 = (struct query_info*)FUNC_0(VAR_1,
  VAR_2->key, sizeof(struct query_info));
 if(!*VAR_3)
  return 0;
 (*VAR_3)->qname = FUNC_0(VAR_1,
  (*VAR_3)->qname, (*VAR_3)->qname_len);
 return (*VAR_3)->qname != ((void*)0);
}
