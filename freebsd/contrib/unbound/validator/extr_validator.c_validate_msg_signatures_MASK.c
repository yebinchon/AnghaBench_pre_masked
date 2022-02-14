
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct val_env {int dummy; } ;
struct TYPE_5__ {int rrset_class; int type; int dname; } ;
struct TYPE_4__ {scalar_t__ data; } ;
struct ub_packed_rrset_key {TYPE_2__ rk; TYPE_1__ entry; } ;
struct reply_info {size_t an_numrrsets; size_t ns_numrrsets; size_t rrset_count; struct ub_packed_rrset_key** rrsets; void* security; } ;
struct query_info {scalar_t__ qtype; } ;
struct packed_rrset_data {int security; int trust; } ;
struct module_qstate {int reply_origin; } ;
struct module_env {TYPE_3__* cfg; } ;
struct key_entry_key {int name; } ;
typedef enum sec_status { ____Placeholder_sec_status } sec_status ;
struct TYPE_6__ {int val_clean_additional; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct module_qstate*,char*) ;
 int FUNC_1 (struct module_qstate*,int ) ;
 int FUNC_2 (struct module_qstate*,struct ub_packed_rrset_key*) ;
 int FUNC_3 (int ,char*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (struct ub_packed_rrset_key*,int **,size_t*) ;
 int FUNC_7 (struct module_env*,struct val_env*,struct ub_packed_rrset_key*,struct key_entry_key*,char**,int ,struct module_qstate*) ;

__attribute__((used)) static int
FUNC_8(struct module_qstate* VAR_9, struct module_env* VAR_10,
 struct val_env* VAR_11, struct query_info* VAR_12,
 struct reply_info* VAR_13, struct key_entry_key* VAR_14)
{
 uint8_t* VAR_15;
 size_t VAR_16, VAR_17;
 struct ub_packed_rrset_key* VAR_18;
 enum sec_status VAR_19;
 int VAR_20 = 0;
 char* VAR_21 = ((void*)0);


 for(VAR_16=0; VAR_16<VAR_13->an_numrrsets; VAR_16++) {
  VAR_18 = VAR_13->rrsets[VAR_16];




  if(VAR_20 && FUNC_4(VAR_18->rk.type) == VAR_0) {
   VAR_20 = 0;


   ((struct packed_rrset_data*)VAR_18->entry.data)->security =
    VAR_8;
   ((struct packed_rrset_data*)VAR_18->entry.data)->trust =
    VAR_6;
   continue;
  }


  VAR_19 = FUNC_7(VAR_10, VAR_11, VAR_18, VAR_14, &VAR_21,
   VAR_3, VAR_9);


  if(VAR_19 != VAR_8) {
   FUNC_3(VAR_5, "validator: response "
    "has failed ANSWER rrset:", VAR_18->rk.dname,
    FUNC_4(VAR_18->rk.type), FUNC_4(VAR_18->rk.rrset_class));
   FUNC_0(VAR_9, VAR_21);
   if(FUNC_4(VAR_18->rk.type) == VAR_0)
    FUNC_0(VAR_9, "for CNAME");
   else if(FUNC_4(VAR_18->rk.type) == VAR_1)
    FUNC_0(VAR_9, "for DNAME");
   FUNC_1(VAR_9, VAR_9->reply_origin);
   VAR_13->security = VAR_7;
   return 0;
  }



  if(VAR_12->qtype != VAR_1 &&
   FUNC_4(VAR_18->rk.type) == VAR_1) {
   VAR_20 = 1;
  }
 }


 for(VAR_16=VAR_13->an_numrrsets; VAR_16<VAR_13->an_numrrsets+
  VAR_13->ns_numrrsets; VAR_16++) {
  VAR_18 = VAR_13->rrsets[VAR_16];
  VAR_19 = FUNC_7(VAR_10, VAR_11, VAR_18, VAR_14, &VAR_21,
   VAR_4, VAR_9);


  if(VAR_19 != VAR_8) {
   FUNC_3(VAR_5, "validator: response "
    "has failed AUTHORITY rrset:", VAR_18->rk.dname,
    FUNC_4(VAR_18->rk.type), FUNC_4(VAR_18->rk.rrset_class));
   FUNC_0(VAR_9, VAR_21);
   FUNC_1(VAR_9, VAR_9->reply_origin);
   FUNC_2(VAR_9, VAR_18);
   VAR_13->security = VAR_7;
   return 0;
  }
 }



 if(!VAR_10->cfg->val_clean_additional)
  return 1;

 for(VAR_16=VAR_13->an_numrrsets+VAR_13->ns_numrrsets;
  VAR_16<VAR_13->rrset_count; VAR_16++) {
  VAR_18 = VAR_13->rrsets[VAR_16];


  FUNC_6(VAR_18, &VAR_15, &VAR_17);
  if(VAR_15 && FUNC_5(VAR_15, VAR_14->name)==0)
   (void)FUNC_7(VAR_10, VAR_11, VAR_18, VAR_14,
    &VAR_21, VAR_2, VAR_9);



 }

 return 1;
}
