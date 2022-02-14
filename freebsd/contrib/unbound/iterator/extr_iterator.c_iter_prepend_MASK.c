
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ub_packed_rrset_key {int dummy; } ;
struct regional {int dummy; } ;
struct iter_qstate {struct iter_prep_list* ns_prepend_list; struct iter_prep_list* an_prepend_list; } ;
struct iter_prep_list {struct ub_packed_rrset_key* rrset; struct iter_prep_list* next; } ;
struct dns_msg {TYPE_1__* rep; } ;
struct TYPE_2__ {size_t rrset_count; int an_numrrsets; size_t ns_numrrsets; int ar_numrrsets; struct ub_packed_rrset_key** rrsets; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ub_packed_rrset_key**,struct ub_packed_rrset_key**,int) ;
 scalar_t__ FUNC_1 (struct ub_packed_rrset_key**,size_t,struct ub_packed_rrset_key*) ;
 struct ub_packed_rrset_key** FUNC_2 (struct regional*,size_t) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_4(struct iter_qstate* VAR_2, struct dns_msg* VAR_3,
 struct regional* VAR_4)
{
 struct iter_prep_list* VAR_5;
 struct ub_packed_rrset_key** VAR_6;
 size_t VAR_7 = 0, VAR_8 = 0;;
 for(VAR_5 = VAR_2->an_prepend_list; VAR_5; VAR_5 = VAR_5->next)
  VAR_7++;
 for(VAR_5 = VAR_2->ns_prepend_list; VAR_5; VAR_5 = VAR_5->next)
  VAR_8++;
 if(VAR_7 + VAR_8 == 0)
  return 1;
 FUNC_3(VAR_1, "prepending %d rrsets", (int)VAR_7 + (int)VAR_8);
 if(VAR_7 > VAR_0 || VAR_8 > VAR_0 ||
  VAR_3->rep->rrset_count > VAR_0) return 0;
 VAR_6 = FUNC_2(VAR_4, (VAR_7+VAR_8+VAR_3->rep->rrset_count) *
  sizeof(struct ub_packed_rrset_key*));
 if(!VAR_6)
  return 0;

 VAR_7 = 0;
 for(VAR_5 = VAR_2->an_prepend_list; VAR_5; VAR_5 = VAR_5->next) {
  VAR_6[VAR_7++] = VAR_5->rrset;
 }
 FUNC_0(VAR_6+VAR_7, VAR_3->rep->rrsets, VAR_3->rep->an_numrrsets *
  sizeof(struct ub_packed_rrset_key*));

 VAR_8 = 0;
 for(VAR_5 = VAR_2->ns_prepend_list; VAR_5; VAR_5 = VAR_5->next) {
  if(FUNC_1(VAR_6+VAR_3->rep->an_numrrsets+VAR_7,
   VAR_8, VAR_5->rrset) || FUNC_1(
   VAR_3->rep->rrsets+VAR_3->rep->an_numrrsets,
   VAR_3->rep->ns_numrrsets, VAR_5->rrset))
   continue;
  VAR_6[VAR_3->rep->an_numrrsets + VAR_7 + VAR_8++] = VAR_5->rrset;
 }
 FUNC_0(VAR_6 + VAR_7 + VAR_3->rep->an_numrrsets + VAR_8,
  VAR_3->rep->rrsets + VAR_3->rep->an_numrrsets,
  (VAR_3->rep->ns_numrrsets + VAR_3->rep->ar_numrrsets) *
  sizeof(struct ub_packed_rrset_key*));



 VAR_3->rep->rrset_count += VAR_7 + VAR_8;
 VAR_3->rep->an_numrrsets += VAR_7;
 VAR_3->rep->ns_numrrsets += VAR_8;
 VAR_3->rep->rrsets = VAR_6;
 return 1;
}
