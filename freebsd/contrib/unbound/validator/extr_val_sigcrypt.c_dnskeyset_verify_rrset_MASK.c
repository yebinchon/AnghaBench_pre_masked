
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct val_env {int dummy; } ;
struct ub_packed_rrset_key {int dummy; } ;
struct module_qstate {int dummy; } ;
struct module_env {int * now; } ;
struct algo_needs {int dummy; } ;
typedef int sldns_pkt_section ;
typedef int rbtree_type ;
typedef enum sec_status { ____Placeholder_sec_status } sec_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct algo_needs*,int *) ;
 int FUNC_1 (struct algo_needs*) ;
 scalar_t__ FUNC_2 (struct algo_needs*) ;
 int FUNC_3 (struct module_env*,int,char**,char*) ;
 int FUNC_4 (struct algo_needs*,int ) ;
 scalar_t__ FUNC_5 (struct algo_needs*,int ) ;
 int FUNC_6 (struct module_env*,struct val_env*,int ,struct ub_packed_rrset_key*,struct ub_packed_rrset_key*,size_t,int **,char**,int ,struct module_qstate*) ;
 scalar_t__ FUNC_7 (struct ub_packed_rrset_key*,size_t) ;
 size_t FUNC_8 (struct ub_packed_rrset_key*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (int ,char*,...) ;

enum sec_status
FUNC_10(struct module_env* VAR_5, struct val_env* VAR_6,
 struct ub_packed_rrset_key* VAR_7, struct ub_packed_rrset_key* VAR_8,
 uint8_t* VAR_9, char** VAR_10, sldns_pkt_section VAR_11,
 struct module_qstate* VAR_12)
{
 enum sec_status VAR_13;
 size_t VAR_14, VAR_15;
 rbtree_type* VAR_16 = ((void*)0);

 struct algo_needs VAR_17;
 int VAR_18;

 VAR_15 = FUNC_8(VAR_7);
 if(VAR_15 == 0) {
  FUNC_9(VAR_1, "rrset failed to verify due to a lack of "
   "signatures");
  *VAR_10 = "no signatures";
  return VAR_2;
 }

 if(VAR_9) {
  FUNC_0(&VAR_17, VAR_9);
  if(FUNC_2(&VAR_17) == 0) {
   FUNC_9(VAR_1, "zone has no known algorithms");
   *VAR_10 = "zone has no known algorithms";
   return VAR_3;
  }
 }
 for(VAR_14=0; VAR_14<VAR_15; VAR_14++) {
  VAR_13 = FUNC_6(VAR_5, VAR_6, *VAR_5->now, VAR_7,
   VAR_8, VAR_14, &VAR_16, VAR_10, VAR_11, VAR_12);

  if(VAR_13 == VAR_4) {
   if(!VAR_9)
    return VAR_13;
   else if(FUNC_5(&VAR_17,
    (uint8_t)FUNC_7(VAR_7, VAR_14)))
    return VAR_13;
  } else if(VAR_9 && VAR_13 == VAR_2) {
   FUNC_4(&VAR_17,
    (uint8_t)FUNC_7(VAR_7, VAR_14));
  }
 }
 if(VAR_9 && (VAR_18=FUNC_1(&VAR_17)) != 0) {
  FUNC_9(VAR_0, "rrset failed to verify: "
   "no valid signatures for %d algorithms",
   (int)FUNC_2(&VAR_17));
  FUNC_3(VAR_5, VAR_18, VAR_10, "no signatures");
 } else {
  FUNC_9(VAR_0, "rrset failed to verify: "
   "no valid signatures");
 }
 return VAR_2;
}
