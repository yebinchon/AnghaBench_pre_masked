
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef void* uint16_t ;
struct rrset_parse {int hash; size_t dname_len; scalar_t__ rrsig_last; scalar_t__ rrsig_first; scalar_t__ rrsig_count; scalar_t__ rr_last; scalar_t__ rr_first; scalar_t__ size; scalar_t__ rr_count; int flags; void* rrset_class; void* type; int * dname; int section; struct rrset_parse* rrset_all_next; struct rrset_parse* rrset_bucket_next; } ;
struct regional {int dummy; } ;
struct msg_parse {struct rrset_parse* rrset_last; struct rrset_parse* rrset_first; struct rrset_parse** hashtable; } ;
typedef int sldns_pkt_section ;
typedef int hashvalue_type ;


 int VAR_0 ;
 struct rrset_parse* FUNC_0 (struct regional*,int) ;

__attribute__((used)) static struct rrset_parse*
FUNC_1(struct msg_parse* VAR_1, uint8_t* VAR_2, size_t VAR_3,
 uint16_t VAR_4, uint16_t VAR_5, hashvalue_type VAR_6,
 uint32_t VAR_7, sldns_pkt_section VAR_8,
 struct regional* VAR_9)
{
 struct rrset_parse* VAR_10 = FUNC_0(VAR_9, sizeof(*VAR_10));
 if(!VAR_10) return ((void*)0);
 VAR_10->rrset_bucket_next = VAR_1->hashtable[VAR_6 & (VAR_0-1)];
 VAR_1->hashtable[VAR_6 & (VAR_0-1)] = VAR_10;
 VAR_10->rrset_all_next = 0;
 if(VAR_1->rrset_last)
  VAR_1->rrset_last->rrset_all_next = VAR_10;
 else VAR_1->rrset_first = VAR_10;
 VAR_1->rrset_last = VAR_10;
 VAR_10->hash = VAR_6;
 VAR_10->section = VAR_8;
 VAR_10->dname = VAR_2;
 VAR_10->dname_len = VAR_3;
 VAR_10->type = VAR_4;
 VAR_10->rrset_class = VAR_5;
 VAR_10->flags = VAR_7;
 VAR_10->rr_count = 0;
 VAR_10->size = 0;
 VAR_10->rr_first = 0;
 VAR_10->rr_last = 0;
 VAR_10->rrsig_count = 0;
 VAR_10->rrsig_first = 0;
 VAR_10->rrsig_last = 0;
 return VAR_10;
}
