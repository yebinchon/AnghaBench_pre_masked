
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int td_flags; int td_pri_class; int td_slptick; } ;
struct TYPE_2__ {scalar_t__ ts_slptime; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct thread*) ;
 int FUNC_2 (struct thread*,int ) ;
 int FUNC_3 (struct thread*,int) ;
 TYPE_1__* FUNC_4 (struct thread*) ;
 int VAR_4 ;

void
FUNC_5(struct thread *VAR_5, int VAR_6)
{

 FUNC_2(VAR_5, VAR_0);
 VAR_5->td_slptick = VAR_4;
 FUNC_4(VAR_5)->ts_slptime = 0;
 if (VAR_6 != 0 && FUNC_0(VAR_5->td_pri_class) == VAR_1)
  FUNC_3(VAR_5, VAR_6);
 if (FUNC_1(VAR_5) || VAR_6 >= VAR_2)
  VAR_5->td_flags |= VAR_3;
}
