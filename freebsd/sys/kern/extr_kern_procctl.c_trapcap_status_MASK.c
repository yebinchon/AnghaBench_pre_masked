
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct proc {int p_flag2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_0(struct thread *VAR_3, struct proc *VAR_4, int *VAR_5)
{

 *VAR_5 = (VAR_4->p_flag2 & VAR_0) != 0 ? VAR_2 :
     VAR_1;
 return (0);
}
