
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct val_env {int dummy; } ;
struct TYPE_2__ {int type; int rrset_class; int dname; } ;
struct ub_packed_rrset_key {TYPE_1__ rk; } ;
struct reply_info {int security; size_t an_numrrsets; size_t ns_numrrsets; struct ub_packed_rrset_key** rrsets; } ;
struct query_info {scalar_t__ qtype; } ;
struct module_env {int dummy; } ;
struct key_entry_key {int dummy; } ;
typedef enum sec_status { ____Placeholder_sec_status } sec_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct module_env*,struct val_env*,struct ub_packed_rrset_key**,size_t,struct query_info*,struct key_entry_key*,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (struct ub_packed_rrset_key*,struct query_info*,int *) ;
 int FUNC_5 (struct ub_packed_rrset_key*,int **,size_t*) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static void
FUNC_7(struct module_env* VAR_8, struct val_env* VAR_9,
 struct query_info* VAR_10, struct reply_info* VAR_11,
 struct key_entry_key* VAR_12)
{



 uint8_t* VAR_13 = ((void*)0);
 size_t VAR_14;
 int VAR_15 = 0;
 int VAR_16 = 0;
 size_t VAR_17;
 struct ub_packed_rrset_key* VAR_18;

 if(VAR_10->qtype != VAR_0) {
  FUNC_0("internal error: ANY validation called for non-ANY");
  VAR_11->security = VAR_5;
  return;
 }


 for(VAR_17=0; VAR_17<VAR_11->an_numrrsets; VAR_17++) {
  VAR_18 = VAR_11->rrsets[VAR_17];




  if(!FUNC_5(VAR_18, &VAR_13, &VAR_14)) {
   FUNC_1(VAR_4, "Positive ANY response"
    " has inconsistent wildcard sigs:",
    VAR_18->rk.dname, FUNC_3(VAR_18->rk.type),
    FUNC_3(VAR_18->rk.rrset_class));
   VAR_11->security = VAR_5;
   return;
  }
 }



 if(VAR_13 != ((void*)0))
   for(VAR_17=0; VAR_17<VAR_11->an_numrrsets+VAR_11->ns_numrrsets;
    VAR_17++) {
  VAR_18 = VAR_11->rrsets[VAR_17];





  if(FUNC_3(VAR_18->rk.type) == VAR_1) {
   if(FUNC_4(VAR_18, VAR_10, VAR_13)) {
    VAR_15 = 1;
   }

  }



  if(FUNC_3(VAR_18->rk.type) == VAR_2) {
   VAR_16 = 1;
  }
 }




 if(VAR_13 != ((void*)0) && !VAR_15 && VAR_16) {

  enum sec_status VAR_19 = FUNC_2(VAR_8, VAR_9,
   VAR_11->rrsets,
   VAR_11->an_numrrsets+VAR_11->ns_numrrsets,
   VAR_10, VAR_12, VAR_13);
  if(VAR_19 == VAR_6) {
   FUNC_6(VAR_3, "Positive ANY wildcard response is "
    "insecure");
   VAR_11->security = VAR_6;
   return;
  } else if(VAR_19 == VAR_7)
   VAR_15 = 1;
 }



 if(VAR_13 != ((void*)0) && !VAR_15) {
  FUNC_6(VAR_4, "positive ANY response was wildcard "
   "expansion and did not prove original data "
   "did not exist");
  VAR_11->security = VAR_5;
  return;
 }

 FUNC_6(VAR_3, "Successfully validated positive ANY response");
 VAR_11->security = VAR_7;
}
