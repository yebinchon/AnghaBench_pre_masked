
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct val_env {int dummy; } ;
struct ub_packed_rrset_key {int dummy; } ;
struct trust_anchor {int dnskey_rrset; int ds_rrset; TYPE_1__* autr; int dclass; int name; int lock; } ;
struct module_qstate {int dummy; } ;
struct module_env {scalar_t__* now; } ;
struct TYPE_2__ {scalar_t__ query_failed; scalar_t__ last_success; scalar_t__ last_queried; scalar_t__ revoked; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct trust_anchor*) ;
 int FUNC_1 (struct trust_anchor*) ;
 int FUNC_2 (struct module_env*,struct trust_anchor*,int*) ;
 int FUNC_3 (struct module_env*,struct trust_anchor*,struct ub_packed_rrset_key*) ;
 int FUNC_4 (struct module_env*,struct trust_anchor*) ;
 int FUNC_5 (struct module_env*,struct val_env*,struct trust_anchor*,struct ub_packed_rrset_key*,int*,struct module_qstate*) ;
 int FUNC_6 (struct module_env*,struct trust_anchor*,int*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ,char*,int ,int ,int ) ;
 int FUNC_11 (struct module_env*,struct trust_anchor*,struct ub_packed_rrset_key*) ;
 int FUNC_12 (struct module_env*,struct val_env*,struct trust_anchor*,struct ub_packed_rrset_key*,int*) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (struct module_env*,struct val_env*,struct trust_anchor*,struct ub_packed_rrset_key*,struct module_qstate*) ;

int FUNC_15(struct module_env* VAR_2, struct val_env* VAR_3,
 struct trust_anchor* VAR_4, struct ub_packed_rrset_key* VAR_5,
 struct module_qstate* VAR_6)
{
 int VAR_7 = 0;
 FUNC_8(VAR_4 && VAR_4->autr);





 if(VAR_4->autr->revoked) {
  FUNC_10(VAR_1, "autotrust not processed, "
   "trust point revoked", VAR_4->name,
   VAR_0, VAR_4->dclass);
  FUNC_7(&VAR_4->lock);
  return 0;
 }


 VAR_4->autr->last_queried = *VAR_2->now;

 FUNC_10(VAR_1, "autotrust process for",
  VAR_4->name, VAR_0, VAR_4->dclass);

 FUNC_2(VAR_2, VAR_4, &VAR_7);
 if(VAR_7) {
  FUNC_13(VAR_1, "autotrust: morekeys, reassemble");
  if(!FUNC_0(VAR_4)) {
   FUNC_9("malloc failure assembling autotrust keys");
   return 1;
  }
 }

 if(!VAR_5) {
  FUNC_13(VAR_1, "autotrust: no dnskey rrset");




  return 1;
 }

 FUNC_5(VAR_2, VAR_3, VAR_4, VAR_5, &VAR_7, VAR_6);
 if(VAR_7) {
  FUNC_13(VAR_1, "autotrust: revokedkeys, reassemble");
  if(!FUNC_0(VAR_4)) {
   FUNC_9("malloc failure assembling autotrust keys");
   return 1;
  }
  if(!VAR_4->ds_rrset && !VAR_4->dnskey_rrset) {


   VAR_4->autr->last_success = *VAR_2->now;
   FUNC_3(VAR_2, VAR_4, VAR_5);
   return 0;
  }
 }

 if(!FUNC_14(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6)) {
  FUNC_13(VAR_1, "autotrust: dnskey did not verify.");


  if(VAR_4->autr->last_success) {
   VAR_4->autr->query_failed += 1;
   FUNC_4(VAR_2, VAR_4);
  }
  return 1;
 }

 VAR_4->autr->last_success = *VAR_2->now;
 VAR_4->autr->query_failed = 0;






 if(!FUNC_12(VAR_2, VAR_3, VAR_4, VAR_5, &VAR_7)) {
  FUNC_9("malloc failure in autotrust update_events. "
   "trust point unchanged.");
  return 1;
 }




 if(!FUNC_6(VAR_2, VAR_4, &VAR_7)) {
  FUNC_9("malloc failure in autotrust do_statetable. "
   "trust point unchanged.");
  return 1;
 }

 FUNC_1(VAR_4);
 if(!FUNC_11(VAR_2, VAR_4, VAR_5))
  return 0;
 FUNC_4(VAR_2, VAR_4);
 if(VAR_7) {
  FUNC_13(VAR_1, "autotrust: changed, reassemble");
  if(!FUNC_0(VAR_4)) {
   FUNC_9("malloc failure assembling autotrust keys");
   return 1;
  }
  if(!VAR_4->ds_rrset && !VAR_4->dnskey_rrset) {

   FUNC_3(VAR_2, VAR_4, VAR_5);
   return 0;
  }
 } else FUNC_13(VAR_1, "autotrust: no changes");

 return 1;
}
