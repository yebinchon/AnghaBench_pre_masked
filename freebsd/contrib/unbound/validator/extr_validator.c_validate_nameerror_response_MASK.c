
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct val_env {int dummy; } ;
struct TYPE_2__ {int type; } ;
struct ub_packed_rrset_key {TYPE_1__ rk; } ;
struct reply_info {size_t an_numrrsets; size_t ns_numrrsets; scalar_t__ security; struct ub_packed_rrset_key** rrsets; } ;
struct query_info {int qname_len; int qname; } ;
struct module_env {int dummy; } ;
struct key_entry_key {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct module_env*,struct val_env*,struct ub_packed_rrset_key**,size_t,struct query_info*,struct key_entry_key*) ;
 int * FUNC_2 (int ,struct ub_packed_rrset_key*) ;
 scalar_t__ FUNC_3 (int ) ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (struct ub_packed_rrset_key*,struct query_info*) ;
 scalar_t__ FUNC_6 (struct ub_packed_rrset_key*,int ) ;
 scalar_t__ FUNC_7 (struct ub_packed_rrset_key*,int ,int ) ;
 int FUNC_8 (struct module_env*,struct val_env*,struct query_info*,struct reply_info*,struct key_entry_key*) ;
 int FUNC_9 (int ,char*,...) ;

__attribute__((used)) static void
FUNC_10(struct module_env* VAR_8, struct val_env* VAR_9,
 struct query_info* VAR_10, struct reply_info* VAR_11,
 struct key_entry_key* VAR_12, int* VAR_13)
{
 int VAR_14 = 0;
 int VAR_15 = 0;
 int VAR_16 = 0;
 struct ub_packed_rrset_key* VAR_17;
 size_t VAR_18;
 uint8_t* VAR_19;
 int VAR_20 = 0;
 int VAR_21 = 0;

 for(VAR_18=VAR_11->an_numrrsets; VAR_18<VAR_11->an_numrrsets+
  VAR_11->ns_numrrsets; VAR_18++) {
  VAR_17 = VAR_11->rrsets[VAR_18];
  if(FUNC_3(VAR_17->rk.type) == VAR_1) {
   if(FUNC_6(VAR_17, VAR_10->qname))
    VAR_14 = 1;
   VAR_19 = FUNC_2(VAR_10->qname, VAR_17);
   VAR_20 = FUNC_0(VAR_19);

   if(VAR_20 > VAR_21 ||
          (VAR_20 == VAR_21 &&
           VAR_15 == 0)) {
          if(FUNC_7(VAR_17, VAR_10->qname,
           VAR_10->qname_len))
           VAR_15 = 1;
          else
           VAR_15 = 0;
   }
   VAR_21 = VAR_20;
   if(FUNC_5(VAR_17, VAR_10)) {
    FUNC_9(VAR_3, "delegation is insecure");
    VAR_11->security = VAR_6;
    return;
   }
  } else if(FUNC_3(VAR_17->rk.type) == VAR_2)
   VAR_16 = 1;
 }

 if((!VAR_14 || !VAR_15) && VAR_16) {


  VAR_11->security = FUNC_1(VAR_8, VAR_9,
   VAR_11->rrsets, VAR_11->an_numrrsets+
   VAR_11->ns_numrrsets, VAR_10, VAR_12);
  if(VAR_11->security != VAR_7) {
   FUNC_9(VAR_4, "NameError response failed nsec, "
    "nsec3 proof was %s", FUNC_4(
    VAR_11->security));
   return;
  }
  VAR_14 = 1;
  VAR_15 = 1;
 }


 if(!VAR_14) {
  FUNC_9(VAR_4, "NameError response has failed to prove: "
            "qname does not exist");
  VAR_11->security = VAR_5;

  FUNC_8(VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
  if (VAR_11->security == VAR_7)
   *VAR_13 = VAR_0;
  return;
 }

 if(!VAR_15) {
  FUNC_9(VAR_4, "NameError response has failed to prove: "
            "covering wildcard does not exist");
  VAR_11->security = VAR_5;

  FUNC_8(VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
  if (VAR_11->security == VAR_7)
   *VAR_13 = VAR_0;
  return;
 }


 FUNC_9(VAR_3, "successfully validated NAME ERROR response.");
 VAR_11->security = VAR_7;
}
