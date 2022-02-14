
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef int time_t ;
struct val_env {int dummy; } ;
struct ub_packed_rrset_key {int dummy; } ;
struct rbtree_type {int dummy; } ;
struct module_qstate {int dummy; } ;
struct module_env {int scratch_buffer; int scratch; } ;
typedef int sldns_pkt_section ;
typedef enum sec_status { ____Placeholder_sec_status } sec_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct ub_packed_rrset_key*,size_t) ;
 int FUNC_2 (struct ub_packed_rrset_key*,size_t) ;
 int FUNC_3 (int ,int ,struct val_env*,int ,struct ub_packed_rrset_key*,struct ub_packed_rrset_key*,size_t,size_t,struct rbtree_type**,int*,char**,int ,struct module_qstate*) ;
 size_t FUNC_4 (struct ub_packed_rrset_key*) ;
 int FUNC_5 (struct ub_packed_rrset_key*,size_t) ;
 scalar_t__ FUNC_6 (struct ub_packed_rrset_key*,size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int ,char*,...) ;

enum sec_status
FUNC_8(struct module_env* VAR_5, struct val_env* VAR_6,
 time_t VAR_7, struct ub_packed_rrset_key* VAR_8,
 struct ub_packed_rrset_key* VAR_9, size_t VAR_10,
 struct rbtree_type** VAR_11, char** VAR_12, sldns_pkt_section VAR_13,
 struct module_qstate* VAR_14)
{

 enum sec_status VAR_15 = VAR_2;
 uint16_t VAR_16 = FUNC_6(VAR_8, VAR_10);
 int VAR_17 = FUNC_5(VAR_8, VAR_10);
 size_t VAR_18, VAR_19 = FUNC_4(VAR_9);
 size_t VAR_20 = 0;
 int VAR_21 = 0;
 FUNC_7(VAR_0, "verify sig %d %d", (int)VAR_16, VAR_17);
 if(!FUNC_0(VAR_17)) {
  FUNC_7(VAR_1, "verify sig: unknown algorithm");
  return VAR_3;
 }

 for(VAR_18=0; VAR_18<VAR_19; VAR_18++) {

  if(VAR_17 != FUNC_2(VAR_9, VAR_18) ||
   VAR_16 != FUNC_1(VAR_9, VAR_18))
   continue;
  VAR_20 ++;


  VAR_15 = FUNC_3(VAR_5->scratch,
   VAR_5->scratch_buffer, VAR_6, VAR_7, VAR_8, VAR_9, VAR_18,
   VAR_10, VAR_11, &VAR_21, VAR_12, VAR_13, VAR_14);
  if(VAR_15 == VAR_4)
   return VAR_15;
 }
 if(VAR_20 == 0) {
  *VAR_12 = "signatures from unknown keys";
  FUNC_7(VAR_1, "verify: could not find appropriate key");
  return VAR_2;
 }
 return VAR_2;
}
