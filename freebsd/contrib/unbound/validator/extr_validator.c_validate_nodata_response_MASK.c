
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct val_env {int dummy; } ;
struct TYPE_2__ {int type; } ;
struct ub_packed_rrset_key {TYPE_1__ rk; } ;
struct reply_info {size_t an_numrrsets; size_t ns_numrrsets; int security; struct ub_packed_rrset_key** rrsets; } ;
struct query_info {int qname; } ;
struct module_env {int dummy; } ;
struct key_entry_key {int dummy; } ;
typedef enum sec_status { ____Placeholder_sec_status } sec_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,struct query_info*,struct reply_info*) ;
 int FUNC_1 (struct module_env*,struct val_env*,struct ub_packed_rrset_key**,size_t,struct query_info*,struct key_entry_key*) ;
 int * FUNC_2 (int ,struct ub_packed_rrset_key*) ;
 scalar_t__ FUNC_3 (struct ub_packed_rrset_key*,struct query_info*,int **) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (struct ub_packed_rrset_key*,struct query_info*) ;
 scalar_t__ FUNC_7 (struct ub_packed_rrset_key*,int ) ;
 int FUNC_8 (scalar_t__,char*) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void
FUNC_9(struct module_env* VAR_8, struct val_env* VAR_9,
 struct query_info* VAR_10, struct reply_info* VAR_11,
 struct key_entry_key* VAR_12)
{
 int VAR_13 = 0;
 uint8_t* VAR_14 = ((void*)0);

 uint8_t* VAR_15 = ((void*)0);
 int VAR_16 = 0;
 struct ub_packed_rrset_key* VAR_17;
 size_t VAR_18;

 for(VAR_18=VAR_11->an_numrrsets; VAR_18<VAR_11->an_numrrsets+
  VAR_11->ns_numrrsets; VAR_18++) {
  VAR_17 = VAR_11->rrsets[VAR_18];



  if(FUNC_4(VAR_17->rk.type) == VAR_0) {
   if(FUNC_3(VAR_17, VAR_10, &VAR_15)) {
    VAR_13 = 1;

   }
   if(FUNC_7(VAR_17, VAR_10->qname)) {
    VAR_14 = FUNC_2(VAR_10->qname, VAR_17);
   }
   if(FUNC_6(VAR_17, VAR_10)) {
    FUNC_8(VAR_2, "delegation is insecure");
    VAR_11->security = VAR_5;
    return;
   }
  } else if(FUNC_4(VAR_17->rk.type) == VAR_1) {
   VAR_16 = 1;
  }
 }






 if(VAR_15 && !VAR_14)
  VAR_13 = 0;
 else if(VAR_15 && VAR_14) {
  if(FUNC_5(VAR_15, VAR_14) != 0) {
   VAR_13 = 0;
  }
 }

 if(!VAR_13 && VAR_16) {
  enum sec_status VAR_19 = FUNC_1(VAR_8, VAR_9,
   VAR_11->rrsets+VAR_11->an_numrrsets,
   VAR_11->ns_numrrsets, VAR_10, VAR_12);
  if(VAR_19 == VAR_5) {
   FUNC_8(VAR_2, "NODATA response is insecure");
   VAR_11->security = VAR_5;
   return;
  } else if(VAR_19 == VAR_6)
   VAR_13 = 1;
 }

 if(!VAR_13) {
  FUNC_8(VAR_3, "NODATA response failed to prove NODATA "
   "status with NSEC/NSEC3");
  if(VAR_7 >= VAR_2)
   FUNC_0("Failed NODATA", VAR_10, VAR_11);
  VAR_11->security = VAR_4;
  return;
 }

 FUNC_8(VAR_2, "successfully validated NODATA response.");
 VAR_11->security = VAR_6;
}
