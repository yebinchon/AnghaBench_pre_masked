
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
struct query_info {int qname_len; int qname; } ;
struct module_env {int dummy; } ;
struct key_entry_key {int dummy; } ;
typedef enum sec_status { ____Placeholder_sec_status } sec_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,struct query_info*,struct reply_info*) ;
 int FUNC_2 (struct module_env*,struct val_env*,struct ub_packed_rrset_key**,size_t,struct query_info*,struct key_entry_key*,int*) ;
 int * FUNC_3 (int ,struct ub_packed_rrset_key*) ;
 scalar_t__ FUNC_4 (struct ub_packed_rrset_key*,struct query_info*,int **) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (struct ub_packed_rrset_key*,struct query_info*) ;
 scalar_t__ FUNC_8 (struct ub_packed_rrset_key*,int ) ;
 scalar_t__ FUNC_9 (struct ub_packed_rrset_key*,int ,int ) ;
 int FUNC_10 (scalar_t__,char*) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void
FUNC_11(struct module_env* VAR_8, struct val_env* VAR_9,
 struct query_info* VAR_10, struct reply_info* VAR_11,
 struct key_entry_key* VAR_12)
{
 int VAR_13 = 0;
 uint8_t* VAR_14 = ((void*)0);

 uint8_t* VAR_15 = ((void*)0);
 int VAR_16 = 0;
 int VAR_17 = 0;
 int VAR_18 = 0;
 struct ub_packed_rrset_key* VAR_19;
 size_t VAR_20;
 uint8_t* VAR_21;
 int VAR_22 = 0;
 int VAR_23 = 0;


 for(VAR_20=VAR_11->an_numrrsets; VAR_20<VAR_11->an_numrrsets+
  VAR_11->ns_numrrsets; VAR_20++) {
  VAR_19 = VAR_11->rrsets[VAR_20];




  if(FUNC_5(VAR_19->rk.type) == VAR_0) {
   if(FUNC_4(VAR_19, VAR_10, &VAR_15)) {
    VAR_13 = 1;

   }
   if(FUNC_8(VAR_19, VAR_10->qname)) {
    VAR_14 = FUNC_3(VAR_10->qname, VAR_19);
    VAR_16 = 1;
   }
   VAR_21 = FUNC_3(VAR_10->qname, VAR_19);
   VAR_22 = FUNC_0(VAR_21);

   if(VAR_22 > VAR_23 ||
          (VAR_22 == VAR_23 &&
           VAR_17 == 0)) {
          if(FUNC_9(VAR_19, VAR_10->qname,
           VAR_10->qname_len))
           VAR_17 = 1;
          else
           VAR_17 = 0;
   }
   VAR_23 = VAR_22;
   if(FUNC_7(VAR_19, VAR_10)) {
    FUNC_10(VAR_2, "delegation is insecure");
    VAR_11->security = VAR_5;
    return;
   }
  } else if(FUNC_5(VAR_19->rk.type) == VAR_1) {
   VAR_18 = 1;
  }
 }






 if(VAR_15 && !VAR_14)
  VAR_13 = 0;
 else if(VAR_15 && VAR_14) {
  if(FUNC_6(VAR_15, VAR_14) != 0) {
   VAR_13 = 0;
  }
 }
 if(VAR_16 && !VAR_17) {

  VAR_16 = 0;
 }

 if(VAR_13 && VAR_16) {
  FUNC_10(VAR_3, "CNAMEchain to noanswer proves that name "
   "exists and not exists, bogus");
  VAR_11->security = VAR_4;
  return;
 }
 if(!VAR_13 && !VAR_16 && VAR_18) {
  int VAR_24;
  enum sec_status VAR_25 = FUNC_2(VAR_8, VAR_9,
   VAR_11->rrsets+VAR_11->an_numrrsets,
   VAR_11->ns_numrrsets, VAR_10, VAR_12, &VAR_24);
  if(VAR_25 == VAR_5) {
   FUNC_10(VAR_2, "CNAMEchain to noanswer response "
    "is insecure");
   VAR_11->security = VAR_5;
   return;
  } else if(VAR_25 == VAR_6) {
   if(VAR_24)
    VAR_13 = 1;
   else VAR_16 = 1;
  }
 }

 if(!VAR_13 && !VAR_16) {
  FUNC_10(VAR_3, "CNAMEchain to noanswer response failed "
   "to prove status with NSEC/NSEC3");
  if(VAR_7 >= VAR_2)
   FUNC_1("Failed CNAMEnoanswer", VAR_10, VAR_11);
  VAR_11->security = VAR_4;
  return;
 }

 if(VAR_13)
  FUNC_10(VAR_2, "successfully validated CNAME chain to a "
   "NODATA response.");
 else FUNC_10(VAR_2, "successfully validated CNAME chain to a "
   "NAMEERROR response.");
 VAR_11->security = VAR_6;
}
