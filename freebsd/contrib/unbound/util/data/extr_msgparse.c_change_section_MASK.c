
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rrset_parse {int section; struct rrset_parse* rrset_all_next; } ;
struct msg_parse {int ar_rrsets; int ns_rrsets; struct rrset_parse* rrset_last; struct rrset_parse* rrset_first; int an_rrsets; } ;
typedef int sldns_pkt_section ;





 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct msg_parse* VAR_0, struct rrset_parse* VAR_1,
 sldns_pkt_section VAR_2)
{
 struct rrset_parse *VAR_3, *VAR_4;

 if(VAR_2 == VAR_1->section)
  return;
 VAR_3 = VAR_0->rrset_first;
 VAR_4 = 0;
 while(VAR_3) {
  if(VAR_3 == VAR_1) {
   if(VAR_4) VAR_4->rrset_all_next = VAR_3->rrset_all_next;
   else VAR_0->rrset_first = VAR_3->rrset_all_next;
   if(VAR_0->rrset_last == VAR_1)
    VAR_0->rrset_last = VAR_4;
   break;
  }
  VAR_4 = VAR_3;
  VAR_3 = VAR_3->rrset_all_next;
 }

 switch(VAR_1->section) {
  case 129: VAR_0->an_rrsets--; break;
  case 128: VAR_0->ns_rrsets--; break;
  case 130: VAR_0->ar_rrsets--; break;
  default: FUNC_0(0);
 }

 VAR_1->rrset_all_next = 0;
 if(VAR_0->rrset_last)
  VAR_0->rrset_last->rrset_all_next = VAR_1;
 else VAR_0->rrset_first = VAR_1;
 VAR_0->rrset_last = VAR_1;

 switch(VAR_2) {
  case 128: VAR_0->ns_rrsets++; break;
  case 130: VAR_0->ar_rrsets++; break;
  default: FUNC_0(0);
 }
 VAR_1->section = VAR_2;
}
