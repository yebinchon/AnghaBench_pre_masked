
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct val_env {int dummy; } ;
struct ub_packed_rrset_key {int dummy; } ;
struct module_qstate {int dummy; } ;
struct module_env {int dummy; } ;
typedef enum sec_status { ____Placeholder_sec_status } sec_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct module_env*,scalar_t__,char**,char*) ;
 scalar_t__ FUNC_1 (struct ub_packed_rrset_key*,size_t) ;
 scalar_t__ FUNC_2 (struct ub_packed_rrset_key*,size_t) ;
 int FUNC_3 (struct module_env*,struct val_env*,struct ub_packed_rrset_key*,struct ub_packed_rrset_key*,size_t,char**,int ,struct module_qstate*) ;
 int FUNC_4 (struct module_env*,struct ub_packed_rrset_key*,size_t,struct ub_packed_rrset_key*,size_t) ;
 scalar_t__ FUNC_5 (struct ub_packed_rrset_key*,size_t) ;
 scalar_t__ FUNC_6 (struct ub_packed_rrset_key*,size_t) ;
 size_t FUNC_7 (struct ub_packed_rrset_key*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (int ,char*,...) ;

__attribute__((used)) static enum sec_status
FUNC_9(struct module_env* VAR_4, struct val_env* VAR_5,
 struct ub_packed_rrset_key* VAR_6,
        struct ub_packed_rrset_key* VAR_7, size_t VAR_8, char** VAR_9,
 struct module_qstate* VAR_10)
{
 enum sec_status VAR_11 = VAR_2;
 size_t VAR_12, VAR_13, VAR_14 = 0, VAR_15 = 0;
 VAR_13 = FUNC_7(VAR_6);
 for(VAR_12=0; VAR_12<VAR_13; VAR_12++) {

  if(FUNC_5(VAR_7, VAR_8)
     != FUNC_2(VAR_6, VAR_12)
     || FUNC_1(VAR_6, VAR_12)
     != FUNC_6(VAR_7, VAR_8)) {
   continue;
  }
  VAR_14++;
  FUNC_8(VAR_1, "attempt DS match algo %d keytag %d",
   FUNC_5(VAR_7, VAR_8),
   FUNC_6(VAR_7, VAR_8));



  if(!FUNC_4(VAR_4, VAR_6, VAR_12, VAR_7,
   VAR_8)) {
   FUNC_8(VAR_1, "DS match attempt failed");
   continue;
  }
  VAR_15++;
  FUNC_8(VAR_1, "DS match digest ok, trying signature");



  VAR_11 = FUNC_3(VAR_4, VAR_5, VAR_6,
   VAR_6, VAR_12, VAR_9, VAR_0, VAR_10);
  if(VAR_11 == VAR_3) {
   return VAR_11;
  }

 }
 if(VAR_14 == 0)
  FUNC_0(VAR_4, FUNC_5(VAR_7, VAR_8),
   VAR_9, "no keys have a DS");
 else if(VAR_15 == 0)
  *VAR_9 = "DS hash mismatches key";
 else if(!*VAR_9)
  *VAR_9 = "keyset not secured by DNSKEY that matches DS";
 return VAR_2;
}
