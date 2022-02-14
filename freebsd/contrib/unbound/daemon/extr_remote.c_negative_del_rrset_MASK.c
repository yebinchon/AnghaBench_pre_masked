
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct ub_packed_rrset_key {TYPE_1__ rk; } ;
struct packed_rrset_data {int count; scalar_t__ rrsig_count; scalar_t__* rr_len; int ttl; } ;
struct lruhash_entry {scalar_t__ data; scalar_t__ key; } ;
struct del_info {int num_rrsets; int expired; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct lruhash_entry* VAR_1, void* VAR_2)
{

 struct del_info* VAR_3 = (struct del_info*)VAR_2;
 struct ub_packed_rrset_key* VAR_4 = (struct ub_packed_rrset_key*)VAR_1->key;
 struct packed_rrset_data* VAR_5 = (struct packed_rrset_data*)VAR_1->data;


 if((VAR_4->rk.flags & VAR_0) && VAR_5->count == 1 &&
  VAR_5->rrsig_count == 0 && VAR_5->rr_len[0] == 0) {
  VAR_5->ttl = VAR_3->expired;
  VAR_3->num_rrsets++;
 }
}
