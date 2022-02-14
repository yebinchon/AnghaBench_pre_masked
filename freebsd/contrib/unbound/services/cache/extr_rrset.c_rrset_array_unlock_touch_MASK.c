
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rrset_ref {int id; TYPE_2__* key; } ;
struct rrset_cache {int dummy; } ;
struct regional {int dummy; } ;
typedef int hashvalue_type ;
struct TYPE_3__ {int lock; int hash; } ;
struct TYPE_4__ {TYPE_1__ entry; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct regional*,int) ;
 int FUNC_3 (struct rrset_cache*,TYPE_2__*,int ,int ) ;

void
FUNC_4(struct rrset_cache* VAR_1, struct regional* VAR_2,
 struct rrset_ref* VAR_3, size_t VAR_4)
{
 hashvalue_type* VAR_5;
 size_t VAR_6;
 if(VAR_4 > VAR_0 || !(VAR_5 = (hashvalue_type*)FUNC_2(
  VAR_2, sizeof(hashvalue_type)*VAR_4))) {
  FUNC_1("rrset LRU: memory allocation failed");
  VAR_5 = ((void*)0);
 } else
  for(VAR_6=0; VAR_6<VAR_4; VAR_6++)
   VAR_5[VAR_6] = VAR_3[VAR_6].key->entry.hash;

 for(VAR_6=0; VAR_6<VAR_4; VAR_6++) {
  if(VAR_6>0 && VAR_3[VAR_6].key == VAR_3[VAR_6-1].key)
   continue;
  FUNC_0(&VAR_3[VAR_6].key->entry.lock);
 }
 if(VAR_5) {

  for(VAR_6=0; VAR_6<VAR_4; VAR_6++) {
   if(VAR_6>0 && VAR_3[VAR_6].key == VAR_3[VAR_6-1].key)
    continue;
   FUNC_3(VAR_1, VAR_3[VAR_6].key, VAR_5[VAR_6], VAR_3[VAR_6].id);
  }
 }
}
