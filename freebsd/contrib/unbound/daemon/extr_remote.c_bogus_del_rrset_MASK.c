
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packed_rrset_data {scalar_t__ security; int ttl; } ;
struct lruhash_entry {scalar_t__ data; } ;
struct del_info {int num_rrsets; int expired; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct lruhash_entry* VAR_1, void* VAR_2)
{

 struct del_info* VAR_3 = (struct del_info*)VAR_2;
 struct packed_rrset_data* VAR_4 = (struct packed_rrset_data*)VAR_1->data;
 if(VAR_4->security == VAR_0) {
  VAR_4->ttl = VAR_3->expired;
  VAR_3->num_rrsets++;
 }
}
