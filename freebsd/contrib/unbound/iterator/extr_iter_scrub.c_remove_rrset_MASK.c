
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rrset_parse {scalar_t__ dname_len; int section; struct rrset_parse* rrset_all_next; int rrset_class; int type; int dname; } ;
struct msg_parse {int ar_rrsets; int ns_rrsets; int an_rrsets; int rrset_count; struct rrset_parse* rrset_last; struct rrset_parse* rrset_first; } ;
typedef int sldns_buffer ;


 scalar_t__ VAR_0 ;



 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,char const*,int *,int ,int ) ;
 int FUNC_3 (struct msg_parse*,struct rrset_parse*) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_5(const char* VAR_3, sldns_buffer* VAR_4, struct msg_parse* VAR_5,
 struct rrset_parse* VAR_6, struct rrset_parse** VAR_7)
{
 if(VAR_2 >= VAR_1 && VAR_3
  && (*VAR_7)->dname_len <= VAR_0) {
  uint8_t VAR_8[VAR_0+1];
  FUNC_0(VAR_4, VAR_8, (*VAR_7)->dname);
  FUNC_2(VAR_1, VAR_3, VAR_8,
   (*VAR_7)->type, FUNC_4((*VAR_7)->rrset_class));
 }
 if(VAR_6)
  VAR_6->rrset_all_next = (*VAR_7)->rrset_all_next;
 else VAR_5->rrset_first = (*VAR_7)->rrset_all_next;
 if(VAR_5->rrset_last == *VAR_7)
  VAR_5->rrset_last = VAR_6;
 VAR_5->rrset_count --;
 switch((*VAR_7)->section) {
  case 129: VAR_5->an_rrsets--; break;
  case 128: VAR_5->ns_rrsets--; break;
  case 130: VAR_5->ar_rrsets--; break;
  default: FUNC_1(0);
 }
 FUNC_3(VAR_5, *VAR_7);
 *VAR_7 = (*VAR_7)->rrset_all_next;
}
