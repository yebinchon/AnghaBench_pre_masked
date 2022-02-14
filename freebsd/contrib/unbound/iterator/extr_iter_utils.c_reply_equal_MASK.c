
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_packed_rrset_key {int dummy; } ;
struct reply_info {scalar_t__ flags; scalar_t__ qdcount; scalar_t__ security; scalar_t__ an_numrrsets; scalar_t__ ns_numrrsets; scalar_t__ ar_numrrsets; int rrset_count; int rrsets; } ;
struct regional {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ub_packed_rrset_key**,scalar_t__,int,int ) ;
 scalar_t__ FUNC_2 (struct regional*,int ,int) ;
 int FUNC_3 (struct regional*) ;
 int FUNC_4 (struct regional*,struct ub_packed_rrset_key*,struct ub_packed_rrset_key*) ;
 int VAR_0 ;
 int FUNC_5 (struct ub_packed_rrset_key*,struct ub_packed_rrset_key*) ;

int
FUNC_6(struct reply_info* VAR_1, struct reply_info* VAR_2, struct regional* VAR_3)
{
 size_t VAR_4;
 struct ub_packed_rrset_key** VAR_5, **VAR_6;
 if(VAR_1->flags != VAR_2->flags ||
  VAR_1->qdcount != VAR_2->qdcount ||





  VAR_1->security != VAR_2->security ||
  VAR_1->an_numrrsets != VAR_2->an_numrrsets ||
  VAR_1->ns_numrrsets != VAR_2->ns_numrrsets ||
  VAR_1->ar_numrrsets != VAR_2->ar_numrrsets ||
  VAR_1->rrset_count != VAR_2->rrset_count)
  return 0;



 VAR_5 = (struct ub_packed_rrset_key**)FUNC_2(
  VAR_3, VAR_1->rrsets, sizeof(*VAR_5)*VAR_1->rrset_count);
 if(!VAR_5) return 0;
 FUNC_0(VAR_1->an_numrrsets + VAR_1->ns_numrrsets + VAR_1->ar_numrrsets <=
  VAR_1->rrset_count);
 FUNC_1(VAR_5 + VAR_1->an_numrrsets, VAR_1->ns_numrrsets,
  sizeof(*VAR_5), VAR_0);
 FUNC_1(VAR_5 + VAR_1->an_numrrsets + VAR_1->ns_numrrsets, VAR_1->ar_numrrsets,
  sizeof(*VAR_5), VAR_0);

 VAR_6 = (struct ub_packed_rrset_key**)FUNC_2(
  VAR_3, VAR_2->rrsets, sizeof(*VAR_6)*VAR_2->rrset_count);
 if(!VAR_6) {
  FUNC_3(VAR_3);
  return 0;
 }
 FUNC_0(VAR_2->an_numrrsets + VAR_2->ns_numrrsets + VAR_2->ar_numrrsets <=
  VAR_2->rrset_count);
 FUNC_1(VAR_6 + VAR_2->an_numrrsets, VAR_2->ns_numrrsets,
  sizeof(*VAR_6), VAR_0);
 FUNC_1(VAR_6 + VAR_2->an_numrrsets + VAR_2->ns_numrrsets, VAR_2->ar_numrrsets,
  sizeof(*VAR_6), VAR_0);


 for(VAR_4=0; VAR_4<VAR_1->rrset_count; VAR_4++) {
  if(!FUNC_5(VAR_5[VAR_4], VAR_6[VAR_4])) {
   if(!FUNC_4(VAR_3, VAR_5[VAR_4],
    VAR_6[VAR_4])) {
    FUNC_3(VAR_3);
    return 0;
   }
  }
 }
 FUNC_3(VAR_3);
 return 1;
}
