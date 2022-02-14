
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct val_env {int dummy; } ;
struct TYPE_4__ {int type; int rrset_class; int dname; } ;
struct ub_packed_rrset_key {TYPE_2__ rk; } ;
struct reply_info {size_t an_numrrsets; int security; size_t ns_numrrsets; struct ub_packed_rrset_key** rrsets; } ;
struct query_info {int dummy; } ;
struct module_env {int * now; int alloc; int rrset_cache; TYPE_1__* cfg; } ;
struct key_entry_key {int dummy; } ;
typedef enum sec_status { ____Placeholder_sec_status } sec_status ;
struct TYPE_3__ {scalar_t__ aggressive_nsec; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct module_env*,struct val_env*,struct ub_packed_rrset_key**,size_t,struct query_info*,struct key_entry_key*,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,struct ub_packed_rrset_key*,int *,size_t,int ,int ) ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (struct ub_packed_rrset_key*,struct query_info*,int *) ;
 int FUNC_5 (struct ub_packed_rrset_key*,int **,size_t*) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static void
FUNC_7(struct module_env* VAR_7, struct val_env* VAR_8,
 struct query_info* VAR_9, struct reply_info* VAR_10,
 struct key_entry_key* VAR_11)
{
 uint8_t* VAR_12 = ((void*)0);
 size_t VAR_13;
 int VAR_14 = 0;
 int VAR_15 = 0;
 int VAR_16 = 0;
 size_t VAR_17;
 struct ub_packed_rrset_key* VAR_18;


 for(VAR_17=0; VAR_17<VAR_10->an_numrrsets; VAR_17++) {
  VAR_18 = VAR_10->rrsets[VAR_17];




  if(!FUNC_5(VAR_18, &VAR_12, &VAR_13)) {
   FUNC_0(VAR_3, "Positive response has "
    "inconsistent wildcard sigs:", VAR_18->rk.dname,
    FUNC_2(VAR_18->rk.type), FUNC_2(VAR_18->rk.rrset_class));
   VAR_10->security = VAR_4;
   return;
  }
  if(VAR_12 && !VAR_14 && VAR_7->cfg->aggressive_nsec) {
   FUNC_3(VAR_7->rrset_cache, VAR_18, VAR_12, VAR_13,
    VAR_7->alloc, *VAR_7->now);
   VAR_14 = 1;
  }

 }



 for(VAR_17=VAR_10->an_numrrsets; VAR_17<VAR_10->an_numrrsets+
  VAR_10->ns_numrrsets; VAR_17++) {
  VAR_18 = VAR_10->rrsets[VAR_17];





  if(VAR_12 != ((void*)0) && FUNC_2(VAR_18->rk.type) == VAR_0) {
   if(FUNC_4(VAR_18, VAR_9, VAR_12)) {
    VAR_15 = 1;
   }

  }



  if(VAR_12 != ((void*)0) && FUNC_2(VAR_18->rk.type) == VAR_1) {
   VAR_16 = 1;
  }
 }




 if(VAR_12 != ((void*)0) && !VAR_15 && VAR_16) {
  enum sec_status VAR_19 = FUNC_1(VAR_7, VAR_8,
   VAR_10->rrsets+VAR_10->an_numrrsets,
   VAR_10->ns_numrrsets, VAR_9, VAR_11, VAR_12);
  if(VAR_19 == VAR_5) {
   FUNC_6(VAR_2, "Positive wildcard response is "
    "insecure");
   VAR_10->security = VAR_5;
   return;
  } else if(VAR_19 == VAR_6)
   VAR_15 = 1;
 }



 if(VAR_12 != ((void*)0) && !VAR_15) {
  FUNC_6(VAR_3, "positive response was wildcard "
   "expansion and did not prove original data "
   "did not exist");
  VAR_10->security = VAR_4;
  return;
 }

 FUNC_6(VAR_2, "Successfully validated positive response");
 VAR_10->security = VAR_6;
}
