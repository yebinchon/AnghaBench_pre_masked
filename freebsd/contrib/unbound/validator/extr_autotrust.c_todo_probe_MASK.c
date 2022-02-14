
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct trust_anchor {TYPE_2__* autr; int lock; } ;
struct module_env {scalar_t__* now; TYPE_3__* anchors; } ;
struct TYPE_10__ {scalar_t__ key; } ;
typedef TYPE_4__ rbnode_type ;
struct TYPE_9__ {int lock; TYPE_1__* autr; } ;
struct TYPE_8__ {int pnode; int retry_time; scalar_t__ next_probe_time; } ;
struct TYPE_7__ {int probe; } ;


 TYPE_4__* VAR_0 ;
 scalar_t__ FUNC_0 (struct module_env*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct trust_anchor*) ;
 TYPE_4__* FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static struct trust_anchor*
FUNC_6(struct module_env* VAR_1, time_t* VAR_2)
{
 struct trust_anchor* VAR_3;
 rbnode_type* VAR_4;

 FUNC_1(&VAR_1->anchors->lock);
 if( (VAR_4=FUNC_4(&VAR_1->anchors->autr->probe)) == VAR_0) {

  FUNC_2(&VAR_1->anchors->lock);

  *VAR_2 = 0;
  return ((void*)0);
 }
 VAR_3 = (struct trust_anchor*)VAR_4->key;
 FUNC_1(&VAR_3->lock);


 if((time_t)VAR_3->autr->next_probe_time > *VAR_1->now) {

  *VAR_2 = (time_t)VAR_3->autr->next_probe_time - *VAR_1->now;
  FUNC_2(&VAR_3->lock);
  FUNC_2(&VAR_1->anchors->lock);
  return ((void*)0);
 }


 (void)FUNC_3(&VAR_1->anchors->autr->probe, VAR_3);
 VAR_3->autr->next_probe_time = FUNC_0(VAR_1, VAR_3->autr->retry_time);
 (void)FUNC_5(&VAR_1->anchors->autr->probe, &VAR_3->autr->pnode);
 FUNC_2(&VAR_1->anchors->lock);

 return VAR_3;
}
