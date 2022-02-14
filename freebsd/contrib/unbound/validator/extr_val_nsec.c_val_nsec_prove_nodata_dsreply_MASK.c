
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int time_t ;
struct val_env {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; int dname; } ;
struct ub_packed_rrset_key {TYPE_1__ rk; } ;
struct reply_info {size_t an_numrrsets; size_t ns_numrrsets; struct ub_packed_rrset_key** rrsets; } ;
struct query_info {int qname; int qclass; int qname_len; } ;
struct module_qstate {int dummy; } ;
struct module_env {int dummy; } ;
struct key_entry_key {int dummy; } ;
typedef enum sec_status { ____Placeholder_sec_status } sec_status ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (int ,struct ub_packed_rrset_key*) ;
 scalar_t__ FUNC_3 (struct ub_packed_rrset_key*,struct query_info*,int **) ;
 int FUNC_4 (struct module_env*,struct val_env*,struct ub_packed_rrset_key*,struct key_entry_key*,char**,struct module_qstate*) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 struct ub_packed_rrset_key* FUNC_6 (struct reply_info*,int ,int ,int ,int ) ;
 int FUNC_7 (struct ub_packed_rrset_key*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (struct ub_packed_rrset_key*) ;
 scalar_t__ FUNC_9 (struct ub_packed_rrset_key*,int ) ;
 int FUNC_10 (struct ub_packed_rrset_key*,struct query_info*) ;
 int FUNC_11 (int ,char*) ;

enum sec_status
FUNC_12(struct module_env* VAR_6, struct val_env* VAR_7,
 struct query_info* VAR_8, struct reply_info* VAR_9,
 struct key_entry_key* VAR_10, time_t* VAR_11, char** VAR_12,
 struct module_qstate* VAR_13)
{
 struct ub_packed_rrset_key* VAR_14 = FUNC_6(
  VAR_9, VAR_8->qname, VAR_8->qname_len, VAR_0,
  VAR_8->qclass);
 enum sec_status VAR_15;
 size_t VAR_16;
 uint8_t* VAR_17 = ((void*)0), *VAR_18 = ((void*)0);
 int VAR_19 = 0;
 struct ub_packed_rrset_key* VAR_20 = ((void*)0);






 if(VAR_14) {
  if(!FUNC_4(VAR_6, VAR_7, VAR_14, VAR_10, VAR_12, VAR_13)) {
   FUNC_11(VAR_1, "NSEC RRset for the "
    "referral did not verify.");
   return VAR_2;
  }
  VAR_15 = FUNC_10(VAR_14, VAR_8);
  if(VAR_15 == VAR_2) {

   *VAR_12 = "NSEC does not prove absence of DS";
   return VAR_15;
  } else if(VAR_15 == VAR_3) {

   return VAR_15;
  } else if(VAR_15 == VAR_4) {

   *VAR_11 = FUNC_8(VAR_14);
   return VAR_15;
  }

 }





 for(VAR_16=VAR_9->an_numrrsets; VAR_16 < VAR_9->an_numrrsets+VAR_9->ns_numrrsets;
  VAR_16++) {
  if(VAR_9->rrsets[VAR_16]->rk.type != FUNC_1(VAR_0))
   continue;
  if(!FUNC_4(VAR_6, VAR_7, VAR_9->rrsets[VAR_16], VAR_10, VAR_12,
   VAR_13)) {
   FUNC_11(VAR_1, "NSEC for empty non-terminal "
    "did not verify.");
   return VAR_2;
  }
  if(FUNC_3(VAR_9->rrsets[VAR_16], VAR_8, &VAR_17)) {
   FUNC_11(VAR_1, "NSEC for empty non-terminal "
    "proved no DS.");
   *VAR_11 = FUNC_7(VAR_9->rrsets[VAR_16]);
   if(VAR_17 && FUNC_0(VAR_9->rrsets[VAR_16]->rk.dname))
    VAR_20 = VAR_9->rrsets[VAR_16];
   VAR_19 = 1;
  }
  if(FUNC_9(VAR_9->rrsets[VAR_16], VAR_8->qname)) {
   VAR_18 = FUNC_2(VAR_8->qname,
    VAR_9->rrsets[VAR_16]);
  }
 }
 if(VAR_17 && !VAR_18)
  VAR_19 = 0;
 else if(VAR_17 && VAR_18) {

  if(FUNC_5(VAR_17, VAR_18) != 0)
   VAR_19 = 0;
  else if(!VAR_20)
   VAR_19 = 0;
 }
 if(VAR_19) {
  if(VAR_17) {

   *VAR_12 = "NSEC for wildcard does not prove absence of DS";
   return FUNC_10(VAR_20, VAR_8);
  }

  return VAR_3;
 }


 return VAR_5;
}
