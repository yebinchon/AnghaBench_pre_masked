
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {TYPE_2__* sighand; TYPE_1__* signal; } ;
struct task_cputime {int utime; int stime; } ;
struct itimerval {int it_interval; int it_value; } ;
struct cpu_itimer {int incr; int expires; } ;
typedef int cputime_t ;
struct TYPE_4__ {int siglock; } ;
struct TYPE_3__ {struct cpu_itimer* it; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *) ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct task_struct*,struct task_cputime*) ;

__attribute__((used)) static void FUNC_8(struct task_struct *VAR_3, unsigned int VAR_4,
      struct itimerval *const VAR_5)
{
 cputime_t VAR_6, VAR_7;
 struct cpu_itimer *VAR_8 = &VAR_3->signal->it[VAR_4];

 FUNC_5(&VAR_3->sighand->siglock);

 VAR_6 = VAR_8->expires;
 VAR_7 = VAR_8->incr;
 if (!FUNC_1(VAR_6, VAR_2)) {
  struct task_cputime VAR_9;
  cputime_t VAR_10;

  FUNC_7(VAR_3, &VAR_9);
  if (VAR_4 == VAR_0)
   VAR_10 = FUNC_0(VAR_9.utime, VAR_9.stime);
  else

   VAR_10 = VAR_9.utime;

  if (FUNC_2(VAR_6, VAR_10))

   VAR_6 = VAR_1;
  else
   VAR_6 = FUNC_3(VAR_6, VAR_10);
 }

 FUNC_6(&VAR_3->sighand->siglock);

 FUNC_4(VAR_6, &VAR_5->it_value);
 FUNC_4(VAR_7, &VAR_5->it_interval);
}
