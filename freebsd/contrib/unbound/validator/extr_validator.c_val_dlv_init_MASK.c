
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {size_t qname_len; scalar_t__ qtype; int qclass; int * qname; } ;
struct val_qstate {size_t dlv_lookup_name_len; size_t dlv_insecure_at_len; size_t signer_len; TYPE_3__ qchase; int * dlv_lookup_name; int state; int * dlv_insecure_at; TYPE_5__* key_entry; int * signer_name; TYPE_4__* dlv_checked; } ;
struct val_env {int neg_cache; } ;
struct module_qstate {TYPE_2__* env; int region; } ;
struct TYPE_10__ {size_t namelen; int * name; } ;
struct TYPE_9__ {size_t namelen; int * name; } ;
struct TYPE_7__ {TYPE_1__* anchors; int * now; int rrset_cache; } ;
struct TYPE_6__ {TYPE_4__* dlv_anchor; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int **,size_t*) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (struct module_qstate*,int,int *,size_t,scalar_t__,int ,int ,struct module_qstate**,int ) ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,char*,int *,scalar_t__,int ) ;
 int FUNC_7 (int *,int *,size_t) ;
 void* FUNC_8 (int ,size_t) ;
 int FUNC_9 (struct module_qstate*,int) ;
 scalar_t__ FUNC_10 (int ,int *,size_t,int ,int ,int ) ;
 int FUNC_11 (int ,char*) ;

__attribute__((used)) static int
FUNC_12(struct module_qstate* VAR_4, struct val_qstate* VAR_5,
 struct val_env* VAR_6, int VAR_7)
{
 uint8_t* VAR_8;
 size_t VAR_9;
 struct module_qstate* VAR_10 = ((void*)0);

 FUNC_4(VAR_4->env->anchors->dlv_anchor);

 FUNC_4(VAR_5->dlv_checked);


 VAR_5->dlv_lookup_name = ((void*)0);
 VAR_5->dlv_lookup_name_len = 0;
 VAR_5->dlv_insecure_at = ((void*)0);
 VAR_5->dlv_insecure_at_len = 0;





 if(VAR_5->signer_name) {
  VAR_8 = VAR_5->signer_name;
  VAR_9 = VAR_5->signer_len;
 } else {

  VAR_8 = VAR_5->qchase.qname;
  VAR_9 = VAR_5->qchase.qname_len;
  if(VAR_5->qchase.qtype == VAR_1)
   FUNC_0(&VAR_8, &VAR_9);
 }
 FUNC_6(VAR_3, "DLV init look", VAR_8, VAR_1,
  VAR_5->qchase.qclass);
 FUNC_4(VAR_8 && VAR_9);


 if(FUNC_1(VAR_8, VAR_4->env->anchors->dlv_anchor->name)) {
  FUNC_11(VAR_3, "DLV lookup within DLV repository denied");
  return 1;
 }

 VAR_5->dlv_lookup_name_len = VAR_9 - 1 +
  VAR_4->env->anchors->dlv_anchor->namelen;
 VAR_5->dlv_lookup_name = FUNC_8(VAR_4->region,
  VAR_5->dlv_lookup_name_len);
 if(!VAR_5->dlv_lookup_name) {
  FUNC_5("Out of memory preparing DLV lookup");
  return FUNC_9(VAR_4, VAR_7);
 }
 FUNC_7(VAR_5->dlv_lookup_name, VAR_8, VAR_9-1);
 FUNC_7(VAR_5->dlv_lookup_name+VAR_9-1,
  VAR_4->env->anchors->dlv_anchor->name,
  VAR_4->env->anchors->dlv_anchor->namelen);
 FUNC_6(VAR_3, "DLV name", VAR_5->dlv_lookup_name,
  VAR_0, VAR_5->qchase.qclass);




 VAR_8 = ((void*)0);
 if(VAR_5->key_entry && FUNC_3(VAR_5->key_entry)) {
  VAR_8 = VAR_5->key_entry->name;
  VAR_9 = VAR_5->key_entry->namelen;
 }
 if(VAR_8) {
  VAR_5->dlv_insecure_at_len = VAR_9 - 1 +
   VAR_4->env->anchors->dlv_anchor->namelen;
  VAR_5->dlv_insecure_at = FUNC_8(VAR_4->region,
   VAR_5->dlv_insecure_at_len);
  if(!VAR_5->dlv_insecure_at) {
   FUNC_5("Out of memory preparing DLV lookup");
   return FUNC_9(VAR_4, VAR_7);
  }
  FUNC_7(VAR_5->dlv_insecure_at, VAR_8, VAR_9-1);
  FUNC_7(VAR_5->dlv_insecure_at+VAR_9-1,
   VAR_4->env->anchors->dlv_anchor->name,
   VAR_4->env->anchors->dlv_anchor->namelen);
  FUNC_6(VAR_3, "insecure_at",
   VAR_5->dlv_insecure_at, 0, VAR_5->qchase.qclass);
 }



 while(FUNC_10(VAR_6->neg_cache, VAR_5->dlv_lookup_name,
  VAR_5->dlv_lookup_name_len, VAR_5->qchase.qclass,
  VAR_4->env->rrset_cache, *VAR_4->env->now)) {

  FUNC_0(&VAR_5->dlv_lookup_name,
   &VAR_5->dlv_lookup_name_len);

  if(!FUNC_1(VAR_5->dlv_lookup_name,
   VAR_4->env->anchors->dlv_anchor->name)) {
   FUNC_11(VAR_3, "ask above dlv repo");
   return 1;
  }

  if(VAR_5->dlv_insecure_at && !FUNC_1(
   VAR_5->dlv_lookup_name, VAR_5->dlv_insecure_at)) {
   FUNC_11(VAR_3, "ask above insecure endpoint");
   return 1;
  }
 }


 VAR_5->state = VAR_2;
 if(!FUNC_2(VAR_4, VAR_7, VAR_5->dlv_lookup_name,
  VAR_5->dlv_lookup_name_len, VAR_0,
  VAR_5->qchase.qclass, 0, &VAR_10, 0)) {
  return FUNC_9(VAR_4, VAR_7);
 }
 return 0;
}
