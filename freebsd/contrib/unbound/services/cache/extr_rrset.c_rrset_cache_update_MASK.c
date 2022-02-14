
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int time_t ;
struct TYPE_4__ {scalar_t__ data; int hash; } ;
struct TYPE_3__ {int * dname; int type; } ;
struct ub_packed_rrset_key {scalar_t__ id; TYPE_2__ entry; TYPE_1__ rk; } ;
struct rrset_ref {scalar_t__ id; struct ub_packed_rrset_key* key; } ;
struct rrset_cache {int table; } ;
struct packed_rrset_data {int dummy; } ;
struct lruhash_entry {int lock; scalar_t__ data; scalar_t__ key; } ;
struct alloc_cache {int dummy; } ;
typedef int hashvalue_type ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,scalar_t__,int ,int,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct rrset_ref*,struct alloc_cache*) ;
 int FUNC_5 (struct packed_rrset_data*,struct packed_rrset_data*) ;
 int FUNC_6 (int *,int ,TYPE_2__*,scalar_t__,struct alloc_cache*) ;
 struct lruhash_entry* FUNC_7 (int *,int ,struct ub_packed_rrset_key*,int ) ;
 int FUNC_8 (struct ub_packed_rrset_key*,struct alloc_cache*) ;

int
FUNC_9(struct rrset_cache* VAR_4, struct rrset_ref* VAR_5,
 struct alloc_cache* VAR_6, time_t VAR_7)
{
 struct lruhash_entry* VAR_8;
 struct ub_packed_rrset_key* VAR_9 = VAR_5->key;
 hashvalue_type VAR_10 = VAR_9->entry.hash;
 uint16_t VAR_11 = FUNC_3(VAR_9->rk.type);
 int VAR_12 = 0;
 FUNC_1(VAR_5->id != 0 && VAR_9->id != 0);
 FUNC_1(VAR_9->rk.dname != ((void*)0));

 if((VAR_8=FUNC_7(&VAR_4->table, VAR_10, VAR_9, 0)) != 0) {







  VAR_5->key = (struct ub_packed_rrset_key*)VAR_8->key;
  VAR_5->id = VAR_5->key->id;
  VAR_12 = FUNC_5((struct packed_rrset_data*)VAR_9->entry.
   data, (struct packed_rrset_data*)VAR_8->data);
  if(!FUNC_2(VAR_9->entry.data, VAR_8->data, VAR_7,
   VAR_12, (VAR_11==VAR_1))) {

   FUNC_0(&VAR_8->lock);
   FUNC_8(VAR_9, VAR_6);
   if(VAR_12) return 2;
   return 1;
  }
  FUNC_0(&VAR_8->lock);







 }
 FUNC_1(VAR_5->key->id != 0);
 FUNC_6(&VAR_4->table, VAR_10, &VAR_9->entry, VAR_9->entry.data, VAR_6);
 if(VAR_8) {



  if((VAR_11 == VAR_2
   || VAR_11 == VAR_3
   || VAR_11 == VAR_0) && !VAR_12) {
   FUNC_4(VAR_5, VAR_6);
  }
  return 1;
 }
 return 0;
}
