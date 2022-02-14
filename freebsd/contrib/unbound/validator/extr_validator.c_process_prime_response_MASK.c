
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int qclass; } ;
struct val_qstate {scalar_t__ restart_count; void* state; int * key_entry; int * chain_blacklist; int * trust_anchor_name; TYPE_1__ qchase; int trust_anchor_len; int trust_anchor_labs; } ;
struct val_env {int kcache; } ;
struct ub_packed_rrset_key {int dummy; } ;
struct trust_anchor {int name; int lock; scalar_t__ autr; int dclass; int namelen; } ;
struct sock_list {int dummy; } ;
struct module_qstate {int * errinf; int region; TYPE_2__* env; } ;
struct dns_msg {int rep; } ;
struct TYPE_4__ {int anchors; scalar_t__* modinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 struct trust_anchor* FUNC_0 (int ,int *,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*,struct val_env*,struct trust_anchor*,struct ub_packed_rrset_key*,struct module_qstate*) ;
 int FUNC_2 (struct module_qstate*,char*,int ) ;
 int FUNC_3 (struct module_qstate*,struct sock_list*) ;
 int FUNC_4 (int ,int *,struct module_qstate*) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (struct ub_packed_rrset_key*,struct trust_anchor*,struct module_qstate*,int) ;
 struct ub_packed_rrset_key* FUNC_9 (int ,int ,int ,int ,int ) ;
 int FUNC_10 (int **,int ,struct sock_list*,int) ;

__attribute__((used)) static void
FUNC_11(struct module_qstate* VAR_5, struct val_qstate* VAR_6,
 int VAR_7, int VAR_8, struct dns_msg* VAR_9, struct sock_list* VAR_10)
{
 struct val_env* VAR_11 = (struct val_env*)VAR_5->env->modinfo[VAR_7];
 struct ub_packed_rrset_key* VAR_12 = ((void*)0);
 struct trust_anchor* VAR_13 = FUNC_0(VAR_5->env->anchors,
  VAR_6->trust_anchor_name, VAR_6->trust_anchor_labs,
  VAR_6->trust_anchor_len, VAR_6->qchase.qclass);
 if(!VAR_13) {

  VAR_6->state = VAR_2;
  if(!VAR_6->trust_anchor_name)
   VAR_6->state = VAR_4;
  VAR_6->trust_anchor_name = ((void*)0);
  return;
 }


 if(VAR_8 == VAR_0) {
  VAR_12 = FUNC_9(VAR_9->rep,
   VAR_13->name, VAR_13->namelen, VAR_1,
   VAR_13->dclass);
 }

 if(VAR_13->autr) {
  if(!FUNC_1(VAR_5->env, VAR_11, VAR_13, VAR_12,
   VAR_5)) {

   VAR_6->state = VAR_2;
   VAR_6->trust_anchor_name = ((void*)0);
   return;
  }
 }
 VAR_6->key_entry = FUNC_8(VAR_12, VAR_13, VAR_5, VAR_7);
 FUNC_7(&VAR_13->lock);
 if(VAR_6->key_entry) {
  if(FUNC_5(VAR_6->key_entry)
   && VAR_6->restart_count < VAR_3) {
   FUNC_10(&VAR_6->chain_blacklist, VAR_5->region,
    VAR_10, 1);
   VAR_5->errinf = ((void*)0);
   VAR_6->restart_count++;
   VAR_6->key_entry = ((void*)0);
   VAR_6->state = VAR_2;
   return;
  }
  VAR_6->chain_blacklist = ((void*)0);
  FUNC_3(VAR_5, VAR_10);
  FUNC_2(VAR_5, "for trust anchor", VAR_13->name);

  FUNC_4(VAR_11->kcache, VAR_6->key_entry, VAR_5);
 }


 if(!VAR_6->key_entry || FUNC_6(VAR_6->key_entry) ||
  FUNC_5(VAR_6->key_entry)) {
  VAR_6->state = VAR_4;
 }

}
