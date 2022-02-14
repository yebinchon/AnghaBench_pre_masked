
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rrset_parse {int hash; struct rrset_parse* rrset_bucket_next; } ;
struct msg_parse {struct rrset_parse** hashtable; } ;


 int VAR_0 ;

void
FUNC_0(struct msg_parse* VAR_1, struct rrset_parse* VAR_2)
{
 struct rrset_parse** VAR_3;
 VAR_3 = &VAR_1->hashtable[ VAR_2->hash & (VAR_0-1) ];
 while(*VAR_3) {
  if(*VAR_3 == VAR_2) {
   *VAR_3 = VAR_2->rrset_bucket_next;
   return;
  }
  VAR_3 = &( (*VAR_3)->rrset_bucket_next );
 }
}
