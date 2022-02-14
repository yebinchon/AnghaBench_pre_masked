
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {TYPE_1__* signal; } ;
struct cpu_itimer {scalar_t__ error; scalar_t__ incr_error; int expires; int incr; } ;
typedef int cputime_t ;
struct TYPE_2__ {int leader_pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,struct task_struct*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int VAR_4 ;
 int FUNC_5 (int ,int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct task_struct *VAR_7, struct cpu_itimer *VAR_8,
        cputime_t *VAR_9, cputime_t VAR_10, int VAR_11)
{
 if (FUNC_2(VAR_8->expires, VAR_5))
  return;

 if (FUNC_3(VAR_10, VAR_8->expires)) {
  if (!FUNC_2(VAR_8->incr, VAR_5)) {
   VAR_8->expires = FUNC_1(VAR_8->expires, VAR_8->incr);
   VAR_8->error += VAR_8->incr_error;
   if (VAR_8->error >= VAR_6) {
    VAR_8->expires = FUNC_5(VAR_8->expires,
         VAR_4);
    VAR_8->error -= VAR_6;
   }
  } else {
   VAR_8->expires = VAR_5;
  }

  FUNC_6(VAR_11 == VAR_3 ?
        VAR_0 : VAR_1,
        VAR_7->signal->leader_pid, VAR_10);
  FUNC_0(VAR_11, VAR_2, VAR_7);
 }

 if (!FUNC_2(VAR_8->expires, VAR_5) &&
     (FUNC_2(*VAR_9, VAR_5) ||
      FUNC_4(VAR_8->expires, *VAR_9))) {
  *VAR_9 = VAR_8->expires;
 }
}
