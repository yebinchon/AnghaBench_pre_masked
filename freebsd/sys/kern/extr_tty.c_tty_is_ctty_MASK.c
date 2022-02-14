
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {scalar_t__ t_session; } ;
struct proc {scalar_t__ p_session; int p_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tty*,int ) ;

__attribute__((used)) static __inline int
FUNC_1(struct tty *VAR_2, struct proc *VAR_3)
{

 FUNC_0(VAR_2, VAR_0);

 return (VAR_3->p_session == VAR_2->t_session && VAR_3->p_flag & VAR_1);
}
