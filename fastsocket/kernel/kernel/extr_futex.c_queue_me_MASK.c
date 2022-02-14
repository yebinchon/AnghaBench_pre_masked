
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * lock; } ;
struct TYPE_6__ {TYPE_1__ plist; } ;
struct futex_q {TYPE_4__* task; TYPE_2__ list; } ;
struct futex_hash_bucket {int lock; int chain; } ;
struct TYPE_7__ {int normal_prio; } ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(struct futex_q *VAR_2, struct futex_hash_bucket *VAR_3)
{
 int VAR_4;
 VAR_4 = FUNC_0(VAR_1->normal_prio, VAR_0);

 FUNC_2(&VAR_2->list, VAR_4);



 FUNC_1(&VAR_2->list, &VAR_3->chain);
 VAR_2->task = VAR_1;
 FUNC_3(&VAR_3->lock);
}
