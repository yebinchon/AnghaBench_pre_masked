
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct val_env {int dummy; } ;
struct ub_packed_rrset_key {int dummy; } ;
struct query_info {int qname_len; int qname; } ;
struct nsec3_filter {int zone; } ;
struct module_env {int dummy; } ;
struct key_entry_key {int dummy; } ;
struct ce_response {size_t ce_len; int nc_rr; scalar_t__ nc_rrset; int * ce; } ;
typedef int rbtree_type ;
typedef enum sec_status { ____Placeholder_sec_status } sec_status ;
typedef int ce ;


 int VAR_0 ;
 int FUNC_0 (int *,size_t*) ;
 int FUNC_1 (struct nsec3_filter*,struct ub_packed_rrset_key**,size_t,struct query_info*) ;
 int FUNC_2 (struct module_env*,struct nsec3_filter*,int *,int *,size_t,scalar_t__*,int *) ;
 int FUNC_3 (struct key_entry_key*) ;
 int FUNC_4 (struct ce_response*,int ,int) ;
 int FUNC_5 (int ,int ,int *,int **,size_t*) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_7 (struct val_env*,struct nsec3_filter*,struct key_entry_key*) ;
 int FUNC_8 (int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (int ,char*) ;

enum sec_status
FUNC_10(struct module_env* VAR_5, struct val_env* VAR_6,
        struct ub_packed_rrset_key** VAR_7, size_t VAR_8,
 struct query_info* VAR_9, struct key_entry_key* VAR_10, uint8_t* VAR_11)
{
 rbtree_type VAR_12;
 struct nsec3_filter VAR_13;
 struct ce_response VAR_14;
 uint8_t* VAR_15;
 size_t VAR_16;
 size_t VAR_17;
 (void)FUNC_0(VAR_11, &VAR_17);

 if(!VAR_7 || VAR_8 == 0 || !VAR_10 || !FUNC_3(VAR_10))
  return VAR_2;
 FUNC_8(&VAR_12, &VAR_1);
 FUNC_1(&VAR_13, VAR_7, VAR_8, VAR_9);
 if(!VAR_13.zone)
  return VAR_2;
 if(FUNC_7(VAR_6, &VAR_13, VAR_10))
  return VAR_3;





 FUNC_4(&VAR_14, 0, sizeof(VAR_14));
 VAR_14.ce = VAR_11;
 VAR_14.ce_len = VAR_17;



 FUNC_5(VAR_9->qname, VAR_9->qname_len, VAR_14.ce, &VAR_15, &VAR_16);
 if(!FUNC_2(VAR_5, &VAR_13, &VAR_12, VAR_15, VAR_16,
  &VAR_14.nc_rrset, &VAR_14.nc_rr)) {
  FUNC_9(VAR_0, "proveWildcard: did not find a covering "
   "NSEC3 that covered the next closer name.");
  return VAR_2;
 }
 if(VAR_14.nc_rrset && FUNC_6(VAR_14.nc_rrset, VAR_14.nc_rr)) {
  FUNC_9(VAR_0, "proveWildcard: NSEC3 optout");
  return VAR_3;
 }
 return VAR_4;
}
