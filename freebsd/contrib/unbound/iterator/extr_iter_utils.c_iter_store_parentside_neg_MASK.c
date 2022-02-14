
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int time_t ;
struct TYPE_4__ {struct packed_rrset_data* data; int hash; struct ub_packed_rrset_key* key; } ;
struct TYPE_3__ {int dname_len; int dname; scalar_t__ flags; void* rrset_class; void* type; } ;
struct ub_packed_rrset_key {TYPE_2__ entry; TYPE_1__ rk; } ;
struct reply_info {scalar_t__ rrset_count; struct ub_packed_rrset_key** rrsets; } ;
struct query_info {int qname_len; int qname; int qclass; int qtype; } ;
struct packed_rrset_data {int count; size_t* rr_len; int * rr_data; int ttl; int * rr_ttl; int trust; scalar_t__ rrsig_count; } ;
struct module_env {int scratch; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct module_env*,struct ub_packed_rrset_key*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,struct ub_packed_rrset_key*) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (struct packed_rrset_data*) ;
 scalar_t__ FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int ,int ) ;
 scalar_t__ FUNC_8 (int ,int) ;
 struct ub_packed_rrset_key* FUNC_9 (struct reply_info*) ;
 int FUNC_10 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (struct ub_packed_rrset_key*) ;

void FUNC_13(struct module_env* VAR_3,
        struct query_info* VAR_4, struct reply_info* VAR_5)
{



 time_t VAR_6 = VAR_0;
 struct ub_packed_rrset_key* VAR_7;
 struct packed_rrset_data* VAR_8;
 if(VAR_5) {
  struct ub_packed_rrset_key* VAR_9 = FUNC_9(VAR_5);
  if(!VAR_9 && VAR_5->rrset_count != 0) VAR_9 = VAR_5->rrsets[0];
  if(VAR_9) VAR_6 = FUNC_12(VAR_9);
 }

 VAR_7 = (struct ub_packed_rrset_key*)FUNC_6(VAR_3->scratch,
                 sizeof(struct ub_packed_rrset_key));
 if(!VAR_7) {
  FUNC_2("out of memory in store_parentside_neg");
  return;
 }
 FUNC_4(&VAR_7->entry, 0, sizeof(VAR_7->entry));
 VAR_7->entry.key = VAR_7;
 VAR_7->rk.type = FUNC_0(VAR_4->qtype);
 VAR_7->rk.rrset_class = FUNC_0(VAR_4->qclass);
 VAR_7->rk.flags = 0;
 VAR_7->rk.dname = FUNC_7(VAR_3->scratch, VAR_4->qname,
  VAR_4->qname_len);
 if(!VAR_7->rk.dname) {
  FUNC_2("out of memory in store_parentside_neg");
  return;
 }
 VAR_7->rk.dname_len = VAR_4->qname_len;
 VAR_7->entry.hash = FUNC_10(&VAR_7->rk);
 VAR_8 = (struct packed_rrset_data*)FUNC_8(VAR_3->scratch,
  sizeof(struct packed_rrset_data) + sizeof(size_t) +
  sizeof(uint8_t*) + sizeof(time_t) + sizeof(uint16_t));
 if(!VAR_8) {
  FUNC_2("out of memory in store_parentside_neg");
  return;
 }
 VAR_7->entry.data = VAR_8;
 VAR_8->ttl = VAR_6;


 VAR_8->count = 1;
 VAR_8->rrsig_count = 0;
 VAR_8->trust = VAR_2;
 VAR_8->rr_len = (size_t*)((uint8_t*)VAR_8 +
  sizeof(struct packed_rrset_data));
 VAR_8->rr_len[0] = 0 + sizeof(uint16_t);
 FUNC_5(VAR_8);
 VAR_8->rr_ttl[0] = VAR_8->ttl;
 FUNC_11(VAR_8->rr_data[0], 0 );

 FUNC_3(VAR_1, "store parent-side negative", VAR_7);
 FUNC_1(VAR_3, VAR_7);
}
