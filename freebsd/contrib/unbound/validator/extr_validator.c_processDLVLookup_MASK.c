
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_12__ {int qclass; } ;
struct val_qstate {scalar_t__ dlv_status; size_t dlv_lookup_name_len; TYPE_6__ qchase; scalar_t__* dlv_lookup_name; void* state; scalar_t__ dlv_insecure_at; TYPE_2__* ds_rrset; int key_entry; } ;
struct val_env {int neg_cache; } ;
struct module_qstate {TYPE_5__* env; int region; } ;
struct TYPE_11__ {int * now; int rrset_cache; TYPE_4__* anchors; } ;
struct TYPE_10__ {TYPE_3__* dlv_anchor; } ;
struct TYPE_9__ {int namelen; scalar_t__ name; } ;
struct TYPE_7__ {size_t dname_len; scalar_t__* dname; } ;
struct TYPE_8__ {TYPE_1__ rk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (scalar_t__**,size_t*) ;
 int FUNC_1 (scalar_t__*,scalar_t__) ;
 int FUNC_2 (struct module_qstate*,char*) ;
 int FUNC_3 (struct module_qstate*,int,scalar_t__*,size_t,int ,int ,int ,struct module_qstate**,int ) ;
 int FUNC_4 (int ,scalar_t__*,size_t,int ,int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,char*,scalar_t__,int ,int ) ;
 scalar_t__* FUNC_8 (int ,scalar_t__*,size_t) ;
 int FUNC_9 (struct module_qstate*,int) ;
 scalar_t__ FUNC_10 (int ,scalar_t__*,size_t,int ,int ,int ) ;
 int FUNC_11 (int ,char*) ;

__attribute__((used)) static int
FUNC_12(struct module_qstate* VAR_11, struct val_qstate* VAR_12,
 struct val_env* VAR_13, int VAR_14)
{
 struct module_qstate* VAR_15 = ((void*)0);


 if(VAR_12->dlv_status==VAR_8)
  FUNC_11(VAR_5, "DLV woke up with status dlv_error");
 else if(VAR_12->dlv_status==VAR_9)
  FUNC_11(VAR_5, "DLV woke up with status dlv_success");
 else if(VAR_12->dlv_status==VAR_7)
  FUNC_11(VAR_5, "DLV woke up with status dlv_ask_higher");
 else if(VAR_12->dlv_status==VAR_10)
  FUNC_11(VAR_5, "DLV woke up with status dlv_there_is_no_dlv");
 else FUNC_11(VAR_5, "DLV woke up with status unknown");

 if(VAR_12->dlv_status == VAR_8) {
  FUNC_11(VAR_6, "failed DLV lookup");
  FUNC_2(VAR_11, "failed DLV lookup");
  return FUNC_9(VAR_11, VAR_14);
 } else if(VAR_12->dlv_status == VAR_9) {
  uint8_t* VAR_16;
  size_t VAR_17;

  VAR_12->state = VAR_3;


  FUNC_5(FUNC_1(VAR_12->ds_rrset->rk.dname,
   VAR_11->env->anchors->dlv_anchor->name));
  VAR_17 = VAR_12->ds_rrset->rk.dname_len -
   VAR_11->env->anchors->dlv_anchor->namelen + 1;
  VAR_16 = FUNC_8(VAR_11->region,
   VAR_12->ds_rrset->rk.dname, VAR_17);
  if(!VAR_16) {
   FUNC_6("Out of memory in DLVLook");
   return FUNC_9(VAR_11, VAR_14);
  }
  VAR_16[VAR_17-1] = 0;

  VAR_12->ds_rrset->rk.dname = VAR_16;
  VAR_12->ds_rrset->rk.dname_len = VAR_17;



  VAR_12->key_entry = FUNC_4(VAR_11->region,
   VAR_16, VAR_17, VAR_12->qchase.qclass, 0, 0);
  if(!VAR_12->key_entry) {
   FUNC_6("Out of memory in DLVLook");
   return FUNC_9(VAR_11, VAR_14);
  }

  if(!FUNC_3(VAR_11, VAR_14, VAR_12->ds_rrset->rk.dname,
   VAR_12->ds_rrset->rk.dname_len, VAR_2,
   VAR_12->qchase.qclass, VAR_0, &VAR_15, 0)) {
   FUNC_11(VAR_5, "error generating DNSKEY request");
   return FUNC_9(VAR_11, VAR_14);
  }
  return 0;
 } else if(VAR_12->dlv_status == VAR_10) {

  VAR_12->state = VAR_4;
  return 1;
 }
 FUNC_5(VAR_12->dlv_status == VAR_7);


 if(!FUNC_1(VAR_12->dlv_lookup_name,
  VAR_11->env->anchors->dlv_anchor->name)) {

  FUNC_11(VAR_5, "ask above dlv repo");
  VAR_12->state = VAR_4;
  return 1;
 }
 if(VAR_12->dlv_insecure_at && !FUNC_1(VAR_12->dlv_lookup_name,
  VAR_12->dlv_insecure_at)) {

  FUNC_11(VAR_5, "ask above insecure endpoint");
  FUNC_7(VAR_5, "enpt", VAR_12->dlv_insecure_at, 0, 0);
  VAR_12->state = VAR_4;
  return 1;
 }


 if(FUNC_10(VAR_13->neg_cache, VAR_12->dlv_lookup_name,
  VAR_12->dlv_lookup_name_len, VAR_12->qchase.qclass,
  VAR_11->env->rrset_cache, *VAR_11->env->now)) {

  FUNC_0(&VAR_12->dlv_lookup_name,
   &VAR_12->dlv_lookup_name_len);

  return FUNC_12(VAR_11, VAR_12, VAR_13, VAR_14);
 }

 if(!FUNC_3(VAR_11, VAR_14, VAR_12->dlv_lookup_name,
  VAR_12->dlv_lookup_name_len, VAR_1,
  VAR_12->qchase.qclass, 0, &VAR_15, 0)) {
  return FUNC_9(VAR_11, VAR_14);
 }

 return 0;
}
