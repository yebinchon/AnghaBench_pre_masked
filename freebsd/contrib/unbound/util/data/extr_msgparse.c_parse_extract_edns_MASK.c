
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct rrset_parse {scalar_t__ type; scalar_t__ section; int rr_count; int dname_len; scalar_t__* dname; TYPE_2__* rr_first; int rrset_class; TYPE_1__* rr_last; struct rrset_parse* rrset_all_next; } ;
struct regional {int dummy; } ;
struct msg_parse {int rrset_count; int ar_rrsets; int arcount; struct rrset_parse* rrset_last; struct rrset_parse* rrset_first; } ;
struct edns_data {int udp_size; int edns_present; int * opt_list; int bits; int edns_version; int ext_rcode; } ;
struct TYPE_4__ {int size; int * ttl_data; } ;
struct TYPE_3__ {int * ttl_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct edns_data*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,size_t,struct edns_data*,struct regional*) ;
 int FUNC_4 (int *) ;

int
FUNC_5(struct msg_parse* VAR_3, struct edns_data* VAR_4,
 struct regional* VAR_5)
{
 struct rrset_parse* VAR_6 = VAR_3->rrset_first;
 struct rrset_parse* VAR_7 = 0;
 struct rrset_parse* VAR_8 = 0;
 struct rrset_parse* VAR_9 = 0;
 size_t VAR_10;
 uint8_t* VAR_11;


 while(VAR_6) {
  if(VAR_6->type == VAR_1) {

   if(VAR_8) return VAR_0;

   VAR_9 = VAR_7;
   VAR_8 = VAR_6;
  }
  VAR_7 = VAR_6;
  VAR_6 = VAR_6->rrset_all_next;
 }
 if(!VAR_8) {
  FUNC_1(VAR_4, 0, sizeof(*VAR_4));
  VAR_4->udp_size = 512;
  return 0;
 }


 if(VAR_8->section != VAR_2)
  return VAR_0;
 if(VAR_8->rr_count == 0)
  return VAR_0;
 if(0) {
  if(VAR_8->dname_len != 1 || !VAR_8->dname
   || VAR_8->dname[0] != 0) return VAR_0;
  if(VAR_8->rr_count != 1) return VAR_0;
 }
 FUNC_0(VAR_8->rr_first && VAR_8->rr_last);


 if(VAR_9) VAR_9->rrset_all_next = VAR_8->rrset_all_next;
 else VAR_3->rrset_first = VAR_8->rrset_all_next;
 if(VAR_8 == VAR_3->rrset_last)
  VAR_3->rrset_last = VAR_9;
 VAR_3->arcount --;
 VAR_3->ar_rrsets --;
 VAR_3->rrset_count --;


 VAR_4->edns_present = 1;
 VAR_4->ext_rcode = VAR_8->rr_last->ttl_data[0];
 VAR_4->edns_version = VAR_8->rr_last->ttl_data[1];
 VAR_4->bits = FUNC_4(&VAR_8->rr_last->ttl_data[2]);
 VAR_4->udp_size = FUNC_2(VAR_8->rrset_class);
 VAR_4->opt_list = ((void*)0);


 VAR_10 = VAR_8->rr_first->size-2;
 VAR_11 = VAR_8->rr_first->ttl_data+6;
 if(!FUNC_3(VAR_11, VAR_10, VAR_4, VAR_5))
  return 0;



 return 0;
}
