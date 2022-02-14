
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {size_t qname_len; int qclass; int * qname; } ;
struct val_qstate {size_t signer_len; TYPE_4__ qchase; TYPE_3__* ds_rrset; TYPE_5__* key_entry; int chain_blacklist; void* state; TYPE_1__* chase_reply; int * empty_DS_name; int * signer_name; } ;
struct module_qstate {int region; int env; int blacklist; int reply_origin; } ;
struct dns_msg {int qinfo; } ;
struct TYPE_11__ {int * name; } ;
struct TYPE_8__ {size_t dname_len; int * dname; } ;
struct TYPE_9__ {TYPE_2__ rk; } ;
struct TYPE_7__ {void* security; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int **,size_t*,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct module_qstate*,char*) ;
 int FUNC_4 (struct module_qstate*,int ) ;
 int FUNC_5 (struct module_qstate*,int,int *,size_t,int ,int ,int ,struct module_qstate**,int ) ;
 int FUNC_6 (TYPE_5__*) ;
 scalar_t__ FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,char*,int *,int ,int ) ;
 int FUNC_10 (int ,char*,TYPE_4__*) ;
 int FUNC_11 (struct module_qstate*,struct val_qstate*,int,int ,struct dns_msg*,int *,int *) ;
 scalar_t__ FUNC_12 (int *,int *) ;
 void* VAR_8 ;
 int FUNC_13 (struct module_qstate*,int) ;
 struct dns_msg* FUNC_14 (int ,int *,size_t,int ,int ,int *) ;
 int FUNC_15 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_16(struct module_qstate* VAR_9, struct val_qstate* VAR_10, int VAR_11)
{
 uint8_t* VAR_12, *VAR_13;
 size_t VAR_14;
 int VAR_15;
 struct module_qstate* VAR_16 = ((void*)0);

 FUNC_10(VAR_7, "validator: FindKey", &VAR_10->qchase);






 FUNC_8(VAR_10->key_entry && !FUNC_6(VAR_10->key_entry));
 if(FUNC_7(VAR_10->key_entry)) {
  if(!FUNC_5(VAR_9, VAR_11, VAR_10->ds_rrset->rk.dname,
   VAR_10->ds_rrset->rk.dname_len, VAR_3,
   VAR_10->qchase.qclass, VAR_0, &VAR_16, 0)) {
   FUNC_15(VAR_7, "error generating DNSKEY request");
   return FUNC_13(VAR_9, VAR_11);
  }
  return 0;
 }

 VAR_12 = VAR_10->signer_name;
 VAR_14 = VAR_10->signer_len;
 if(!VAR_12) {
  VAR_12 = VAR_10->qchase.qname;
  VAR_14 = VAR_10->qchase.qname_len;
 }

 VAR_13 = VAR_10->key_entry->name;


 if(FUNC_12(VAR_12, VAR_13) == 0) {
  VAR_10->state = VAR_6;
  return 1;
 }

 if(VAR_10->empty_DS_name) {



  if(FUNC_12(VAR_12,
   VAR_10->empty_DS_name) == 0) {

   FUNC_15(VAR_7, "Cannot retrieve DS for signature");
   FUNC_3(VAR_9, "no signatures");
   FUNC_4(VAR_9, VAR_9->reply_origin);
   VAR_10->chase_reply->security = VAR_8;
   VAR_10->state = VAR_5;
   return 1;
  }
  VAR_13 = VAR_10->empty_DS_name;
 }

 FUNC_9(VAR_7, "current keyname", VAR_13,
  VAR_3, VAR_2);
 FUNC_9(VAR_7, "target keyname", VAR_12,
  VAR_3, VAR_2);

 if(!FUNC_2(VAR_12, VAR_13)) {
  FUNC_15(VAR_7, "bad signer name");
  VAR_10->chase_reply->security = VAR_8;
  VAR_10->state = VAR_5;
  return 1;
 }

 VAR_15 = FUNC_0(VAR_12) -
  FUNC_0(VAR_13) - 1;
 FUNC_8(VAR_15 >= -1);
 FUNC_15(VAR_7, "striplab %d", VAR_15);
 if(VAR_15 > 0) {
  FUNC_1(&VAR_12, &VAR_14,
   VAR_15);
 }
 FUNC_9(VAR_7, "next keyname", VAR_12,
  VAR_3, VAR_2);



 if(VAR_10->ds_rrset)
  FUNC_9(VAR_7, "DS RRset", VAR_10->ds_rrset->rk.dname, VAR_4, VAR_2);
 else FUNC_15(VAR_7, "No DS RRset");

 if(VAR_10->ds_rrset && FUNC_12(VAR_10->ds_rrset->rk.dname,
  VAR_10->key_entry->name) != 0) {
  if(!FUNC_5(VAR_9, VAR_11, VAR_10->ds_rrset->rk.dname,
   VAR_10->ds_rrset->rk.dname_len, VAR_3,
   VAR_10->qchase.qclass, VAR_0, &VAR_16, 0)) {
   FUNC_15(VAR_7, "error generating DNSKEY request");
   return FUNC_13(VAR_9, VAR_11);
  }
  return 0;
 }

 if(!VAR_10->ds_rrset || FUNC_12(VAR_10->ds_rrset->rk.dname,
  VAR_12) != 0) {
  struct dns_msg* VAR_17;
  if(!VAR_9->blacklist && !VAR_10->chain_blacklist &&
   (VAR_17=FUNC_14(VAR_9->env, VAR_12,
   VAR_14, VAR_10->qchase.qclass, VAR_9->region,
   VAR_10->key_entry->name)) ) {
   FUNC_15(VAR_7, "Process cached DS response");
   FUNC_11(VAR_9, VAR_10, VAR_11, VAR_1,
    VAR_17, &VAR_17->qinfo, ((void*)0));
   return 1;
  }
  if(!FUNC_5(VAR_9, VAR_11, VAR_12,
   VAR_14, VAR_4, VAR_10->qchase.qclass,
   VAR_0, &VAR_16, 0)) {
   FUNC_15(VAR_7, "error generating DS request");
   return FUNC_13(VAR_9, VAR_11);
  }
  return 0;
 }


 if(!FUNC_5(VAR_9, VAR_11, VAR_10->ds_rrset->rk.dname,
  VAR_10->ds_rrset->rk.dname_len, VAR_3,
  VAR_10->qchase.qclass, VAR_0, &VAR_16, 0)) {
  FUNC_15(VAR_7, "error generating DNSKEY request");
  return FUNC_13(VAR_9, VAR_11);
 }

 return 0;
}
