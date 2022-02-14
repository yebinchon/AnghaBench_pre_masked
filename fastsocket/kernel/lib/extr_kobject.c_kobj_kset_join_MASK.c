
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {TYPE_1__* kset; int entry; } ;
struct TYPE_2__ {int list_lock; int list; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct kobject *VAR_0)
{
 if (!VAR_0->kset)
  return;

 FUNC_0(VAR_0->kset);
 FUNC_2(&VAR_0->kset->list_lock);
 FUNC_1(&VAR_0->entry, &VAR_0->kset->list);
 FUNC_3(&VAR_0->kset->list_lock);
}
