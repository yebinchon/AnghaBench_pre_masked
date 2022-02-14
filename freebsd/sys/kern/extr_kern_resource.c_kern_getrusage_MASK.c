
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {struct proc* td_proc; } ;
struct rusage {int ru_stime; int ru_utime; } ;
struct proc {TYPE_1__* p_stats; } ;
struct TYPE_2__ {struct rusage p_cru; } ;


 int VAR_0 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct proc*) ;
 int FUNC_3 (struct proc*) ;



 int FUNC_4 (struct proc*,int *,int *) ;
 int FUNC_5 (struct proc*,struct rusage*,int *,int *) ;
 int FUNC_6 (struct thread*,struct rusage*) ;
 int FUNC_7 (struct thread*) ;
 int FUNC_8 (struct thread*) ;

int
FUNC_9(struct thread *VAR_1, int VAR_2, struct rusage *VAR_3)
{
 struct proc *VAR_4;
 int VAR_5;

 VAR_5 = 0;
 VAR_4 = VAR_1->td_proc;
 FUNC_0(VAR_4);
 switch (VAR_2) {
 case 129:
  FUNC_5(VAR_4, VAR_3, &VAR_3->ru_utime,
      &VAR_3->ru_stime);
  break;

 case 130:
  *VAR_3 = VAR_4->p_stats->p_cru;
  FUNC_4(VAR_4, &VAR_3->ru_utime, &VAR_3->ru_stime);
  break;

 case 128:
  FUNC_1(VAR_4);
  FUNC_7(VAR_1);
  FUNC_6(VAR_1, VAR_3);
  FUNC_8(VAR_1);
  FUNC_2(VAR_4);
  break;

 default:
  VAR_5 = VAR_0;
 }
 FUNC_3(VAR_4);
 return (VAR_5);
}
