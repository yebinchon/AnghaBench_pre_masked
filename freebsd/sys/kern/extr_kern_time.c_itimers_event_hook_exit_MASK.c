
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc {struct itimers* p_itimers; } ;
struct itimers {struct itimer** its_timers; } ;
struct itimer {int dummy; } ;
struct TYPE_2__ {int * event_hook; } ;


 int FUNC_0 (int,int ,struct proc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct itimers*,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*) ;
 TYPE_1__* VAR_7 ;

__attribute__((used)) static void
FUNC_4(void *VAR_8, struct proc *VAR_9)
{
 struct itimers *VAR_10;
 struct itimer *VAR_11;
 int VAR_12 = (int)(intptr_t)VAR_8;
 int VAR_13;

 if (VAR_9->p_itimers != ((void*)0)) {
  VAR_10 = VAR_9->p_itimers;
  for (VAR_13 = 0; VAR_13 < VAR_2; ++VAR_13) {
   if (VAR_7[VAR_13].event_hook != ((void*)0))
    FUNC_0(VAR_13, VAR_6, (VAR_9, VAR_13, VAR_12));
  }




  if (VAR_12 == VAR_0)
   VAR_13 = 3;
  else if (VAR_12 == VAR_1)
   VAR_13 = 0;
  else
   FUNC_3("unhandled event");
  for (; VAR_13 < VAR_4; ++VAR_13) {
   if ((VAR_11 = VAR_10->its_timers[VAR_13]) != ((void*)0))
    FUNC_2(VAR_5, VAR_13);
  }
  if (VAR_10->its_timers[0] == ((void*)0) &&
      VAR_10->its_timers[1] == ((void*)0) &&
      VAR_10->its_timers[2] == ((void*)0)) {
   FUNC_1(VAR_10, VAR_3);
   VAR_9->p_itimers = ((void*)0);
  }
 }
}
