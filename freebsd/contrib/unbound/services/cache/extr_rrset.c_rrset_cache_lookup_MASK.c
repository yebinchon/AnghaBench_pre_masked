
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef scalar_t__ time_t ;
struct TYPE_3__ {int hash; int * data; struct ub_packed_rrset_key* key; } ;
struct TYPE_4__ {size_t dname_len; int flags; void* rrset_class; void* type; int * dname; } ;
struct ub_packed_rrset_key {TYPE_1__ entry; TYPE_2__ rk; } ;
struct rrset_cache {int table; } ;
struct packed_rrset_data {scalar_t__ ttl; } ;
struct lruhash_entry {scalar_t__ key; int lock; scalar_t__ data; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 struct lruhash_entry* FUNC_3 (int *,int ,struct ub_packed_rrset_key*,int) ;

struct ub_packed_rrset_key*
FUNC_4(struct rrset_cache* VAR_0, uint8_t* VAR_1, size_t VAR_2,
 uint16_t VAR_3, uint16_t VAR_4, uint32_t VAR_5, time_t VAR_6,
 int VAR_7)
{
 struct lruhash_entry* VAR_8;
 struct ub_packed_rrset_key VAR_9;

 VAR_9.entry.key = &VAR_9;
 VAR_9.entry.data = ((void*)0);
 VAR_9.rk.dname = VAR_1;
 VAR_9.rk.dname_len = VAR_2;
 VAR_9.rk.type = FUNC_0(VAR_3);
 VAR_9.rk.rrset_class = FUNC_0(VAR_4);
 VAR_9.rk.flags = VAR_5;

 VAR_9.entry.hash = FUNC_2(&VAR_9.rk);

 if((VAR_8 = FUNC_3(&VAR_0->table, VAR_9.entry.hash, &VAR_9, VAR_7))) {

  struct packed_rrset_data* VAR_10 =
   (struct packed_rrset_data*)VAR_8->data;
  if(VAR_6 > VAR_10->ttl) {
   FUNC_1(&VAR_8->lock);
   return ((void*)0);
  }

  return (struct ub_packed_rrset_key*)VAR_8->key;
 }
 return ((void*)0);
}
