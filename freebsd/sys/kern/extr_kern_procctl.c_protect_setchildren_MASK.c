
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct proc {struct proc* p_pptr; int p_children; } ;


 int FUNC_0 (int *) ;
 struct proc* FUNC_1 (int *) ;
 struct proc* FUNC_2 (struct proc*,int ) ;
 int FUNC_3 (struct proc*) ;
 int FUNC_4 (struct proc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct thread*,struct proc*,int) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int
FUNC_7(struct thread *VAR_3, struct proc *VAR_4, int VAR_5)
{
 struct proc *VAR_6;
 int VAR_7;

 VAR_6 = VAR_4;
 VAR_7 = 0;
 FUNC_6(&VAR_2, VAR_0);
 for (;;) {
  VAR_7 |= FUNC_5(VAR_3, VAR_6, VAR_5);
  FUNC_4(VAR_6);





  if (!FUNC_0(&VAR_6->p_children))
   VAR_6 = FUNC_1(&VAR_6->p_children);
  else for (;;) {
   if (VAR_6 == VAR_4) {
    FUNC_3(VAR_6);
    return (VAR_7);
   }
   if (FUNC_2(VAR_6, VAR_1)) {
    VAR_6 = FUNC_2(VAR_6, VAR_1);
    break;
   }
   VAR_6 = VAR_6->p_pptr;
  }
  FUNC_3(VAR_6);
 }
}
