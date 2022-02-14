
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct val_env {int dummy; } ;
struct TYPE_2__ {int type; int rrset_class; int dname; } ;
struct ub_packed_rrset_key {TYPE_1__ rk; } ;
struct reply_info {size_t an_numrrsets; int security; size_t ns_numrrsets; struct ub_packed_rrset_key** rrsets; } ;
struct query_info {scalar_t__ qtype; } ;
struct module_env {int dummy; } ;
struct key_entry_key {int dummy; } ;
typedef enum sec_status { ____Placeholder_sec_status } sec_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct module_env*,struct val_env*,struct ub_packed_rrset_key**,size_t,struct query_info*,struct key_entry_key*,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (struct ub_packed_rrset_key*,struct query_info*,int *) ;
 int FUNC_4 (struct ub_packed_rrset_key*,int **,size_t*) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static void
FUNC_6(struct module_env* VAR_9, struct val_env* VAR_10,
 struct query_info* VAR_11, struct reply_info* VAR_12,
 struct key_entry_key* VAR_13)
{
 uint8_t* VAR_14 = ((void*)0);
 size_t VAR_15;
 int VAR_16 = 0;
 int VAR_17 = 0;
 size_t VAR_18;
 struct ub_packed_rrset_key* VAR_19;


 for(VAR_18=0; VAR_18<VAR_12->an_numrrsets; VAR_18++) {
  VAR_19 = VAR_12->rrsets[VAR_18];




  if(!FUNC_4(VAR_19, &VAR_14, &VAR_15)) {
   FUNC_0(VAR_5, "Cname response has "
    "inconsistent wildcard sigs:", VAR_19->rk.dname,
    FUNC_2(VAR_19->rk.type), FUNC_2(VAR_19->rk.rrset_class));
   VAR_12->security = VAR_6;
   return;
  }




  if(VAR_11->qtype != VAR_1 &&
   FUNC_2(VAR_19->rk.type) == VAR_1 && VAR_14) {
   FUNC_0(VAR_5, "cannot validate a "
    "wildcarded DNAME:", VAR_19->rk.dname,
    FUNC_2(VAR_19->rk.type), FUNC_2(VAR_19->rk.rrset_class));
   VAR_12->security = VAR_6;
   return;
  }




  if (FUNC_2(VAR_19->rk.type) == VAR_0) {
   break;
  }
 }


 for(VAR_18=VAR_12->an_numrrsets; VAR_18<VAR_12->an_numrrsets+
  VAR_12->ns_numrrsets; VAR_18++) {
  VAR_19 = VAR_12->rrsets[VAR_18];





  if(VAR_14 != ((void*)0) && FUNC_2(VAR_19->rk.type) == VAR_2) {
   if(FUNC_3(VAR_19, VAR_11, VAR_14)) {
    VAR_16 = 1;
   }

  }



  if(VAR_14 != ((void*)0) && FUNC_2(VAR_19->rk.type) == VAR_3) {
   VAR_17 = 1;
  }
 }




 if(VAR_14 != ((void*)0) && !VAR_16 && VAR_17) {
  enum sec_status VAR_20 = FUNC_1(VAR_9, VAR_10,
   VAR_12->rrsets+VAR_12->an_numrrsets,
   VAR_12->ns_numrrsets, VAR_11, VAR_13, VAR_14);
  if(VAR_20 == VAR_7) {
   FUNC_5(VAR_4, "wildcard CNAME response is "
    "insecure");
   VAR_12->security = VAR_7;
   return;
  } else if(VAR_20 == VAR_8)
   VAR_16 = 1;
 }



 if(VAR_14 != ((void*)0) && !VAR_16) {
  FUNC_5(VAR_5, "CNAME response was wildcard "
   "expansion and did not prove original data "
   "did not exist");
  VAR_12->security = VAR_6;
  return;
 }

 FUNC_5(VAR_4, "Successfully validated CNAME response");
 VAR_12->security = VAR_8;
}
