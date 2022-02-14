
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
typedef int needs ;
typedef enum sec_status { ____Placeholder_sec_status } sec_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct algo_needs*,struct ub_packed_rrset_key*,int *) ;
 int FUNC_1 (struct algo_needs*,struct ub_packed_rrset_key*,int,int *) ;
 int FUNC_2 (struct algo_needs*) ;
 int FUNC_3 (struct module_env*,int,char**,char*) ;
 int FUNC_4 (struct algo_needs*,int ) ;
 scalar_t__ FUNC_5 (struct algo_needs*,int ) ;
 int FUNC_6 (struct ub_packed_rrset_key*,size_t) ;
 scalar_t__ FUNC_7 (struct ub_packed_rrset_key*,size_t) ;
 int FUNC_8 (struct module_env*,struct val_env*,struct ub_packed_rrset_key*,struct ub_packed_rrset_key*,size_t,char**,int ,struct module_qstate*) ;
 int FUNC_9 (struct ub_packed_rrset_key*,size_t) ;
 int FUNC_10 (struct ub_packed_rrset_key*,size_t) ;
 scalar_t__ FUNC_11 (struct ub_packed_rrset_key*,size_t) ;
 int FUNC_12 (struct ub_packed_rrset_key*,size_t) ;
 int FUNC_13 (struct algo_needs*,int ,int) ;
 scalar_t__ FUNC_14 (int ,int ) ;
 size_t FUNC_15 (struct ub_packed_rrset_key*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_16 (struct ub_packed_rrset_key*) ;
 int FUNC_17 (int ,char*) ;
 int FUNC_18 (struct module_env*,struct val_env*,struct ub_packed_rrset_key*,struct ub_packed_rrset_key*,size_t,char**,struct module_qstate*) ;

enum sec_status
FUNC_19(struct module_env* VAR_6, struct val_env* VAR_7,
 struct ub_packed_rrset_key* VAR_8,
 struct ub_packed_rrset_key* VAR_9,
 struct ub_packed_rrset_key* VAR_10, uint8_t* VAR_11, char** VAR_12,
 struct module_qstate* VAR_13)
{


 int VAR_14 = 0, VAR_15 = 0, VAR_16;
 struct algo_needs VAR_17;
 size_t VAR_18, VAR_19;
 enum sec_status VAR_20;

 if(VAR_9 && (VAR_8->rk.dname_len != VAR_9->rk.dname_len ||
  FUNC_14(VAR_8->rk.dname, VAR_9->rk.dname)
  != 0)) {
  FUNC_17(VAR_2, "DNSKEY RRset did not match DS RRset "
   "by name");
  *VAR_12 = "DNSKEY RRset did not match DS RRset by name";
  return VAR_3;
 }
 if(VAR_10 && (VAR_8->rk.dname_len != VAR_10->rk.dname_len
      || FUNC_14(VAR_8->rk.dname, VAR_10->rk.dname)
  != 0)) {
  FUNC_17(VAR_2, "DNSKEY RRset did not match anchor RRset "
   "by name");
  *VAR_12 = "DNSKEY RRset did not match anchor RRset by name";
  return VAR_3;
 }

 if(VAR_9)
  VAR_15 = FUNC_16(VAR_9);
 if(VAR_11) {
  if(VAR_9)
   FUNC_1(&VAR_17, VAR_9, VAR_15, VAR_11);
  else FUNC_13(&VAR_17, 0, sizeof(VAR_17));
  if(VAR_10)
   FUNC_0(&VAR_17, VAR_10, VAR_11);
 }
 if(VAR_9) {
     VAR_19 = FUNC_15(VAR_9);
     for(VAR_18=0; VAR_18<VAR_19; VAR_18++) {


  if(!FUNC_9(VAR_9, VAR_18) ||
   !FUNC_12(VAR_9, VAR_18) ||
   FUNC_10(VAR_9, VAR_18) != VAR_15)
   continue;




  VAR_14 = 1;

  VAR_20 = FUNC_18(VAR_6, VAR_7, VAR_8,
   VAR_9, VAR_18, VAR_12, VAR_13);
  if(VAR_20 == VAR_5) {
   if(!VAR_11 || FUNC_5(&VAR_17,
    (uint8_t)FUNC_11(VAR_9, VAR_18))) {
    FUNC_17(VAR_1, "DS matched DNSKEY.");
    return VAR_5;
   }
  } else if(VAR_11 && VAR_20 == VAR_3) {
   FUNC_4(&VAR_17,
    (uint8_t)FUNC_11(VAR_9, VAR_18));
  }
     }
 }


 if(VAR_10) {
     VAR_19 = FUNC_15(VAR_10);
     for(VAR_18=0; VAR_18<VAR_19; VAR_18++) {

  if(!FUNC_6(VAR_10, VAR_18))
   continue;


  VAR_14 = 1;

  VAR_20 = FUNC_8(VAR_6, VAR_7, VAR_8,
   VAR_10, VAR_18, VAR_12, VAR_0, VAR_13);
  if(VAR_20 == VAR_5) {
   if(!VAR_11 || FUNC_5(&VAR_17,
    (uint8_t)FUNC_7(VAR_10, VAR_18))) {
    FUNC_17(VAR_1, "anchor matched DNSKEY.");
    return VAR_5;
   }
  } else if(VAR_11 && VAR_20 == VAR_3) {
   FUNC_4(&VAR_17,
    (uint8_t)FUNC_7(VAR_10, VAR_18));
  }
     }
 }


 if(!VAR_14) {
  FUNC_17(VAR_1, "No usable trust anchors were found -- "
   "treating as insecure.");
  return VAR_4;
 }

 FUNC_17(VAR_2, "Failed to match any usable anchor to a DNSKEY.");
 if(VAR_11 && (VAR_16=FUNC_2(&VAR_17)) != 0) {
  FUNC_3(VAR_6, VAR_16, VAR_12, "missing verification of "
   "DNSKEY signature");
 }
 return VAR_3;
}
