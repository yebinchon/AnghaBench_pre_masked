
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rrset_ref {TYPE_2__* key; } ;
struct TYPE_3__ {int lock; } ;
struct TYPE_4__ {TYPE_1__ entry; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct rrset_ref* VAR_0, size_t VAR_1)
{
 size_t VAR_2;
 for(VAR_2=0; VAR_2<VAR_1; VAR_2++) {
  if(VAR_2>0 && VAR_0[VAR_2].key == VAR_0[VAR_2-1].key)
   continue;
  FUNC_0(&VAR_0[VAR_2].key->entry.lock);
 }
}
