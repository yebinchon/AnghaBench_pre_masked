
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc {TYPE_1__* p_itimers; } ;
struct itimer {int it_flags; } ;
struct TYPE_2__ {struct itimer** its_timers; } ;


 int VAR_0 ;
 int FUNC_0 (struct itimer*) ;
 int FUNC_1 (struct itimer*) ;
 int VAR_1 ;
 int FUNC_2 (struct proc*,int ) ;
 int VAR_2 ;

__attribute__((used)) static struct itimer *
FUNC_3(struct proc *VAR_3, int VAR_4)
{
 struct itimer *VAR_5;

 FUNC_2(VAR_3, VAR_1);
 if ((VAR_3->p_itimers == ((void*)0)) ||
     (VAR_4 < 0) || (VAR_4 >= VAR_2) ||
     (VAR_5 = VAR_3->p_itimers->its_timers[VAR_4]) == ((void*)0)) {
  return (((void*)0));
 }
 FUNC_0(VAR_5);
 if ((VAR_5->it_flags & VAR_0) != 0) {
  FUNC_1(VAR_5);
  VAR_5 = ((void*)0);
 }
 return (VAR_5);
}
