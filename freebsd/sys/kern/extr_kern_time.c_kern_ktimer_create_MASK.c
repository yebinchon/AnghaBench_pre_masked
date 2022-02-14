
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct thread {struct proc* td_proc; } ;
struct TYPE_8__ {int sival_int; } ;
struct sigevent {scalar_t__ sigev_notify; TYPE_3__ sigev_value; int sigev_signo; } ;
struct proc {TYPE_2__* p_itimers; } ;
struct TYPE_10__ {int ksi_flags; int ksi_timerid; TYPE_3__ ksi_value; int ksi_code; int ksi_signo; } ;
struct TYPE_6__ {int it_interval; int it_value; } ;
struct itimer {size_t it_clockid; int it_timerid; TYPE_5__ it_ksi; struct sigevent it_sigev; struct proc* it_proc; scalar_t__ it_overrun_last; scalar_t__ it_overrun; TYPE_1__ it_time; scalar_t__ it_active; scalar_t__ it_usecount; scalar_t__ it_flags; } ;
typedef size_t clockid_t ;
struct TYPE_9__ {int * timer_create; } ;
struct TYPE_7__ {struct itimer** its_timers; } ;


 int FUNC_0 (size_t,int ,struct itimer*) ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct itimer*) ;
 int FUNC_2 (struct itimer*) ;
 int FUNC_3 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct proc*) ;
 int FUNC_5 (struct proc*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (int ) ;
 int VAR_14 ;
 int FUNC_7 (struct proc*) ;
 int FUNC_8 (TYPE_5__*) ;
 TYPE_4__* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_9 (int *) ;
 struct itimer* FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,struct itimer*) ;

int
FUNC_12(struct thread *VAR_18, clockid_t VAR_19, struct sigevent *VAR_20,
    int *VAR_21, int VAR_22)
{
 struct proc *VAR_23 = VAR_18->td_proc;
 struct itimer *VAR_24;
 int VAR_25;
 int VAR_26;

 if (VAR_19 < 0 || VAR_19 >= VAR_4)
  return (VAR_1);

 if (VAR_15[VAR_19].timer_create == ((void*)0))
  return (VAR_1);

 if (VAR_20 != ((void*)0)) {
  if (VAR_20->sigev_notify != VAR_7 &&
      VAR_20->sigev_notify != VAR_8 &&
      VAR_20->sigev_notify != VAR_9)
   return (VAR_1);
  if ((VAR_20->sigev_notify == VAR_8 ||
       VAR_20->sigev_notify == VAR_9) &&
   !FUNC_6(VAR_20->sigev_signo))
   return (VAR_1);
 }

 if (VAR_23->p_itimers == ((void*)0))
  FUNC_7(VAR_23);

 VAR_24 = FUNC_10(VAR_14, VAR_5);
 VAR_24->it_flags = 0;
 VAR_24->it_usecount = 0;
 VAR_24->it_active = 0;
 FUNC_9(&VAR_24->it_time.it_value);
 FUNC_9(&VAR_24->it_time.it_interval);
 VAR_24->it_overrun = 0;
 VAR_24->it_overrun_last = 0;
 VAR_24->it_clockid = VAR_19;
 VAR_24->it_timerid = -1;
 VAR_24->it_proc = VAR_23;
 FUNC_8(&VAR_24->it_ksi);
 VAR_24->it_ksi.ksi_flags |= VAR_3 | VAR_2;
 VAR_26 = FUNC_0(VAR_19, VAR_16, (VAR_24));
 if (VAR_26 != 0)
  goto out;

 FUNC_4(VAR_23);
 if (VAR_22 != -1) {
  FUNC_3(VAR_22 >= 0 && VAR_22 < 3, ("invalid preset_id"));
  VAR_25 = VAR_22;
  if (VAR_23->p_itimers->its_timers[VAR_25] != ((void*)0)) {
   FUNC_5(VAR_23);
   VAR_26 = 0;
   goto out;
  }
 } else {




  for (VAR_25 = 3; VAR_25 < VAR_13; VAR_25++)
   if (VAR_23->p_itimers->its_timers[VAR_25] == ((void*)0))
    break;
  if (VAR_25 == VAR_13) {
   FUNC_5(VAR_23);
   VAR_26 = VAR_0;
   goto out;
  }
 }
 VAR_24->it_timerid = VAR_25;
 VAR_23->p_itimers->its_timers[VAR_25] = VAR_24;
 if (VAR_20 != ((void*)0))
  VAR_24->it_sigev = *VAR_20;
 else {
  VAR_24->it_sigev.sigev_notify = VAR_8;
  switch (VAR_19) {
  default:
  case 129:
   VAR_24->it_sigev.sigev_signo = VAR_6;
   break;
  case 128:
    VAR_24->it_sigev.sigev_signo = VAR_11;
   break;
  case 130:
   VAR_24->it_sigev.sigev_signo = VAR_10;
   break;
  }
  VAR_24->it_sigev.sigev_value.sival_int = VAR_25;
 }

 if (VAR_24->it_sigev.sigev_notify == VAR_8 ||
     VAR_24->it_sigev.sigev_notify == VAR_9) {
  VAR_24->it_ksi.ksi_signo = VAR_24->it_sigev.sigev_signo;
  VAR_24->it_ksi.ksi_code = VAR_12;
  VAR_24->it_ksi.ksi_value = VAR_24->it_sigev.sigev_value;
  VAR_24->it_ksi.ksi_timerid = VAR_25;
 }
 FUNC_5(VAR_23);
 *VAR_21 = VAR_25;
 return (0);

out:
 FUNC_1(VAR_24);
 FUNC_0(VAR_24->it_clockid, VAR_17, (VAR_24));
 FUNC_2(VAR_24);
 FUNC_11(VAR_14, VAR_24);
 return (VAR_26);
}
