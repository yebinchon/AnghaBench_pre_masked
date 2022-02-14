
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int p_flag; scalar_t__ p_profthreads; int p_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct proc*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__*,int *,int ,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

void
FUNC_5(struct proc *VAR_6)
{

 FUNC_0(VAR_6, VAR_0);
 if (VAR_6->p_flag & VAR_2) {
  if (VAR_6->p_profthreads != 0) {
   while (VAR_6->p_profthreads != 0) {
    VAR_6->p_flag |= VAR_3;
    FUNC_2(&VAR_6->p_profthreads, &VAR_6->p_mtx, VAR_1,
        "stopprof", 0);
   }
  }
  if ((VAR_6->p_flag & VAR_2) == 0)
   return;
  VAR_6->p_flag &= ~VAR_2;
  FUNC_3(&VAR_5);
  if (--VAR_4 == 0)
   FUNC_1();
  FUNC_4(&VAR_5);
 }
}
