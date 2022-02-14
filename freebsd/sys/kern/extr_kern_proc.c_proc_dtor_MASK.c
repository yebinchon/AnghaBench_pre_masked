
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int p_numthreads; int * p_ksi; int * td_su; int p_ktr; } ;
struct proc {int p_numthreads; int * p_ksi; int * td_su; int p_ktr; } ;


 int FUNC_0 (int ,struct thread*) ;
 struct thread* FUNC_1 (struct thread*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct thread*) ;
 int VAR_0 ;
 int FUNC_7 (struct thread*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_8(void *VAR_2, int VAR_3, void *VAR_4)
{
 struct proc *VAR_5;
 struct thread *VAR_6;


 VAR_5 = (struct proc *)VAR_2;
 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6 != ((void*)0)) {






  FUNC_6(VAR_6);
  FUNC_7(VAR_6);
  FUNC_4(VAR_6->td_su == ((void*)0));


  FUNC_0(VAR_1, VAR_6);
 }
 FUNC_0(VAR_0, VAR_5);
 if (VAR_5->p_ksi != ((void*)0))
  FUNC_2(! FUNC_3(VAR_5->p_ksi), ("SIGCHLD queue"));
}
