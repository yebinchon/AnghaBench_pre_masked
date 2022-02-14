
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct val_env {int dummy; } ;
struct ub_packed_rrset_key {int dummy; } ;
struct query_info {scalar_t__ qtype; int qname_len; int qname; } ;
struct nsec3_filter {int zone; } ;
struct module_qstate {int dummy; } ;
struct module_env {int dummy; } ;
struct key_entry_key {int dummy; } ;
struct ce_response {int nc_rrset; int nc_rr; } ;
typedef int rbtree_type ;
typedef enum sec_status { ____Placeholder_sec_status } sec_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nsec3_filter*,struct ub_packed_rrset_key**,size_t,struct query_info*) ;
 scalar_t__ FUNC_1 (struct module_env*,struct nsec3_filter*,int *,int ,int,struct ub_packed_rrset_key**,int*) ;
 int FUNC_2 (struct key_entry_key*) ;
 int FUNC_3 (struct module_env*,struct val_env*,struct ub_packed_rrset_key**,size_t,struct key_entry_key*,char**,struct module_qstate*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 (struct ub_packed_rrset_key*,int,scalar_t__) ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (struct val_env*,struct nsec3_filter*,struct key_entry_key*) ;
 int FUNC_8 (struct module_env*,struct nsec3_filter*,int *,struct query_info*,int,struct ce_response*) ;
 int FUNC_9 (int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (int ,char*) ;

enum sec_status
FUNC_11(struct module_env* VAR_9, struct val_env* VAR_10,
 struct ub_packed_rrset_key** VAR_11, size_t VAR_12,
 struct query_info* VAR_13, struct key_entry_key* VAR_14, char** VAR_15,
 struct module_qstate* VAR_16)
{
 rbtree_type VAR_17;
 struct nsec3_filter VAR_18;
 struct ce_response VAR_19;
 struct ub_packed_rrset_key* VAR_20;
 int VAR_21;
 FUNC_4(VAR_13->qtype == VAR_0);

 if(!VAR_11 || VAR_12 == 0 || !VAR_14 || !FUNC_2(VAR_14)) {
  *VAR_15 = "no valid NSEC3s";
  return VAR_5;
 }
 if(!FUNC_3(VAR_9, VAR_10, VAR_11, VAR_12, VAR_14, VAR_15, VAR_16))
  return VAR_5;
 FUNC_9(&VAR_17, &VAR_4);
 FUNC_0(&VAR_18, VAR_11, VAR_12, VAR_13);
 if(!VAR_18.zone) {
  *VAR_15 = "no NSEC3 records";
  return VAR_5;
 }
 if(FUNC_7(VAR_10, &VAR_18, VAR_14))
  return VAR_7;



 if(FUNC_1(VAR_9, &VAR_18, &VAR_17, VAR_13->qname, VAR_13->qname_len,
  &VAR_20, &VAR_21)) {



  if(FUNC_6(VAR_20, VAR_21, VAR_2) &&
   VAR_13->qname_len != 1) {
   FUNC_10(VAR_3, "nsec3 provenods: NSEC3 is from"
    " child zone, bogus");
   *VAR_15 = "NSEC3 from child zone";
   return VAR_5;
  } else if(FUNC_6(VAR_20, VAR_21, VAR_0)) {
   FUNC_10(VAR_3, "nsec3 provenods: NSEC3 has qtype"
    " DS, bogus");
   *VAR_15 = "NSEC3 has DS in bitmap";
   return VAR_5;
  }


  if(!FUNC_6(VAR_20, VAR_21, VAR_1))
   return VAR_6;

  return VAR_8;
 }


 if(FUNC_8(VAR_9, &VAR_18, &VAR_17, VAR_13, 1, &VAR_19)
  != VAR_8) {


  FUNC_10(VAR_3, "nsec3 provenods: did not match qname, "
            "nor found a proven closest encloser.");
  *VAR_15 = "no NSEC3 closest encloser";
  return VAR_5;
 }


 if(!VAR_19.nc_rrset) {
  FUNC_10(VAR_3, "nsec3 nods proof: no next closer nsec3");
  *VAR_15 = "no NSEC3 next closer";
  return VAR_5;
 }





 FUNC_4(VAR_19.nc_rrset);
 if(!FUNC_5(VAR_19.nc_rrset, VAR_19.nc_rr)) {
  FUNC_10(VAR_3, "nsec3 provenods: covering NSEC3 was not "
   "opt-out in an opt-out DS NOERROR/NODATA case.");
  *VAR_15 = "covering NSEC3 was not opt-out in an opt-out "
   "DS NOERROR/NODATA case";
  return VAR_5;
 }

 return VAR_7;
}
