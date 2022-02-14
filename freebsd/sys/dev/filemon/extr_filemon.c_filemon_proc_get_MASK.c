
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int * p_filemon; } ;
struct filemon {int lock; } ;


 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 struct filemon* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct filemon *
FUNC_4(struct proc *VAR_0)
{
 struct filemon *VAR_1;

 if (VAR_0->p_filemon == ((void*)0))
  return (((void*)0));
 FUNC_0(VAR_0);
 VAR_1 = FUNC_2(VAR_0->p_filemon);
 FUNC_1(VAR_0);

 if (VAR_1 == ((void*)0))
  return (((void*)0));




 FUNC_3(&VAR_1->lock);
 return (VAR_1);
}
