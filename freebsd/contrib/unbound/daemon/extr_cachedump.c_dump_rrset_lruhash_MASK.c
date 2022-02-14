
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct ub_packed_rrset_key {int dummy; } ;
struct packed_rrset_data {int dummy; } ;
struct lruhash_entry {int lock; scalar_t__ data; scalar_t__ key; struct lruhash_entry* lru_next; } ;
struct lruhash {struct lruhash_entry* lru_start; } ;
typedef int RES ;


 int FUNC_0 (int *,struct ub_packed_rrset_key*,struct packed_rrset_data*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(RES* VAR_0, struct lruhash* VAR_1, time_t VAR_2)
{
 struct lruhash_entry* VAR_3;


 for(VAR_3=VAR_1->lru_start; VAR_3; VAR_3 = VAR_3->lru_next) {
  FUNC_1(&VAR_3->lock);
  if(!FUNC_0(VAR_0, (struct ub_packed_rrset_key*)VAR_3->key,
   (struct packed_rrset_data*)VAR_3->data, VAR_2)) {
   FUNC_2(&VAR_3->lock);
   return 0;
  }
  FUNC_2(&VAR_3->lock);
 }
 return 1;
}
