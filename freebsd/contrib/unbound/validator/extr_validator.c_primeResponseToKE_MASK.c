
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct val_env {int dummy; } ;
struct ub_packed_rrset_key {int dummy; } ;
struct trust_anchor {int dclass; int name; int namelen; int dnskey_rrset; int ds_rrset; } ;
struct module_qstate {TYPE_2__* env; int region; } ;
struct key_entry_key {int dummy; } ;
typedef enum sec_status { ____Placeholder_sec_status } sec_status ;
struct TYPE_4__ {int * now; TYPE_1__* cfg; scalar_t__* modinfo; } ;
struct TYPE_3__ {int harden_algo_downgrade; scalar_t__ harden_dnssec_stripped; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct module_qstate*,char*) ;
 struct key_entry_key* FUNC_1 (int ,int ,int ,int ,int ,int ) ;
 struct key_entry_key* FUNC_2 (int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct key_entry_key*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int) ;
 int VAR_7 ;
 struct key_entry_key* FUNC_7 (int ,TYPE_2__*,struct val_env*,struct ub_packed_rrset_key*,int ,int ,int,char**,struct module_qstate*) ;
 int FUNC_8 (int ,char*,int ) ;

__attribute__((used)) static struct key_entry_key*
FUNC_9(struct ub_packed_rrset_key* VAR_8,
 struct trust_anchor* VAR_9, struct module_qstate* VAR_10, int VAR_11)
{
 struct val_env* VAR_12 = (struct val_env*)VAR_10->env->modinfo[VAR_11];
 struct key_entry_key* VAR_13 = ((void*)0);
 enum sec_status VAR_14 = VAR_7;
 char* VAR_15 = ((void*)0);
 int VAR_16 = VAR_10->env->cfg->harden_algo_downgrade;

 if(!VAR_8) {
  FUNC_5(VAR_4, "failed to prime trust anchor -- "
   "could not fetch DNSKEY rrset",
   VAR_9->name, VAR_1, VAR_9->dclass);
  if(VAR_10->env->cfg->harden_dnssec_stripped) {
   FUNC_0(VAR_10, "no DNSKEY rrset");
   VAR_13 = FUNC_1(VAR_10->region, VAR_9->name,
    VAR_9->namelen, VAR_9->dclass, VAR_0,
    *VAR_10->env->now);
  } else VAR_13 = FUNC_2(VAR_10->region, VAR_9->name,
    VAR_9->namelen, VAR_9->dclass, VAR_2,
    *VAR_10->env->now);
  if(!VAR_13) {
   FUNC_4("out of memory: allocate fail prime key");
   return ((void*)0);
  }
  return VAR_13;
 }

 VAR_13 = FUNC_7(VAR_10->region, VAR_10->env, VAR_12,
  VAR_8, VAR_9->ds_rrset, VAR_9->dnskey_rrset, VAR_16,
  &VAR_15, VAR_10);
 if(!VAR_13) {
  FUNC_4("out of memory: verifying prime TA");
  return ((void*)0);
 }
 if(FUNC_3(VAR_13))
  VAR_14 = VAR_6;
 else
  VAR_14 = VAR_5;
 FUNC_8(VAR_3, "validate keys with anchor(DS): %s",
  FUNC_6(VAR_14));

 if(VAR_14 != VAR_6) {
  FUNC_5(VAR_4, "failed to prime trust anchor -- "
   "DNSKEY rrset is not secure",
   VAR_9->name, VAR_1, VAR_9->dclass);


  if(VAR_10->env->cfg->harden_dnssec_stripped) {
   FUNC_0(VAR_10, VAR_15);
   VAR_13 = FUNC_1(VAR_10->region, VAR_9->name,
    VAR_9->namelen, VAR_9->dclass, VAR_0,
    *VAR_10->env->now);
  } else VAR_13 = FUNC_2(VAR_10->region, VAR_9->name,
    VAR_9->namelen, VAR_9->dclass, VAR_2,
    *VAR_10->env->now);
  if(!VAR_13) {
   FUNC_4("out of memory: allocate null prime key");
   return ((void*)0);
  }
  return VAR_13;
 }

 FUNC_5(VAR_3, "Successfully primed trust anchor",
  VAR_9->name, VAR_1, VAR_9->dclass);
 return VAR_13;
}
