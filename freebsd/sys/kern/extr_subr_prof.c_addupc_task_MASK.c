
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v ;
typedef scalar_t__ uintfptr_t ;
typedef int u_short ;
typedef scalar_t__ u_int ;
struct uprof {scalar_t__ pr_off; scalar_t__ pr_size; scalar_t__ pr_base; } ;
struct thread {struct proc* td_proc; } ;
struct proc {int p_flag; scalar_t__ p_profthreads; TYPE_1__* p_stats; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {struct uprof p_prof; } ;


 scalar_t__ FUNC_0 (scalar_t__,struct uprof*) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct proc*) ;
 int FUNC_3 (struct proc*) ;
 int FUNC_4 (struct proc*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (scalar_t__,int *,int) ;
 scalar_t__ FUNC_6 (int *,scalar_t__,int) ;
 int FUNC_7 (struct proc*) ;
 int FUNC_8 (scalar_t__*) ;

void
FUNC_9(struct thread *VAR_2, uintfptr_t VAR_3, u_int VAR_4)
{
 struct proc *VAR_5 = VAR_2->td_proc;
 struct uprof *VAR_6;
 caddr_t VAR_7;
 u_int VAR_8;
 u_short VAR_9;
 int VAR_10 = 0;

 if (VAR_4 == 0)
  return;

 FUNC_1(VAR_5);
 if (!(VAR_5->p_flag & VAR_0)) {
  FUNC_4(VAR_5);
  return;
 }
 VAR_5->p_profthreads++;
 VAR_6 = &VAR_5->p_stats->p_prof;
 FUNC_2(VAR_5);
 if (VAR_3 < VAR_6->pr_off ||
     (VAR_8 = FUNC_0(VAR_3, VAR_6)) >= VAR_6->pr_size) {
  FUNC_3(VAR_5);
  goto out;
 }

 VAR_7 = VAR_6->pr_base + VAR_8;
 FUNC_3(VAR_5);
 FUNC_4(VAR_5);
 if (FUNC_5(VAR_7, &VAR_9, sizeof(VAR_9)) == 0) {
  VAR_9 += VAR_4;
  if (FUNC_6(&VAR_9, VAR_7, sizeof(VAR_9)) == 0) {
   FUNC_1(VAR_5);
   goto out;
  }
 }
 VAR_10 = 1;
 FUNC_1(VAR_5);

out:
 if (--VAR_5->p_profthreads == 0) {
  if (VAR_5->p_flag & VAR_1) {
   FUNC_8(&VAR_5->p_profthreads);
   VAR_5->p_flag &= ~VAR_1;
   VAR_10 = 0;
  }
 }
 if (VAR_10)
  FUNC_7(VAR_5);
 FUNC_4(VAR_5);
}
