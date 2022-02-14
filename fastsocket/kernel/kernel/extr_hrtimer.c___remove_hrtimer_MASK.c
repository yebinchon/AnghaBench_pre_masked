
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hrtimer_clock_base {int active; TYPE_4__* cpu_base; int offset; int * first; } ;
struct hrtimer {int state; int node; } ;
struct TYPE_6__ {scalar_t__ tv64; } ;
typedef TYPE_2__ ktime_t ;
struct TYPE_5__ {scalar_t__ tv64; } ;
struct TYPE_7__ {TYPE_1__ expires_next; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (struct hrtimer*) ;
 scalar_t__ FUNC_2 () ;
 TYPE_2__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct hrtimer *VAR_1,
        struct hrtimer_clock_base *VAR_2,
        unsigned long VAR_3, int VAR_4)
{
 if (!(VAR_1->state & VAR_0))
  goto out;





 if (VAR_2->first == &VAR_1->node) {
  VAR_2->first = FUNC_5(&VAR_1->node);
 }
 FUNC_4(&VAR_1->node, &VAR_2->active);
out:
 VAR_1->state = VAR_3;
}
