
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ub_packed_rrset_key {int dummy; } ;
struct query_info {int dummy; } ;
struct nsec3_filter {int dummy; } ;
struct module_env {int scratch; } ;
struct ce_response {int nc_rr; scalar_t__ nc_rrset; int ce_len; int ce; } ;
typedef int rbtree_type ;
typedef enum sec_status { ____Placeholder_sec_status } sec_status ;


 int VAR_0 ;
 int FUNC_0 (struct module_env*,struct nsec3_filter*,int *,int *,size_t,struct ub_packed_rrset_key**,int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;
 int * FUNC_3 (int ,int ,int ,size_t*) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (struct module_env*,struct nsec3_filter*,int *,struct query_info*,int,struct ce_response*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static enum sec_status
FUNC_7(struct module_env* VAR_4, struct nsec3_filter* VAR_5,
 rbtree_type* VAR_6, struct query_info* VAR_7)
{
 struct ce_response VAR_8;
 uint8_t* VAR_9;
 size_t VAR_10;
 struct ub_packed_rrset_key* VAR_11;
 int VAR_12;
 enum sec_status VAR_13;




 VAR_13 = FUNC_5(VAR_4, VAR_5, VAR_6, VAR_7, 1, &VAR_8);
 if(VAR_13 != VAR_3) {
  if(VAR_13 == VAR_1)
   FUNC_6(VAR_0, "nsec3 nameerror proof: failed "
    "to prove a closest encloser");
  else FUNC_6(VAR_0, "nsec3 nameerror proof: closest "
    "nsec3 is an insecure delegation");
  return VAR_13;
 }
 FUNC_2(VAR_0, "nsec3 nameerror: proven ce=", VAR_8.ce,0,0);



 FUNC_1(VAR_8.ce);
 VAR_9 = FUNC_3(VAR_4->scratch, VAR_8.ce, VAR_8.ce_len, &VAR_10);
 if(!VAR_9 || !FUNC_0(VAR_4, VAR_5, VAR_6, VAR_9, VAR_10,
  &VAR_11, &VAR_12)) {
  FUNC_6(VAR_0, "nsec3 nameerror proof: could not prove "
   "that the applicable wildcard did not exist.");
  return VAR_1;
 }

 if(VAR_8.nc_rrset && FUNC_4(VAR_8.nc_rrset, VAR_8.nc_rr)) {
  FUNC_6(VAR_0, "nsec3 nameerror proof: nc has optout");
  return VAR_2;
 }
 return VAR_3;
}
