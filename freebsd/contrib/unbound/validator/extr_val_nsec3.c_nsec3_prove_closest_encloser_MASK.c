
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct query_info {int qname_len; int qname; } ;
struct nsec3_filter {int dummy; } ;
struct module_env {int dummy; } ;
struct ce_response {int nc_rr; int nc_rrset; int ce; int ce_rr; int ce_rrset; } ;
typedef int rbtree_type ;
typedef enum sec_status { ____Placeholder_sec_status } sec_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct module_env*,struct nsec3_filter*,int *,int *,size_t,int *,int *) ;
 int FUNC_1 (int ,char*,int ,int ,int ) ;
 int FUNC_2 (struct ce_response*,int ,int) ;
 int FUNC_3 (int ,int ,int ,int **,size_t*) ;
 int FUNC_4 (struct module_env*,struct nsec3_filter*,int *,struct query_info*,struct ce_response*) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static enum sec_status
FUNC_8(struct module_env* VAR_8, struct nsec3_filter* VAR_9,
 rbtree_type* VAR_10, struct query_info* VAR_11, int VAR_12,
 struct ce_response* VAR_13)
{
 uint8_t* VAR_14;
 size_t VAR_15;

 FUNC_2(VAR_13, 0, sizeof(*VAR_13));

 if(!FUNC_4(VAR_8, VAR_9, VAR_10, VAR_11, VAR_13)) {
  FUNC_7(VAR_4, "nsec3 proveClosestEncloser: could "
   "not find a candidate for the closest encloser.");
  return VAR_5;
 }
 FUNC_1(VAR_4, "ce candidate", VAR_13->ce, 0, 0);

 if(FUNC_6(VAR_13->ce, VAR_11->qname) == 0) {
  if(VAR_12) {
   FUNC_7(VAR_4, "nsec3 proveClosestEncloser: "
    "proved that qname existed, bad");
   return VAR_5;
  }


  return VAR_7;
 }




 if(FUNC_5(VAR_13->ce_rrset, VAR_13->ce_rr, VAR_2) &&
  !FUNC_5(VAR_13->ce_rrset, VAR_13->ce_rr, VAR_3)) {
  if(!FUNC_5(VAR_13->ce_rrset, VAR_13->ce_rr, VAR_1)) {
   FUNC_7(VAR_4, "nsec3 proveClosestEncloser: "
    "closest encloser is insecure delegation");
   return VAR_6;
  }
  FUNC_7(VAR_4, "nsec3 proveClosestEncloser: closest "
   "encloser was a delegation, bad");
  return VAR_5;
 }
 if(FUNC_5(VAR_13->ce_rrset, VAR_13->ce_rr, VAR_0)) {
  FUNC_7(VAR_4, "nsec3 proveClosestEncloser: closest "
   "encloser was a DNAME, bad");
  return VAR_5;
 }


 FUNC_3(VAR_11->qname, VAR_11->qname_len, VAR_13->ce, &VAR_14, &VAR_15);
 if(!FUNC_0(VAR_8, VAR_9, VAR_10, VAR_14, VAR_15,
  &VAR_13->nc_rrset, &VAR_13->nc_rr)) {
  FUNC_7(VAR_4, "nsec3: Could not find proof that the "
            "candidate encloser was the closest encloser");
  return VAR_5;
 }
 return VAR_7;
}
