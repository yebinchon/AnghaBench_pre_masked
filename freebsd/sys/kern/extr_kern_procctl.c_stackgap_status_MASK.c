
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct proc {int p_flag2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct proc*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_1(struct thread *VAR_7, struct proc *VAR_8, int *VAR_9)
{
 FUNC_0(VAR_8, VAR_0);

 *VAR_9 = (VAR_8->p_flag2 & VAR_1) != 0 ? VAR_3 :
     VAR_5;
 *VAR_9 |= (VAR_8->p_flag2 & VAR_2) != 0 ?
     VAR_4 : VAR_6;
 return (0);
}
