
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct rrset_ref {scalar_t__ id; TYPE_2__* key; } ;
struct packed_rrset_data {scalar_t__ ttl; } ;
struct TYPE_3__ {scalar_t__ data; int lock; } ;
struct TYPE_4__ {scalar_t__ id; TYPE_1__ entry; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct rrset_ref*,size_t) ;

int
FUNC_2(struct rrset_ref* VAR_0, size_t VAR_1, time_t VAR_2)
{
 size_t VAR_3;
 for(VAR_3=0; VAR_3<VAR_1; VAR_3++) {
  if(VAR_3>0 && VAR_0[VAR_3].key == VAR_0[VAR_3-1].key)
   continue;
  FUNC_0(&VAR_0[VAR_3].key->entry.lock);
  if(VAR_0[VAR_3].id != VAR_0[VAR_3].key->id || VAR_2 >
   ((struct packed_rrset_data*)(VAR_0[VAR_3].key->entry.data))
   ->ttl) {

   FUNC_1(VAR_0, VAR_3+1);
   return 0;
  }
 }
 return 1;
}
