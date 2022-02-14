
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct val_qstate {scalar_t__ restart_count; struct key_entry_key* key_entry; int * chain_blacklist; void* state; int ds_rrset; } ;
struct val_env {int kcache; } ;
struct ub_packed_rrset_key {int dummy; } ;
struct sock_list {int dummy; } ;
struct query_info {int qname; int qclass; int qname_len; } ;
struct module_qstate {int * errinf; int region; TYPE_2__* env; } ;
struct key_entry_key {int dummy; } ;
struct dns_msg {int rep; } ;
struct TYPE_4__ {TYPE_1__* cfg; int * now; scalar_t__* modinfo; } ;
struct TYPE_3__ {int harden_algo_downgrade; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct module_qstate*,char*) ;
 int FUNC_1 (struct module_qstate*,char*,int ) ;
 int FUNC_2 (struct module_qstate*,struct sock_list*) ;
 int FUNC_3 (int ,struct key_entry_key*,struct module_qstate*) ;
 struct key_entry_key* FUNC_4 (int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (struct key_entry_key*) ;
 int FUNC_6 (struct key_entry_key*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,char*,struct query_info*) ;
 struct ub_packed_rrset_key* FUNC_9 (struct query_info*,int ) ;
 int FUNC_10 (int **,int ,struct sock_list*,int) ;
 struct key_entry_key* FUNC_11 (int ,TYPE_2__*,struct val_env*,struct ub_packed_rrset_key*,int ,int,char**,struct module_qstate*) ;
 int FUNC_12 (int ,char*) ;

__attribute__((used)) static void
FUNC_13(struct module_qstate* VAR_5, struct val_qstate* VAR_6,
 int VAR_7, int VAR_8, struct dns_msg* VAR_9, struct query_info* VAR_10,
 struct sock_list* VAR_11)
{
 struct val_env* VAR_12 = (struct val_env*)VAR_5->env->modinfo[VAR_7];
 struct key_entry_key* VAR_13 = VAR_6->key_entry;
 struct ub_packed_rrset_key* VAR_14 = ((void*)0);
 int VAR_15;
 char* VAR_16 = ((void*)0);

 if(VAR_8 == VAR_1)
  VAR_14 = FUNC_9(VAR_10, VAR_9->rep);

 if(VAR_14 == ((void*)0)) {

  FUNC_12(VAR_4, "Missing DNSKEY RRset in response to "
   "DNSKEY query.");
  if(VAR_6->restart_count < VAR_2) {
   FUNC_10(&VAR_6->chain_blacklist, VAR_5->region,
    VAR_11, 1);
   VAR_5->errinf = ((void*)0);
   VAR_6->restart_count++;
   return;
  }
  VAR_6->key_entry = FUNC_4(VAR_5->region,
   VAR_10->qname, VAR_10->qname_len, VAR_10->qclass,
   VAR_0, *VAR_5->env->now);
  if(!VAR_6->key_entry) {
   FUNC_7("alloc failure in missing dnskey response");

  }
  FUNC_0(VAR_5, "No DNSKEY record");
  FUNC_2(VAR_5, VAR_11);
  FUNC_1(VAR_5, "for key", VAR_10->qname);
  VAR_6->state = VAR_3;
  return;
 }
 if(!VAR_6->ds_rrset) {
  FUNC_7("internal error: no DS rrset for new DNSKEY response");
  VAR_6->key_entry = ((void*)0);
  VAR_6->state = VAR_3;
  return;
 }
 VAR_15 = VAR_5->env->cfg->harden_algo_downgrade;
 VAR_6->key_entry = FUNC_11(VAR_5->region, VAR_5->env,
  VAR_12, VAR_14, VAR_6->ds_rrset, VAR_15, &VAR_16, VAR_5);

 if(!VAR_6->key_entry) {
  FUNC_7("out of memory in verify new DNSKEYs");
  VAR_6->state = VAR_3;
  return;
 }


 if(!FUNC_6(VAR_6->key_entry)) {
  if(FUNC_5(VAR_6->key_entry)) {
   if(VAR_6->restart_count < VAR_2) {
    FUNC_10(&VAR_6->chain_blacklist,
     VAR_5->region, VAR_11, 1);
    VAR_5->errinf = ((void*)0);
    VAR_6->restart_count++;
    VAR_6->key_entry = VAR_13;
    return;
   }
   FUNC_12(VAR_4, "Did not match a DS to a DNSKEY, "
    "thus bogus.");
   FUNC_0(VAR_5, VAR_16);
   FUNC_2(VAR_5, VAR_11);
   FUNC_1(VAR_5, "for key", VAR_10->qname);
  }
  VAR_6->chain_blacklist = ((void*)0);
  VAR_6->state = VAR_3;
  return;
 }
 VAR_6->chain_blacklist = ((void*)0);
 VAR_5->errinf = ((void*)0);


 FUNC_3(VAR_12->kcache, VAR_6->key_entry, VAR_5);


 FUNC_8(VAR_4, "validated DNSKEY", VAR_10);
}
