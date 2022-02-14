
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct signal_struct {int flags; scalar_t__ group_stop_count; } ;
struct sighand_struct {int siglock; struct k_sigaction* action; } ;
struct pt_regs {int dummy; } ;
struct TYPE_11__ {scalar_t__ sa_handler; int sa_flags; } ;
struct k_sigaction {TYPE_1__ sa; } ;
struct TYPE_12__ {int si_signo; } ;
typedef TYPE_2__ siginfo_t ;
struct TYPE_13__ {int flags; int blocked; int group_leader; struct signal_struct* signal; struct sighand_struct* sighand; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 TYPE_3__* VAR_11 ;
 int FUNC_0 (TYPE_3__*,int *,TYPE_2__*) ;
 int FUNC_1 (int ,int ,struct pt_regs*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct pt_regs*,int ) ;
 scalar_t__ VAR_12 ;
 int FUNC_8 (int,TYPE_2__*,struct pt_regs*,void*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (int) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int VAR_13 ;
 int FUNC_17 (int,TYPE_2__*,struct k_sigaction*) ;
 int FUNC_18 (TYPE_3__*,struct pt_regs*,TYPE_2__*,struct k_sigaction*) ;
 int FUNC_19 (int,int) ;
 int FUNC_20 () ;
 scalar_t__ FUNC_21 (int) ;

int FUNC_22(siginfo_t *VAR_14, struct k_sigaction *VAR_15,
     struct pt_regs *VAR_16, void *VAR_17)
{
 struct sighand_struct *VAR_18 = VAR_11->sighand;
 struct signal_struct *VAR_19 = VAR_11->signal;
 int VAR_20;

relock:






 FUNC_20();

 FUNC_15(&VAR_18->siglock);





 if (FUNC_21(VAR_19->flags & VAR_5)) {
  int VAR_21 = (VAR_19->flags & VAR_6)
    ? VAR_0 : VAR_1;
  VAR_19->flags &= ~VAR_5;

  VAR_21 = FUNC_19(VAR_21, VAR_0);
  FUNC_16(&VAR_18->siglock);

  if (VAR_21) {
   FUNC_9(&VAR_13);
   FUNC_3(VAR_11->group_leader, VAR_21);
   FUNC_10(&VAR_13);
  }
  goto relock;
 }

 for (;;) {
  struct k_sigaction *VAR_22;





  VAR_20 = FUNC_18(VAR_11, VAR_16, VAR_14, VAR_15);
  if (FUNC_21(VAR_20 < 0))
   goto relock;
  if (FUNC_21(VAR_20 != 0))
   VAR_22 = VAR_15;
  else {
   if (FUNC_21(VAR_19->group_stop_count > 0) &&
       FUNC_4(0))
    goto relock;

   VAR_20 = FUNC_0(VAR_11, &VAR_11->blocked,
            VAR_14);

   if (!VAR_20)
    break;

   if (VAR_20 != VAR_4) {
    VAR_20 = FUNC_8(VAR_20, VAR_14,
            VAR_16, VAR_17);
    if (!VAR_20)
     continue;
   }

   VAR_22 = &VAR_18->action[VAR_20-1];
  }


  FUNC_17(VAR_20, VAR_14, VAR_22);

  if (VAR_22->sa.sa_handler == VAR_10)
   continue;
  if (VAR_22->sa.sa_handler != VAR_9) {

   *VAR_15 = *VAR_22;

   if (VAR_22->sa.sa_flags & VAR_3)
    VAR_22->sa.sa_handler = VAR_9;

   break;
  }




  if (FUNC_12(VAR_20))
   continue;
  if (FUNC_21(VAR_19->flags & VAR_7) &&
    !FUNC_13(VAR_20))
   continue;

  if (FUNC_14(VAR_20)) {
   if (VAR_20 != VAR_8) {
    FUNC_16(&VAR_18->siglock);



    if (FUNC_5())
     goto relock;

    FUNC_15(&VAR_18->siglock);
   }

   if (FUNC_6(FUNC_4(VAR_14->si_signo))) {

    goto relock;
   }





   continue;
  }

  FUNC_16(&VAR_18->siglock);




  VAR_11->flags |= VAR_2;

  if (FUNC_11(VAR_20)) {
   if (VAR_12)
    FUNC_7(VAR_16, VAR_14->si_signo);
   FUNC_1(VAR_14->si_signo, VAR_14->si_signo, VAR_16);
  }




  FUNC_2(VAR_14->si_signo);

 }
 FUNC_16(&VAR_18->siglock);
 return VAR_20;
}
