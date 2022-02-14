
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct val_env {int dummy; } ;
struct TYPE_2__ {scalar_t__ dname_len; int dname; } ;
struct ub_packed_rrset_key {TYPE_1__ rk; } ;
struct module_qstate {int dummy; } ;
struct module_env {int dummy; } ;
struct algo_needs {int dummy; } ;
typedef enum sec_status { ____Placeholder_sec_status } sec_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct algo_needs*,struct ub_packed_rrset_key*,int,int *) ;
 int FUNC_1 (struct algo_needs*) ;
 int FUNC_2 (struct module_env*,int,char**,char*) ;
 int FUNC_3 (struct algo_needs*,int ) ;
 scalar_t__ FUNC_4 (struct algo_needs*,int ) ;
 int FUNC_5 (struct ub_packed_rrset_key*,size_t) ;
 int FUNC_6 (struct ub_packed_rrset_key*,size_t) ;
 scalar_t__ FUNC_7 (struct ub_packed_rrset_key*,size_t) ;
 int FUNC_8 (struct ub_packed_rrset_key*,size_t) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 size_t FUNC_10 (struct ub_packed_rrset_key*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_11 (struct ub_packed_rrset_key*) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (struct module_env*,struct val_env*,struct ub_packed_rrset_key*,struct ub_packed_rrset_key*,size_t,char**,struct module_qstate*) ;

enum sec_status
FUNC_14(struct module_env* VAR_5, struct val_env* VAR_6,
 struct ub_packed_rrset_key* VAR_7,
 struct ub_packed_rrset_key* VAR_8, uint8_t* VAR_9, char** VAR_10,
 struct module_qstate* VAR_11)
{


 int VAR_12 = 0, VAR_13, VAR_14;
 struct algo_needs VAR_15;
 size_t VAR_16, VAR_17;
 enum sec_status VAR_18;

 if(VAR_7->rk.dname_len != VAR_8->rk.dname_len ||
  FUNC_9(VAR_7->rk.dname, VAR_8->rk.dname)
  != 0) {
  FUNC_12(VAR_1, "DNSKEY RRset did not match DS RRset "
   "by name");
  *VAR_10 = "DNSKEY RRset did not match DS RRset by name";
  return VAR_2;
 }

 if(VAR_9) {

  VAR_13 = FUNC_11(VAR_8);
  FUNC_0(&VAR_15, VAR_8, VAR_13, VAR_9);
 } else {

  VAR_13 = -1;
 }
 VAR_17 = FUNC_10(VAR_8);
 for(VAR_16=0; VAR_16<VAR_17; VAR_16++) {


  if(!FUNC_5(VAR_8, VAR_16) ||
   !FUNC_8(VAR_8, VAR_16) ||
   (VAR_9 && (FUNC_6(VAR_8, VAR_16) != VAR_13))) {
   continue;
  }




  VAR_12 = 1;

  VAR_18 = FUNC_13(VAR_5, VAR_6, VAR_7,
   VAR_8, VAR_16, VAR_10, VAR_11);
  if(VAR_18 == VAR_4) {
   if(!VAR_9 || FUNC_4(&VAR_15,
    (uint8_t)FUNC_7(VAR_8, VAR_16))) {
    FUNC_12(VAR_0, "DS matched DNSKEY.");
    return VAR_4;
   }
  } else if(VAR_9 && VAR_18 == VAR_2) {
   FUNC_3(&VAR_15,
    (uint8_t)FUNC_7(VAR_8, VAR_16));
  }
 }




 if(!VAR_12) {
  FUNC_12(VAR_0, "No usable DS records were found -- "
   "treating as insecure.");
  return VAR_3;
 }

 FUNC_12(VAR_1, "Failed to match any usable DS to a DNSKEY.");
 if(VAR_9 && (VAR_14=FUNC_1(&VAR_15)) != 0) {
  FUNC_2(VAR_5, VAR_14, VAR_10, "missing verification of "
   "DNSKEY signature");
 }
 return VAR_2;
}
