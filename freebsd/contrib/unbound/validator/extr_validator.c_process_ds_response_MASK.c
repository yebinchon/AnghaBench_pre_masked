
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct val_qstate {scalar_t__ restart_count; void* state; struct key_entry_key* key_entry; int * chain_blacklist; int * empty_DS_name; int ds_rrset; int empty_DS_len; } ;
struct sock_list {int dummy; } ;
struct query_info {int qname; int qname_len; } ;
struct module_qstate {int * errinf; int region; } ;
struct key_entry_key {int dummy; } ;
struct dns_msg {int dummy; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (struct module_qstate*,struct val_qstate*,int,int,struct dns_msg*,struct query_info*,struct key_entry_key**) ;
 int FUNC_1 (struct module_qstate*,char*,int ) ;
 int FUNC_2 (struct module_qstate*,struct sock_list*) ;
 int FUNC_3 (struct key_entry_key*,int ) ;
 scalar_t__ FUNC_4 (struct key_entry_key*) ;
 scalar_t__ FUNC_5 (struct key_entry_key*) ;
 int FUNC_6 (char*) ;
 int * FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int **,int ,struct sock_list*,int) ;

__attribute__((used)) static void
FUNC_9(struct module_qstate* VAR_2, struct val_qstate* VAR_3,
 int VAR_4, int VAR_5, struct dns_msg* VAR_6, struct query_info* VAR_7,
 struct sock_list* VAR_8)
{
 struct key_entry_key* VAR_9 = ((void*)0);
 uint8_t* VAR_10 = VAR_3->empty_DS_name;
 VAR_3->empty_DS_name = ((void*)0);
 if(!FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, &VAR_9)) {
   FUNC_6("malloc failure in process_ds_response");
   VAR_3->key_entry = ((void*)0);
   VAR_3->state = VAR_1;
   return;
 }
 if(VAR_9 == ((void*)0)) {
  VAR_3->empty_DS_name = FUNC_7(VAR_2->region,
   VAR_7->qname, VAR_7->qname_len);
  if(!VAR_3->empty_DS_name) {
   FUNC_6("malloc failure in empty_DS_name");
   VAR_3->key_entry = ((void*)0);
   VAR_3->state = VAR_1;
   return;
  }
  VAR_3->empty_DS_len = VAR_7->qname_len;
  VAR_3->chain_blacklist = ((void*)0);


 } else if(FUNC_5(VAR_9)) {
  VAR_3->ds_rrset = FUNC_3(VAR_9, VAR_2->region);
  if(!VAR_3->ds_rrset) {
   FUNC_6("malloc failure in process DS");
   VAR_3->key_entry = ((void*)0);
   VAR_3->state = VAR_1;
   return;
  }
  VAR_3->chain_blacklist = ((void*)0);

 } else if(FUNC_4(VAR_9)
  && VAR_3->restart_count < VAR_0) {
  VAR_3->empty_DS_name = VAR_10;
  FUNC_8(&VAR_3->chain_blacklist, VAR_2->region, VAR_8, 1);
  VAR_2->errinf = ((void*)0);
  VAR_3->restart_count++;
 } else {
  if(FUNC_4(VAR_9)) {
   FUNC_2(VAR_2, VAR_8);
   FUNC_1(VAR_2, "for DS", VAR_7->qname);
  }



  VAR_3->key_entry = VAR_9;

  VAR_3->state = VAR_1;
 }
}
