
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct proc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1, int VAR_2)
{
 struct proc *VAR_3 = VAR_1;

 FUNC_1(&VAR_0);
 while (--VAR_2 >= 0) {
  if (FUNC_0(VAR_3))
   break;
 }
 FUNC_2(&VAR_0);
}
