
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dname; } ;
struct ub_packed_rrset_key {TYPE_1__ rk; } ;
struct packed_rrset_data {scalar_t__ ttl; } ;
struct lruhash_entry {scalar_t__ data; scalar_t__ key; } ;
struct del_info {scalar_t__ expired; int num_rrsets; int name; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct lruhash_entry* VAR_0, void* VAR_1)
{

 struct del_info* VAR_2 = (struct del_info*)VAR_1;
 struct ub_packed_rrset_key* VAR_3 = (struct ub_packed_rrset_key*)VAR_0->key;
 if(FUNC_0(VAR_3->rk.dname, VAR_2->name)) {
  struct packed_rrset_data* VAR_4 =
   (struct packed_rrset_data*)VAR_0->data;
  if(VAR_4->ttl > VAR_2->expired) {
   VAR_4->ttl = VAR_2->expired;
   VAR_2->num_rrsets++;
  }
 }
}
