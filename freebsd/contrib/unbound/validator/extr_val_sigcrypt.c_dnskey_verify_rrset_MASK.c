
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct val_env {int dummy; } ;
struct ub_packed_rrset_key {int dummy; } ;
struct module_qstate {int dummy; } ;
struct module_env {int * now; int scratch_buffer; int scratch; } ;
typedef int sldns_pkt_section ;
typedef int rbtree_type ;
typedef enum sec_status { ____Placeholder_sec_status } sec_status ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ub_packed_rrset_key*,size_t) ;
 int FUNC_1 (struct ub_packed_rrset_key*,size_t) ;
 int FUNC_2 (int ,int ,struct val_env*,int ,struct ub_packed_rrset_key*,struct ub_packed_rrset_key*,size_t,size_t,int **,int*,char**,int ,struct module_qstate*) ;
 int FUNC_3 (struct ub_packed_rrset_key*,size_t) ;
 scalar_t__ FUNC_4 (struct ub_packed_rrset_key*,size_t) ;
 size_t FUNC_5 (struct ub_packed_rrset_key*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ,char*) ;

enum sec_status
FUNC_7(struct module_env* VAR_4, struct val_env* VAR_5,
        struct ub_packed_rrset_key* VAR_6, struct ub_packed_rrset_key* VAR_7,
 size_t VAR_8, char** VAR_9, sldns_pkt_section VAR_10,
 struct module_qstate* VAR_11)
{
 enum sec_status VAR_12;
 size_t VAR_13, VAR_14, VAR_15 = 0;
 rbtree_type* VAR_16 = ((void*)0);
 int VAR_17 = 0;
 uint16_t VAR_18 = FUNC_0(VAR_7, VAR_8);
 int VAR_19 = FUNC_1(VAR_7, VAR_8);

 VAR_14 = FUNC_5(VAR_6);
 if(VAR_14 == 0) {
  FUNC_6(VAR_1, "rrset failed to verify due to a lack of "
   "signatures");
  *VAR_9 = "no signatures";
  return VAR_2;
 }
 for(VAR_13=0; VAR_13<VAR_14; VAR_13++) {

  if(VAR_19 != FUNC_3(VAR_6, VAR_13) ||
   VAR_18 != FUNC_4(VAR_6, VAR_13))
   continue;
  VAR_17 = 0;
  VAR_12 = FUNC_2(VAR_4->scratch,
   VAR_4->scratch_buffer, VAR_5, *VAR_4->now, VAR_6,
   VAR_7, VAR_8, VAR_13, &VAR_16, &VAR_17, VAR_9,
   VAR_10, VAR_11);
  if(VAR_12 == VAR_3)
   return VAR_12;
  VAR_15 ++;
 }
 FUNC_6(VAR_0, "rrset failed to verify: all signatures are bogus");
 if(!VAR_15) *VAR_9 = "signature missing";
 return VAR_2;
}
