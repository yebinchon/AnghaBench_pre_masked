
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ns; } ;
struct cgroup_pidlist {int mutex; TYPE_2__* owner; TYPE_1__ key; int list; int links; int use_count; } ;
struct TYPE_4__ {int pidlist_mutex; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cgroup_pidlist*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct cgroup_pidlist *VAR_0)
{






 FUNC_4(&VAR_0->owner->pidlist_mutex);
 FUNC_1(&VAR_0->mutex);
 FUNC_0(!VAR_0->use_count);
 if (!--VAR_0->use_count) {

  FUNC_3(&VAR_0->links);
  FUNC_5(&VAR_0->owner->pidlist_mutex);
  FUNC_6(VAR_0->list);
  FUNC_7(VAR_0->key.ns);
  FUNC_8(&VAR_0->mutex);
  FUNC_2(VAR_0);
  return;
 }
 FUNC_5(&VAR_0->owner->pidlist_mutex);
 FUNC_8(&VAR_0->mutex);
}
