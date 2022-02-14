
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct thread {TYPE_1__* td_proc; int td_pri_class; } ;
struct TYPE_5__ {int ts_ltick; int ts_ftick; scalar_t__ ts_ticks; } ;
struct TYPE_4__ {scalar_t__ p_nice; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (struct thread*) ;
 int FUNC_7 (struct thread*,int) ;
 TYPE_2__* FUNC_8 (struct thread*) ;

__attribute__((used)) static void
FUNC_9(struct thread *VAR_8)
{
 int VAR_9;
 int VAR_10;

 if (FUNC_1(VAR_8->td_pri_class) != VAR_4)
  return;
 VAR_9 = FUNC_4(0, FUNC_6(VAR_8) + VAR_8->td_proc->p_nice);
 if (VAR_9 < VAR_7) {
  VAR_10 = VAR_3;
  VAR_10 += ((VAR_1 - VAR_3 + 1) /
      VAR_7) * VAR_9;
  FUNC_0(VAR_10 >= VAR_3 && VAR_10 <= VAR_1,
      ("sched_priority: invalid interactive priority %d score %d",
      VAR_10, VAR_9));
 } else {
  VAR_10 = VAR_5;
  if (FUNC_8(VAR_8)->ts_ticks)
   VAR_10 += FUNC_5(FUNC_3(FUNC_8(VAR_8)),
       VAR_6 - 1);
  VAR_10 += FUNC_2(VAR_8->td_proc->p_nice);
  FUNC_0(VAR_10 >= VAR_2 && VAR_10 <= VAR_0,
      ("sched_priority: invalid priority %d: nice %d, "
      "ticks %d ftick %d ltick %d tick pri %d",
      VAR_10, VAR_8->td_proc->p_nice, FUNC_8(VAR_8)->ts_ticks,
      FUNC_8(VAR_8)->ts_ftick, FUNC_8(VAR_8)->ts_ltick,
      FUNC_3(FUNC_8(VAR_8))));
 }
 FUNC_7(VAR_8, VAR_10);

 return;
}
