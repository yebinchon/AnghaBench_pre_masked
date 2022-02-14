
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct thread*,int ) ;

int
FUNC_1(struct thread *VAR_2)
{
 FUNC_0(VAR_2, VAR_0);
 return (VAR_2->td_flags & VAR_1);
}
