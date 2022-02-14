
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct htb_sched {int dummy; } ;
struct TYPE_3__ {int drop_list; } ;
struct TYPE_4__ {TYPE_1__ leaf; } ;
struct htb_class {TYPE_2__ un; scalar_t__ prio_activity; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct htb_sched*,struct htb_class*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct htb_sched *VAR_0, struct htb_class *VAR_1)
{
 FUNC_0(!VAR_1->prio_activity);

 FUNC_1(VAR_0, VAR_1);
 VAR_1->prio_activity = 0;
 FUNC_2(&VAR_1->un.leaf.drop_list);
}
